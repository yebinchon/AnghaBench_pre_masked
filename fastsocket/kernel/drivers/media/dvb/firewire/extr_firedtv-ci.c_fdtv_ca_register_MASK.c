
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct firedtv_tuner_status {scalar_t__ ca_application_info; int ca_date_time_request; } ;
struct firedtv {int ca_time_interval; int device; int cadev; int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct firedtv*,int *) ;
 scalar_t__ FUNC_1 (struct firedtv*,struct firedtv_tuner_status*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,int *,int *,struct firedtv*,int ) ;
 int VAR_3 ;
 int FUNC_4 (struct firedtv_tuner_status*) ;

int FUNC_5(struct firedtv *VAR_4)
{
 struct firedtv_tuner_status VAR_5;
 int VAR_6;

 if (FUNC_1(VAR_4, &VAR_5))
  return -VAR_2;

 if (!FUNC_4(&VAR_5))
  return -VAR_1;

 VAR_6 = FUNC_3(&VAR_4->adapter, &VAR_4->cadev,
      &VAR_3, VAR_4, VAR_0);

 if (VAR_5.ca_application_info == 0)
  FUNC_2(VAR_4->device, "CaApplicationInfo is not set\n");
 if (VAR_5.ca_date_time_request == 1)
  FUNC_0(VAR_4, &VAR_4->ca_time_interval);

 return VAR_6;
}
