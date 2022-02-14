
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int lwp_thrqueue ;
struct TYPE_4__ {int ret_code; } ;
struct TYPE_5__ {TYPE_1__ wait; } ;
typedef TYPE_2__ lwp_cntrl ;


 TYPE_2__* FUNC_0 (int *) ;

void FUNC_1(lwp_thrqueue *VAR_0,u32 VAR_1)
{
 lwp_cntrl *VAR_2;
 while((VAR_2=FUNC_0(VAR_0))) {
  VAR_2->wait.ret_code = VAR_1;
 }
}
