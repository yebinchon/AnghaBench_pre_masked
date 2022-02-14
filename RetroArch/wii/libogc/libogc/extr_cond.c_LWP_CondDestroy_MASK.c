
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int s32 ;
typedef int cond_t ;
struct TYPE_4__ {int wait_queue; } ;
typedef TYPE_1__ cond_st ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int *) ;

s32 FUNC_4(cond_t VAR_1)
{
 cond_st *VAR_2 = FUNC_1(VAR_1);
 if(!VAR_2) return -1;

 if(FUNC_3(&VAR_2->wait_queue)) {
  FUNC_2();
  return VAR_0;
 }
 FUNC_2();

 FUNC_0(VAR_2);
 return 0;
}
