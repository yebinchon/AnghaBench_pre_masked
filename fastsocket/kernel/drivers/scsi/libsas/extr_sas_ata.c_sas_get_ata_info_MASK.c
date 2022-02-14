
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ex_phy {int attached_tproto; scalar_t__ attached_dev_type; int phy_id; scalar_t__ attached_sata_dev; } ;
struct TYPE_5__ {int fis; } ;
struct TYPE_8__ {TYPE_1__ rps; } ;
struct TYPE_6__ {TYPE_4__ rps_resp; } ;
struct domain_device {int tproto; int dev_type; TYPE_2__ sata_dev; int frame_rcvd; TYPE_3__* parent; } ;
struct dev_to_host_fis {int dummy; } ;
struct TYPE_7__ {int sas_addr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (struct domain_device*) ;
 int FUNC_4 (TYPE_3__*,int ,TYPE_4__*) ;

int FUNC_5(struct domain_device *VAR_3, struct ex_phy *VAR_4)
{
 if (VAR_4->attached_tproto & VAR_0)
  VAR_3->tproto = VAR_4->attached_tproto;
 if (VAR_4->attached_sata_dev)
  VAR_3->tproto |= VAR_1;

 if (VAR_4->attached_dev_type == VAR_2)
  VAR_3->dev_type = VAR_2;
 else {
  int VAR_5;

  VAR_3->dev_type = VAR_1;
  VAR_5 = FUNC_4(VAR_3->parent, VAR_4->phy_id,
           &VAR_3->sata_dev.rps_resp);
  if (VAR_5) {
   FUNC_1("report phy sata to %016llx:0x%x returned "
        "0x%x\n", FUNC_0(VAR_3->parent->sas_addr),
        VAR_4->phy_id, VAR_5);
   return VAR_5;
  }
  FUNC_2(VAR_3->frame_rcvd, &VAR_3->sata_dev.rps_resp.rps.fis,
         sizeof(struct dev_to_host_fis));

  FUNC_3(VAR_3);
 }
 return 0;
}
