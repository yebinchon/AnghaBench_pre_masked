
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int dummy; } ;
struct hp_sw_dh_data {scalar_t__ path_state; int * callback_data; int (* callback_fn ) (void*,int) ;int retries; int retry_cnt; } ;
typedef int (* activate_complete ) (void*,int) ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct hp_sw_dh_data* FUNC_0 (struct scsi_device*) ;
 int FUNC_1 (struct hp_sw_dh_data*) ;
 int FUNC_2 (struct scsi_device*,struct hp_sw_dh_data*) ;

__attribute__((used)) static int FUNC_3(struct scsi_device *VAR_2,
    activate_complete VAR_3, void *VAR_4)
{
 int VAR_5 = VAR_1;
 struct hp_sw_dh_data *VAR_6 = FUNC_0(VAR_2);

 VAR_5 = FUNC_2(VAR_2, VAR_6);

 if (VAR_5 == VAR_1 && VAR_6->path_state == VAR_0) {
  VAR_6->retry_cnt = VAR_6->retries;
  VAR_6->callback_fn = VAR_3;
  VAR_6->callback_data = VAR_4;
  VAR_5 = FUNC_1(VAR_6);
  if (VAR_5 == VAR_1)
   return 0;
  VAR_6->callback_fn = VAR_6->callback_data = ((void*)0);
 }

 if (VAR_3)
  VAR_3(VAR_4, VAR_5);
 return 0;
}
