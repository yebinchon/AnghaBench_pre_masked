
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* s68k_regs; } ;


 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_0(void)
{
 static int VAR_2 = 0;
 unsigned int VAR_3, VAR_4, *VAR_5;

 if (!((VAR_0->s68k_regs[0] ^ VAR_2) & 3)) return;
 VAR_2 = VAR_0->s68k_regs[0];

 VAR_5 = (unsigned int *)((short *)VAR_1 + 321*2+4+2);
 VAR_3 = (VAR_2 & 2) ? 0x06000600 : 0;
 VAR_4 = (VAR_2 & 1) ? 0xc000c000 : 0;
 *VAR_5++ = VAR_3; *VAR_5++ = VAR_3; VAR_5+=2; *VAR_5++ = VAR_4; *VAR_5++ = VAR_4; VAR_5 += 321/2 - 12/2 + 1;
 *VAR_5++ = VAR_3; VAR_5+=3; *VAR_5++ = VAR_4; VAR_5 += 321/2 - 10/2;
 *VAR_5++ = VAR_3; *VAR_5++ = VAR_3; VAR_5+=2; *VAR_5++ = VAR_4; *VAR_5++ = VAR_4;
}
