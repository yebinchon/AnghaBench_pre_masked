
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {int thread; int recovery; int recovery_wait; int recovery_active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct mddev *VAR_2, int VAR_3, int VAR_4)
{

 FUNC_0(VAR_3, &VAR_2->recovery_active);
 FUNC_3(&VAR_2->recovery_wait);
 if (!VAR_4) {
  FUNC_2(VAR_1, &VAR_2->recovery);
  FUNC_2(VAR_0, &VAR_2->recovery);
  FUNC_1(VAR_2->thread);

 }
}
