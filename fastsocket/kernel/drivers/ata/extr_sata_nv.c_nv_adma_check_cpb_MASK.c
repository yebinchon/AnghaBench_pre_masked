
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct nv_adma_port_priv {TYPE_1__* cpb; } ;
struct ata_queued_cmd {int dummy; } ;
struct ata_eh_info {int action; int err_mask; } ;
struct TYPE_4__ {struct ata_eh_info eh_info; } ;
struct ata_port {TYPE_2__ link; struct nv_adma_port_priv* private_data; } ;
struct TYPE_3__ {int resp_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (char*,int,...) ;
 int FUNC_2 (struct ata_eh_info*,char*,int) ;
 int FUNC_3 (struct ata_eh_info*) ;
 int FUNC_4 (struct ata_eh_info*,char*) ;
 int FUNC_5 (struct ata_port*) ;
 int FUNC_6 (struct ata_port*) ;
 int FUNC_7 (struct ata_port*,int ,char*,int) ;
 int FUNC_8 (struct ata_queued_cmd*) ;
 struct ata_queued_cmd* FUNC_9 (struct ata_port*,int) ;
 scalar_t__ FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(struct ata_port *VAR_10, int VAR_11, int VAR_12)
{
 struct nv_adma_port_priv *VAR_13 = VAR_10->private_data;
 u8 VAR_14 = VAR_13->cpb[VAR_11].resp_flags;

 FUNC_1("CPB %d, flags=0x%x\n", VAR_11, VAR_14);

 if (FUNC_11((VAR_12 ||
       VAR_14 & (VAR_6 |
         VAR_7 |
         VAR_8)))) {
  struct ata_eh_info *VAR_15 = &VAR_10->link.eh_info;
  int VAR_16 = 0;

  FUNC_3(VAR_15);
  FUNC_2(VAR_15, "CPB resp_flags 0x%x: ", VAR_14);
  if (VAR_14 & VAR_6) {
   FUNC_4(VAR_15, "ATA error");
   VAR_15->err_mask |= VAR_0;
  } else if (VAR_14 & VAR_7) {
   FUNC_4(VAR_15, "CMD error");
   VAR_15->err_mask |= VAR_0;
  } else if (VAR_14 & VAR_8) {
   FUNC_4(VAR_15, "CPB error");
   VAR_15->err_mask |= VAR_3;
   VAR_16 = 1;
  } else {

   FUNC_4(VAR_15, "unknown");
   VAR_15->err_mask |= VAR_2;
   VAR_16 = 1;
  }

  if (VAR_16)
   FUNC_6(VAR_10);
  else
   FUNC_5(VAR_10);
  return 1;
 }

 if (FUNC_10(VAR_14 & VAR_9)) {
  struct ata_queued_cmd *VAR_17 = FUNC_9(VAR_10, VAR_11);
  FUNC_1("CPB flags done, flags=0x%x\n", VAR_14);
  if (FUNC_10(VAR_17)) {
   FUNC_0("Completing qc from tag %d\n", VAR_11);
   FUNC_8(VAR_17);
  } else {
   struct ata_eh_info *VAR_18 = &VAR_10->link.eh_info;



   FUNC_7(VAR_10, VAR_5,
     "notifier for tag %d with no cmd?\n",
     VAR_11);
   VAR_18->err_mask |= VAR_1;
   VAR_18->action |= VAR_4;
   FUNC_6(VAR_10);
   return 1;
  }
 }
 return 0;
}
