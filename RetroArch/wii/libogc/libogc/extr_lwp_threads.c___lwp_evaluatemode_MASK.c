
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ is_preemptible; int cur_state; } ;
typedef TYPE_1__ lwp_cntrl ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;

u32 FUNC_2()
{
 lwp_cntrl *VAR_4;

 VAR_4 = VAR_3;
 if(!FUNC_0(VAR_4->cur_state)
  || (!FUNC_1(VAR_4) && VAR_4->is_preemptible)){
  VAR_2 = VAR_1;
  return VAR_1;
 }
 return VAR_0;
}
