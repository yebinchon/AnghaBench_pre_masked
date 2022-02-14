
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sas_phy {int dummy; } ;
struct pm8001_hba_info {int dummy; } ;
struct pm8001_device {int device_id; int * setds_completion; } ;
struct domain_device {struct pm8001_device* lldd_dev; } ;
struct TYPE_2__ {int (* set_dev_state_req ) (struct pm8001_hba_info*,struct pm8001_device*,int) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (struct pm8001_hba_info*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct domain_device*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct pm8001_hba_info*,struct pm8001_device*,struct domain_device*,int,int ) ;
 struct pm8001_hba_info* FUNC_5 (struct domain_device*) ;
 int FUNC_6 (char*,int ,int) ;
 struct sas_phy* FUNC_7 (struct domain_device*) ;
 int FUNC_8 (struct sas_phy*,int) ;
 int FUNC_9 (struct sas_phy*) ;
 scalar_t__ FUNC_10 (struct sas_phy*) ;
 int FUNC_11 (struct pm8001_hba_info*,struct pm8001_device*,int) ;
 int FUNC_12 (int *) ;

int FUNC_13(struct domain_device *VAR_4)
{
 int VAR_5 = VAR_2;
 struct pm8001_device *VAR_6;
 struct pm8001_hba_info *VAR_7;
 struct sas_phy *VAR_8;

 if (!VAR_4 || !VAR_4->lldd_dev)
  return -VAR_0;

 VAR_6 = VAR_4->lldd_dev;
 VAR_7 = FUNC_5(VAR_4);
 VAR_8 = FUNC_7(VAR_4);

 if (FUNC_2(VAR_4)) {
  FUNC_0(VAR_3);
  if (FUNC_10(VAR_8)) {
   VAR_5 = 0;
   goto out;
  }
  VAR_5 = FUNC_8(VAR_8, 1);
  FUNC_3(2000);
  VAR_5 = FUNC_4(VAR_7, VAR_6 ,
   VAR_4, 1, 0);
  VAR_6->setds_completion = &VAR_3;
  VAR_5 = VAR_1->set_dev_state_req(VAR_7,
   VAR_6, 0x01);
  FUNC_12(&VAR_3);
 } else {
  VAR_5 = FUNC_8(VAR_8, 1);
  FUNC_3(2000);
 }
 FUNC_1(VAR_7, FUNC_6(" for device[%x]:rc=%d\n",
  VAR_6->device_id, VAR_5));
 out:
 FUNC_9(VAR_8);
 return VAR_5;
}
