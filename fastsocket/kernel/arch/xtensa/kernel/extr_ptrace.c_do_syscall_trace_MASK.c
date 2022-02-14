
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ptrace; scalar_t__ exit_code; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,TYPE_1__*,int) ;

void FUNC_2(void)
{




 FUNC_0(VAR_1|((VAR_2->ptrace & VAR_0) ? 0x80 : 0));






 if (VAR_2->exit_code) {
  FUNC_1(VAR_2->exit_code, VAR_2, 1);
  VAR_2->exit_code = 0;
 }
}
