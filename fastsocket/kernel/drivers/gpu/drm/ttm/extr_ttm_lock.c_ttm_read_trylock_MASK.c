
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_lock {int queue; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct ttm_lock*,int*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;

int FUNC_5(struct ttm_lock *VAR_1, bool VAR_2)
{
 int VAR_3 = 0;
 bool VAR_4;

 if (VAR_2)
  VAR_3 = FUNC_4
   (VAR_1->queue, FUNC_1(VAR_1, &VAR_4));
 else
  FUNC_3(VAR_1->queue, FUNC_1(VAR_1, &VAR_4));

 if (FUNC_2(VAR_3 != 0)) {
  FUNC_0(VAR_4);
  return VAR_3;
 }

 return (VAR_4) ? 0 : -VAR_0;
}
