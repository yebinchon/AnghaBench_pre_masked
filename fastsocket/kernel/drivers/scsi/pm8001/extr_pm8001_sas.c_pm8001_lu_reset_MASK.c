
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sas_phy {int dummy; } ;
struct pm8001_tmf_task {int tmf; } ;
struct pm8001_hba_info {int dummy; } ;
struct pm8001_device {int device_id; } ;
struct domain_device {struct pm8001_device* lldd_dev; } ;
struct TYPE_2__ {int (* set_dev_state_req ) (struct pm8001_hba_info*,struct pm8001_device*,int) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct pm8001_hba_info*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct domain_device*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct pm8001_hba_info*,struct pm8001_device*,struct domain_device*,int,int ) ;
 struct pm8001_hba_info* FUNC_4 (struct domain_device*) ;
 int FUNC_5 (struct domain_device*,int *,struct pm8001_tmf_task*) ;
 int FUNC_6 (char*,int ,int) ;
 struct sas_phy* FUNC_7 (struct domain_device*) ;
 int FUNC_8 (struct sas_phy*,int) ;
 int FUNC_9 (struct sas_phy*) ;
 int FUNC_10 (struct pm8001_hba_info*,struct pm8001_device*,int) ;

int FUNC_11(struct domain_device *VAR_3, u8 *VAR_4)
{
 int VAR_5 = VAR_2;
 struct pm8001_tmf_task VAR_6;
 struct pm8001_device *VAR_7 = VAR_3->lldd_dev;
 struct pm8001_hba_info *VAR_8 = FUNC_4(VAR_3);
 if (FUNC_1(VAR_3)) {
  struct sas_phy *VAR_9 = FUNC_7(VAR_3);
  VAR_5 = FUNC_3(VAR_8, VAR_7 ,
   VAR_3, 1, 0);
  VAR_5 = FUNC_8(VAR_9, 1);
  FUNC_9(VAR_9);
  VAR_5 = VAR_0->set_dev_state_req(VAR_8,
   VAR_7, 0x01);
  FUNC_2(2000);
 } else {
  VAR_6.tmf = VAR_1;
  VAR_5 = FUNC_5(VAR_3, VAR_4, &VAR_6);
 }

 FUNC_0(VAR_8, FUNC_6("for device[%x]:rc=%d\n",
  VAR_7->device_id, VAR_5));
 return VAR_5;
}
