
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ptrace; scalar_t__ exit_code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,TYPE_1__*,int) ;
 int FUNC_2 (int ) ;

void FUNC_3(void)
{
 if (!FUNC_2(VAR_3))
  return;

 if (!(VAR_4->ptrace & VAR_0))
  return;



 FUNC_0(VAR_2 | ((VAR_4->ptrace & VAR_1)
     ? 0x80 : 0));





 if (VAR_4->exit_code) {
  FUNC_1(VAR_4->exit_code, VAR_4, 1);
  VAR_4->exit_code = 0;
 }
}
