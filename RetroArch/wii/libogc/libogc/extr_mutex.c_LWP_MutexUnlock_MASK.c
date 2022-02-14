
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int s32 ;
typedef int mutex_t ;
struct TYPE_3__ {int mutex; } ;
typedef TYPE_1__ mutex_st ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;

s32 FUNC_3(mutex_t VAR_0)
{
 u32 VAR_1;
 mutex_st *VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 if(!VAR_2) return -1;

 VAR_1 = FUNC_1(&VAR_2->mutex);
 FUNC_2();

 return VAR_1;
}
