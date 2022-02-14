
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sas_task {int slow_task; int list; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct sas_task*) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;

void FUNC_4(struct sas_task *VAR_1)
{
 if (VAR_1) {
  FUNC_0(!FUNC_3(&VAR_1->list));
  FUNC_1(VAR_1->slow_task);
  FUNC_2(VAR_0, VAR_1);
 }
}
