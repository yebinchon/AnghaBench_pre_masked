
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_8__ {scalar_t__ affil_supp; scalar_t__ affil_valid; } ;
struct smp_resp {scalar_t__ frame_type; scalar_t__ function; scalar_t__ result; TYPE_4__ rps; } ;
struct sas_end_device {scalar_t__ I_T_nexus_loss_timeout; } ;
struct TYPE_7__ {struct smp_resp rps_resp; } ;
struct domain_device {int* sas_addr; scalar_t__ dev_type; int tproto; int pathways; int rphy; int parent; TYPE_3__ sata_dev; TYPE_2__* port; void* lldd_dev; } ;
struct asd_ha_struct {int dummy; } ;
struct TYPE_6__ {int phy_mask; scalar_t__ oob_mode; TYPE_1__* ha; } ;
struct TYPE_5__ {struct asd_ha_struct* lldd_ha; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_0 (struct asd_ha_struct*,int,int,int) ;
 int FUNC_1 (struct asd_ha_struct*,int,int ,int) ;
 int FUNC_2 (struct asd_ha_struct*,int) ;
 int FUNC_3 (struct asd_ha_struct*) ;
 int FUNC_4 (struct domain_device*) ;
 int FUNC_5 (struct domain_device*) ;
 int FUNC_6 (scalar_t__,int) ;
 struct sas_end_device* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct domain_device *VAR_31)
{
 int VAR_32, VAR_33;
 struct asd_ha_struct *VAR_34 = VAR_31->port->ha->lldd_ha;
 u8 VAR_35 = 0;

 VAR_32 = FUNC_3(VAR_34);
 if (VAR_32 < 0)
  return VAR_32;

 VAR_31->lldd_dev = (void *) (unsigned long) VAR_32;

 FUNC_0(VAR_34, VAR_32, 0, VAR_4);
 FUNC_0(VAR_34, VAR_32, 1, 0);
 FUNC_1(VAR_34, VAR_32, VAR_9, 0xFFFF);
 for (VAR_33 = 0; VAR_33 < VAR_15; VAR_33++)
  FUNC_0(VAR_34, VAR_32, VAR_5+VAR_33,
           VAR_31->sas_addr[VAR_33]);
 FUNC_1(VAR_34, VAR_32, VAR_22, 0xFFFF);
 FUNC_5(VAR_31);
 FUNC_0(VAR_34, VAR_32, VAR_1, VAR_31->port->phy_mask);
 if (VAR_31->port->oob_mode != VAR_20) {
  VAR_35 |= VAR_14;
  if ((VAR_31->dev_type == VAR_18) ||
      (VAR_31->tproto & VAR_17)) {
   struct smp_resp *VAR_36 = &VAR_31->sata_dev.rps_resp;
   if (VAR_36->frame_type == VAR_26 &&
       VAR_36->function == VAR_25 &&
       VAR_36->result == VAR_27) {
    if (VAR_36->rps.affil_valid)
     VAR_35 |= VAR_28;
    if (VAR_36->rps.affil_supp)
     VAR_35 |= VAR_30;
   }
  } else {
   VAR_35 |= VAR_0;
   if (!VAR_31->parent &&
       (VAR_31->dev_type == VAR_6 ||
        VAR_31->dev_type == VAR_8))
    FUNC_0(VAR_34, VAR_32, VAR_12,
             4);
   else
    FUNC_0(VAR_34, VAR_32, VAR_12,
             VAR_31->pathways);
   FUNC_0(VAR_34, VAR_32, VAR_13, 1);
  }
 }
 if (VAR_31->dev_type == VAR_21)
  VAR_35 |= VAR_19;
 FUNC_0(VAR_34, VAR_32, VAR_2, VAR_35);

 VAR_35 = 0;
 if (VAR_31->tproto & VAR_17)
  VAR_35 |= VAR_29;
 FUNC_0(VAR_34, VAR_32, VAR_3, VAR_35);

 FUNC_1(VAR_34, VAR_32, VAR_7, 0xFFFF);
 FUNC_1(VAR_34, VAR_32, VAR_23, 0xFFFF);
 FUNC_1(VAR_34, VAR_32, VAR_24, 0xFFFF);

 if (VAR_31->dev_type == VAR_18 || (VAR_31->tproto & VAR_17)) {
  VAR_33 = FUNC_4(VAR_31);
  if (VAR_33 < 0) {
   FUNC_2(VAR_34, VAR_32);
   return VAR_33;
  }
 }

 if (VAR_31->dev_type == VAR_16) {
  struct sas_end_device *VAR_37 = FUNC_7(VAR_31->rphy);
  if (VAR_37->I_T_nexus_loss_timeout > 0)
   FUNC_1(VAR_34, VAR_32, VAR_10,
            FUNC_6(VAR_37->I_T_nexus_loss_timeout,
         (u16)VAR_11));
  else
   FUNC_1(VAR_34, VAR_32, VAR_10,
            (u16)VAR_11);
 }
 return 0;
}
