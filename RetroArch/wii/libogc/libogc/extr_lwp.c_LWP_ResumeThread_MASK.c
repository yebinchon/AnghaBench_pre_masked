
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int s32 ;
typedef int lwp_t ;
struct TYPE_4__ {int cur_state; } ;
typedef TYPE_1__ lwp_cntrl ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,int ) ;

s32 FUNC_4(lwp_t VAR_3)
{
 lwp_cntrl *VAR_4;

 VAR_4 = FUNC_0(VAR_3);
 if(!VAR_4) return -1;

 if(FUNC_1(VAR_4->cur_state)) {
  FUNC_3(VAR_4,VAR_2);
  FUNC_2();
  return VAR_1;
 }
 FUNC_2();
 return VAR_0;
}
