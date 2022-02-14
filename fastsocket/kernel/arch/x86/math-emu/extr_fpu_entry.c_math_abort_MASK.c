
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct math_emu_info {int dummy; } ;
struct TYPE_4__ {int trap_no; scalar_t__ error_code; } ;
struct TYPE_5__ {TYPE_1__ thread; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (unsigned int,TYPE_2__*,int) ;

void FUNC_2(struct math_emu_info *VAR_4, unsigned int VAR_5)
{
 VAR_0 = VAR_1;
 VAR_3->thread.trap_no = 16;
 VAR_3->thread.error_code = 0;
 FUNC_1(VAR_5, VAR_3, 1);
 VAR_2;
      __asm__("movl %0,%%esp ; ret": :"g"(((long)VAR_4) - 4));



}
