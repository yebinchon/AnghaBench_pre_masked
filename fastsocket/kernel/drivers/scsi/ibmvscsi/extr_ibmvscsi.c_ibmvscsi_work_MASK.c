
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibmvscsi_host_data {int work_wait_q; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct ibmvscsi_host_data*) ;
 int FUNC_2 (struct ibmvscsi_host_data*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(void *VAR_1)
{
 struct ibmvscsi_host_data *VAR_2 = VAR_1;
 int VAR_3;

 FUNC_4(VAR_0, -20);

 while (1) {
  VAR_3 = FUNC_5(VAR_2->work_wait_q,
           FUNC_2(VAR_2));

  FUNC_0(VAR_3);

  if (FUNC_3())
   break;

  FUNC_1(VAR_2);
 }

 return 0;
}
