
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_adapter {int scan_work; int work_queue; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;

void FUNC_1(struct zfcp_adapter *VAR_1)
{
 if (!VAR_0)
  return;

 FUNC_0(VAR_1->work_queue, &VAR_1->scan_work);
}
