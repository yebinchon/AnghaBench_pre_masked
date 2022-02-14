
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ intr_type; } ;
struct s2io_nic {int num_entries; int name; TYPE_5__* pdev; TYPE_4__ config; TYPE_3__* s2io_entries; TYPE_2__* msix_info; int * desc; TYPE_1__* entries; struct net_device* dev; } ;
struct net_device {char* name; } ;
struct TYPE_10__ {scalar_t__ irq; } ;
struct TYPE_8__ {scalar_t__ in_use; scalar_t__ type; struct net_device* arg; } ;
struct TYPE_7__ {scalar_t__ data; scalar_t__ addr; } ;
struct TYPE_6__ {int vector; } ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct s2io_nic*) ;
 int FUNC_4 (int,int ,int ,int ,struct net_device*) ;
 int FUNC_5 (struct s2io_nic*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (int ,char*,char*,int) ;
 int FUNC_7 (struct s2io_nic*) ;

__attribute__((used)) static int FUNC_8(struct s2io_nic *VAR_12)
{
 int VAR_13 = 0;
 struct net_device *VAR_14 = VAR_12->dev;
 int VAR_15 = 0;

 if (VAR_12->config.intr_type == VAR_8)
  VAR_13 = FUNC_5(VAR_12);
 if (VAR_13) {
  FUNC_0(VAR_0, "%s: Defaulting to INTA\n", VAR_14->name);
  VAR_12->config.intr_type = VAR_2;
 }





 FUNC_7(VAR_12);


 if (VAR_12->config.intr_type == VAR_8) {
  int VAR_16, VAR_17 = 0;

  for (VAR_16 = 0; VAR_16 < VAR_12->num_entries; VAR_16++) {
   if (VAR_12->s2io_entries[VAR_16].in_use == VAR_5) {
    if (VAR_12->s2io_entries[VAR_16].type ==
        VAR_7) {
     FUNC_6(VAR_12->desc[VAR_16], "%s:MSI-X-%d-RX",
      VAR_14->name, VAR_16);
     VAR_15 = FUNC_4(VAR_12->entries[VAR_16].vector,
         VAR_11,
         0,
         VAR_12->desc[VAR_16],
         VAR_12->s2io_entries[VAR_16].arg);
    } else if (VAR_12->s2io_entries[VAR_16].type ==
        VAR_4) {
     FUNC_6(VAR_12->desc[VAR_16], "%s:MSI-X-%d-TX",
      VAR_14->name, VAR_16);
     VAR_15 = FUNC_4(VAR_12->entries[VAR_16].vector,
         VAR_10,
         0,
         VAR_12->desc[VAR_16],
         VAR_12->s2io_entries[VAR_16].arg);

    }

    if (!(VAR_12->msix_info[VAR_16].addr &&
          VAR_12->msix_info[VAR_16].data)) {
     FUNC_0(VAR_0,
        "%s @Addr:0x%llx Data:0x%llx\n",
        VAR_12->desc[VAR_16],
        (unsigned long long)
        VAR_12->msix_info[VAR_16].addr,
        (unsigned long long)
        FUNC_1(VAR_12->msix_info[VAR_16].data));
    } else
     VAR_17++;
    if (VAR_15) {
     FUNC_3(VAR_12);

     FUNC_0(VAR_0,
        "%s:MSI-X-%d registration "
        "failed\n", VAR_14->name, VAR_16);

     FUNC_0(VAR_0,
        "%s: Defaulting to INTA\n",
        VAR_14->name);
     VAR_12->config.intr_type = VAR_2;
     break;
    }
    VAR_12->s2io_entries[VAR_16].in_use =
     VAR_6;
   }
  }
  if (!VAR_15) {
   FUNC_2("MSI-X-RX %d entries enabled\n", --VAR_17);
   FUNC_0(VAR_1,
      "MSI-X-TX entries enabled through alarm vector\n");
  }
 }
 if (VAR_12->config.intr_type == VAR_2) {
  VAR_15 = FUNC_4((int)VAR_12->pdev->irq, VAR_9, VAR_3,
      VAR_12->name, VAR_14);
  if (VAR_15) {
   FUNC_0(VAR_0, "%s: ISR registration failed\n",
      VAR_14->name);
   return -1;
  }
 }
 return 0;
}
