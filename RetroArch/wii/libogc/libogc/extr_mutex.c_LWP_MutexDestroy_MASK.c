
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int s32 ;
typedef int mutex_t ;
struct TYPE_4__ {int mutex; } ;
typedef TYPE_1__ mutex_st ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 () ;

s32 FUNC_5(mutex_t VAR_2)
{
 mutex_st *VAR_3 = FUNC_3(VAR_2);
 if(!VAR_3) return 0;

 if(FUNC_2(&VAR_3->mutex)) {
  FUNC_4();
  return VAR_0;
 }
 FUNC_0(&VAR_3->mutex,VAR_1);
 FUNC_4();

 FUNC_1(VAR_3);
 return 0;
}
