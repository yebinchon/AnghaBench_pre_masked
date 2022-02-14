
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int ret_arg; } ;
struct TYPE_6__ {TYPE_1__ wait; int arg; int (* entry ) (int ) ;int isr_level; } ;
typedef TYPE_2__ lwp_cntrl ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (char*,TYPE_2__*,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5()
{
 u32 VAR_2;
 lwp_cntrl *VAR_3;

 VAR_3 = VAR_0;



 VAR_2 = VAR_3->isr_level;
 FUNC_0(VAR_2);
 FUNC_1();
 VAR_3->wait.ret_arg = VAR_3->entry(VAR_3->arg);

 FUNC_2(VAR_3->wait.ret_arg);



}
