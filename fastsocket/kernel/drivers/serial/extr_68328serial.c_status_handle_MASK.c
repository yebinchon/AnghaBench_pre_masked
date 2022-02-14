
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* tty; } ;
struct m68k_serial {int* curregs; int* pendregs; scalar_t__ break_abort; int m68k_channel; TYPE_3__ port; } ;
struct TYPE_5__ {TYPE_1__* termios; } ;
struct TYPE_4__ {int c_cflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct m68k_serial *VAR_4, unsigned short VAR_5)
{
 if((VAR_5 & VAR_3) && VAR_4->break_abort)
  FUNC_0();
 return;
}
