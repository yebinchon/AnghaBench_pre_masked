
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sas_phy {int dev; } ;
struct domain_device {scalar_t__ dev_type; int tproto; } ;


 int FUNC_0 (char*,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct domain_device*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *,char*,int) ;
 int FUNC_4 (int) ;
 struct sas_phy* FUNC_5 (struct domain_device*) ;
 int FUNC_6 (struct sas_phy*,int) ;
 int FUNC_7 (struct sas_phy*) ;

int FUNC_8(struct domain_device *VAR_10)
{
 int VAR_11, VAR_12, VAR_13;
 struct sas_phy *VAR_14 = FUNC_5(VAR_10);


 int VAR_15 = (VAR_10->dev_type == VAR_6 ||
     (VAR_10->tproto & VAR_5)) ? 0 : 1;

 FUNC_1(VAR_10, VAR_3);

 FUNC_0("sending %s reset to %s\n",
      VAR_15 ? "hard" : "soft", FUNC_2(&VAR_14->dev));
 VAR_11 = FUNC_6(VAR_14, VAR_15);
 if (VAR_11 == VAR_8 || VAR_11 == -VAR_0) {

  FUNC_4(500);

  FUNC_1(VAR_10, VAR_2);
 }
 for (VAR_13 = 0 ; VAR_13 < 3; VAR_13++) {
  VAR_12 = FUNC_1(VAR_10, VAR_4);
  if (VAR_12 == VAR_7)
   goto out;
  FUNC_4(500);
 }




 FUNC_3(VAR_1, &VAR_14->dev,
     "Failed to resume nexus after reset 0x%x\n", VAR_12);

 VAR_11 = VAR_9;
 out:
 FUNC_7(VAR_14);
 return VAR_11;
}
