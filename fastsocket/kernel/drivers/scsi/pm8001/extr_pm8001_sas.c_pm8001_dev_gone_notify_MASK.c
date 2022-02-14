
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pm8001_hba_info {int lock; } ;
struct pm8001_device {scalar_t__ running_req; int dev_type; int device_id; } ;
struct domain_device {struct pm8001_device* lldd_dev; } ;
struct TYPE_2__ {int (* dereg_dev_req ) (struct pm8001_hba_info*,int ) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct pm8001_hba_info*,int ) ;
 int FUNC_1 (struct pm8001_hba_info*,struct pm8001_device*,struct domain_device*,int,int ) ;
 struct pm8001_hba_info* FUNC_2 (struct domain_device*) ;
 int FUNC_3 (struct pm8001_device*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (struct pm8001_hba_info*,int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct pm8001_hba_info*,int ) ;

__attribute__((used)) static void FUNC_9(struct domain_device *VAR_1)
{
 unsigned long VAR_2 = 0;
 u32 VAR_3;
 struct pm8001_hba_info *VAR_4;
 struct pm8001_device *VAR_5 = VAR_1->lldd_dev;

 VAR_4 = FUNC_2(VAR_1);
 FUNC_6(&VAR_4->lock, VAR_2);
 FUNC_5(VAR_4, &VAR_3);
 if (VAR_5) {
  u32 VAR_6 = VAR_5->device_id;

  FUNC_0(VAR_4,
   FUNC_4("found dev[%d:%x] is gone.\n",
   VAR_5->device_id, VAR_5->dev_type));
  if (VAR_5->running_req) {
   FUNC_7(&VAR_4->lock, VAR_2);
   FUNC_1(VAR_4, VAR_5 ,
    VAR_1, 1, 0);
   FUNC_6(&VAR_4->lock, VAR_2);
  }
  VAR_0->dereg_dev_req(VAR_4, VAR_6);
  FUNC_3(VAR_5);
 } else {
  FUNC_0(VAR_4,
   FUNC_4("Found dev has gone.\n"));
 }
 VAR_1->lldd_dev = ((void*)0);
 FUNC_7(&VAR_4->lock, VAR_2);
}
