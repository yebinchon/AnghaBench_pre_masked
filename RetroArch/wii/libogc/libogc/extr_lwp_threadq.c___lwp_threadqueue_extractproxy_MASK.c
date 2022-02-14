
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int queue; } ;
struct TYPE_6__ {TYPE_1__ wait; int cur_state; } ;
typedef TYPE_2__ lwp_cntrl ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_2__*) ;

u32 FUNC_2(lwp_cntrl *VAR_2)
{
 u32 VAR_3;

 VAR_3 = VAR_2->cur_state;
 if(FUNC_0(VAR_3)) {
  FUNC_1(VAR_2->wait.queue,VAR_2);
  return VAR_1;
 }
 return VAR_0;
}
