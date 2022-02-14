
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ax; } ;
struct TYPE_5__ {TYPE_1__ x; } ;
typedef TYPE_2__ __dpmi_regs ;


 int FUNC_0 (int,TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(void)
{
   __dpmi_regs VAR_0;

   VAR_0.x.ax = 0x13;
   FUNC_0(0x10, &VAR_0);
}
