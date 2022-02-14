
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct solos_card {int nr_ports; TYPE_2__* dev; TYPE_4__** atmdev; int * cli_queue; int * tx_queue; } ;
struct sk_buff {int dummy; } ;
struct pkt_hdr {void* type; void* vci; void* vpi; void* size; } ;
struct TYPE_5__ {int vpi_bits; int vci_bits; } ;
struct TYPE_7__ {int kobj; } ;
struct TYPE_8__ {int signal; void* phy_data; struct solos_card* dev_data; TYPE_1__ ci_range; int number; TYPE_3__ class_dev; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 TYPE_4__* FUNC_1 (char*,int *,int,int *) ;
 int FUNC_2 (struct solos_card*) ;
 void* FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (int *,char*) ;
 scalar_t__ FUNC_7 (TYPE_3__*,int *) ;
 int VAR_5 ;
 int FUNC_8 (struct solos_card*,int,struct sk_buff*,int *) ;
 scalar_t__ FUNC_9 (struct sk_buff*,int) ;
 int FUNC_10 (int *) ;
 int VAR_6 ;
 scalar_t__ FUNC_11 (int *,int *) ;

__attribute__((used)) static int FUNC_12(struct solos_card *VAR_7)
{
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_7->nr_ports; VAR_8++) {
  struct sk_buff *VAR_9;
  struct pkt_hdr *VAR_10;

  FUNC_10(&VAR_7->tx_queue[VAR_8]);
  FUNC_10(&VAR_7->cli_queue[VAR_8]);

  VAR_7->atmdev[VAR_8] = FUNC_1("solos-pci", &VAR_5, -1, ((void*)0));
  if (!VAR_7->atmdev[VAR_8]) {
   FUNC_4(&VAR_7->dev->dev, "Could not register ATM device %d\n", VAR_8);
   FUNC_2(VAR_7);
   return -VAR_1;
  }
  if (FUNC_7(&VAR_7->atmdev[VAR_8]->class_dev, &VAR_4))
   FUNC_4(&VAR_7->dev->dev, "Could not register console for ATM device %d\n", VAR_8);
  if (FUNC_11(&VAR_7->atmdev[VAR_8]->class_dev.kobj, &VAR_6))
   FUNC_4(&VAR_7->dev->dev, "Could not register parameter group for ATM device %d\n", VAR_8);

  FUNC_5(&VAR_7->dev->dev, "Registered ATM device %d\n", VAR_7->atmdev[VAR_8]->number);

  VAR_7->atmdev[VAR_8]->ci_range.vpi_bits = 8;
  VAR_7->atmdev[VAR_8]->ci_range.vci_bits = 16;
  VAR_7->atmdev[VAR_8]->dev_data = VAR_7;
  VAR_7->atmdev[VAR_8]->phy_data = (void *)(unsigned long)VAR_8;
  VAR_7->atmdev[VAR_8]->signal = VAR_0;

  VAR_9 = FUNC_0(sizeof(*VAR_10), VAR_2);
  if (!VAR_9) {
   FUNC_6(&VAR_7->dev->dev, "Failed to allocate sk_buff in atm_init()\n");
   continue;
  }

  VAR_10 = (void *)FUNC_9(VAR_9, sizeof(*VAR_10));

  VAR_10->size = FUNC_3(0);
  VAR_10->vpi = FUNC_3(0);
  VAR_10->vci = FUNC_3(0);
  VAR_10->type = FUNC_3(VAR_3);

  FUNC_8(VAR_7, VAR_8, VAR_9, ((void*)0));
 }
 return 0;
}
