
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lwp_t ;
struct TYPE_3__ {int cur_state; } ;
typedef TYPE_1__ lwp_cntrl ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;

BOOL FUNC_3(lwp_t VAR_2)
{
 BOOL VAR_3;
 lwp_cntrl *VAR_4;

 VAR_4 = FUNC_0(VAR_2);
   if(!VAR_4) return VAR_0;

 VAR_3 = (FUNC_1(VAR_4->cur_state) ? VAR_1 : VAR_0);

 FUNC_2();
 return VAR_3;
}
