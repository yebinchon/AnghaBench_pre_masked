
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibmvfc_host {scalar_t__ action; int delay_init; scalar_t__ init_retries; int work_wait_q; int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ibmvfc_host*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct ibmvfc_host*,int ) ;
 int FUNC_3 (struct ibmvfc_host*,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct ibmvfc_host *VAR_4)
{
 int VAR_5 = 0;

 if (VAR_4->action == VAR_1) {
  VAR_4->delay_init = 1;
  if (++VAR_4->init_retries > VAR_3) {
   FUNC_1(VAR_4->dev,
    "Host initialization retries exceeded. Taking adapter offline\n");
   FUNC_2(VAR_4, VAR_2);
  } else if (VAR_4->init_retries == VAR_3)
   FUNC_0(VAR_4);
  else {
   FUNC_3(VAR_4, VAR_0);
   VAR_5 = 1;
  }
 }

 FUNC_4(&VAR_4->work_wait_q);
 return VAR_5;
}
