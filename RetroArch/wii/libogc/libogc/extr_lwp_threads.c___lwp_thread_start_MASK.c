
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {void* (* entry ) (void*) ;void* arg; int cur_state; } ;
typedef TYPE_1__ lwp_cntrl ;


 int FUNC_0 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_4 (char*,TYPE_1__*,void* (*) (void*),void*,int ) ;

u32 FUNC_5(lwp_cntrl *VAR_1,void* (*VAR_2)(void*),void *VAR_3)
{



 if(FUNC_1(VAR_1->cur_state)) {
  VAR_1->entry = VAR_2;
  VAR_1->arg = VAR_3;
  FUNC_2(VAR_1);
  FUNC_3(VAR_1);
  FUNC_0(VAR_0,VAR_1);
  return 1;
 }
 return 0;
}
