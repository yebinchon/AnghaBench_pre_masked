
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int delay_work; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct request_queue*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int *,int ) ;

void FUNC_4(struct request_queue *VAR_1)
{
 if (FUNC_2(!FUNC_1(VAR_1))) {
  FUNC_0(&VAR_1->delay_work);
  FUNC_3(VAR_0, &VAR_1->delay_work, 0);
 }
}
