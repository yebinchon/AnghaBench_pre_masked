
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* s68k_regs; } ;


 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(void)
{
 int VAR_3;
 VAR_3 = VAR_0->s68k_regs[0];

 if (0) {

  unsigned int VAR_4 = (VAR_3 & 2) ? 0xc0c0c0c0 : 0xe0e0e0e0;
  unsigned int VAR_5 = (VAR_3 & 1) ? 0xd0d0d0d0 : 0xe0e0e0e0;
  *(unsigned int *)((char *)VAR_1 + VAR_2*2+ 4) =
  *(unsigned int *)((char *)VAR_1 + VAR_2*3+ 4) =
  *(unsigned int *)((char *)VAR_1 + VAR_2*4+ 4) = VAR_4;
  *(unsigned int *)((char *)VAR_1 + VAR_2*2+12) =
  *(unsigned int *)((char *)VAR_1 + VAR_2*3+12) =
  *(unsigned int *)((char *)VAR_1 + VAR_2*4+12) = VAR_5;
 } else {

  unsigned int *VAR_6 = (unsigned int *)((short *)VAR_1 + VAR_2*2+4);
  unsigned int VAR_7 = (VAR_3 & 2) ? 0x06000600 : 0;
  unsigned int VAR_8 = (VAR_3 & 1) ? 0xc000c000 : 0;
  *VAR_6++ = VAR_7; *VAR_6++ = VAR_7; VAR_6+=2; *VAR_6++ = VAR_8; *VAR_6++ = VAR_8; VAR_6 += VAR_2/2 - 12/2;
  *VAR_6++ = VAR_7; *VAR_6++ = VAR_7; VAR_6+=2; *VAR_6++ = VAR_8; *VAR_6++ = VAR_8; VAR_6 += VAR_2/2 - 12/2;
  *VAR_6++ = VAR_7; *VAR_6++ = VAR_7; VAR_6+=2; *VAR_6++ = VAR_8; *VAR_6++ = VAR_8;
 }
}
