
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int name; int dev; } ;
struct TYPE_2__ {int channel; } ;
struct lbs_private {scalar_t__ mesh_fw_ver; void* mesh_tlv; TYPE_1__ curbssparams; struct net_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (struct lbs_private*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct lbs_private*,struct net_device*) ;
 int FUNC_5 (struct lbs_private*) ;
 scalar_t__ FUNC_6 (struct lbs_private*,int ,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (struct lbs_private*) ;
 int FUNC_10 (struct lbs_private*) ;
 scalar_t__ FUNC_11 (struct net_device*) ;

int FUNC_12(struct lbs_private *VAR_8)
{
 struct net_device *VAR_9 = VAR_8->dev;
 int VAR_10 = -1;

 FUNC_2(VAR_1);


 VAR_10 = FUNC_9(VAR_8);
 if (VAR_10)
  goto done;


 FUNC_5(VAR_8);

 if (FUNC_11(VAR_9)) {
  FUNC_7("cannot register ethX device\n");
  goto done;
 }

 FUNC_10(VAR_8);




 if (VAR_8->mesh_fw_ver == VAR_3) {
  VAR_8->mesh_tlv = VAR_5;
  if (FUNC_6(VAR_8, VAR_0,
        VAR_8->curbssparams.channel)) {
   VAR_8->mesh_tlv = VAR_4;
   if (FUNC_6(VAR_8, VAR_0,
         VAR_8->curbssparams.channel))
    VAR_8->mesh_tlv = 0;
  }
 } else if (VAR_8->mesh_fw_ver == VAR_2) {



  VAR_8->mesh_tlv = VAR_4;
  if (FUNC_6(VAR_8, VAR_0,
        VAR_8->curbssparams.channel))
   VAR_8->mesh_tlv = 0;
 }
 if (VAR_8->mesh_tlv) {
  FUNC_1(VAR_8);

  if (FUNC_0(&VAR_9->dev, &VAR_6))
   FUNC_7("cannot register lbs_mesh attribute\n");





  if (FUNC_0(&VAR_9->dev, &VAR_7))
   FUNC_7("cannot register lbs_rtap attribute\n");
 }

 FUNC_4(VAR_8, VAR_9);

 FUNC_8("%s: Marvell WLAN 802.11 adapter\n", VAR_9->name);

 VAR_10 = 0;

done:
 FUNC_3(VAR_1, "ret %d", VAR_10);
 return VAR_10;
}
