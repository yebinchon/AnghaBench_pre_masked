
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int* s68k_regs; } ;
struct TYPE_3__ {int EmuOpt; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 TYPE_1__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 unsigned int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(void)
{
 int VAR_4, VAR_5, VAR_6, VAR_7;
 VAR_4 = VAR_1->s68k_regs[0];

 if (VAR_2.EmuOpt & VAR_0) {
  VAR_5 = 240;
  VAR_7 = -VAR_5 * 6;
  VAR_6 = VAR_5 * (320 - 4);
 } else {
  VAR_5 = 320;
  VAR_7 = 4;
  VAR_6 = VAR_5 * 2 + 4;
 }

 if (!FUNC_0()) {


  unsigned int *VAR_8 = (unsigned int *)((char *)VAR_3 + VAR_6);
  unsigned int VAR_9 = (VAR_4 & 2) ? 0xc0c0c0c0 : 0xe0e0e0e0;
  unsigned int VAR_10 = (VAR_4 & 1) ? 0xd0d0d0d0 : 0xe0e0e0e0;
  VAR_8[(VAR_5*0) >> 2] = VAR_8[(VAR_5*1) >> 2] = VAR_8[(VAR_5*2) >> 2] = VAR_9;
  VAR_8[(VAR_5*0 + VAR_7) >> 2] = VAR_8[(VAR_5*1 + VAR_7) >> 2] = VAR_8[(VAR_5*2 + VAR_7) >> 2] = VAR_10;

 } else {


  unsigned int *VAR_11 = (unsigned int *)((short *)VAR_3 + VAR_6);
  unsigned int VAR_12 = (VAR_4 & 2) ? 0x06000600 : 0;
  unsigned int VAR_13 = (VAR_4 & 1) ? 0xc000c000 : 0;
  VAR_11[(VAR_5*0)*2 >> 2] = VAR_11[((VAR_5*0)*2 >> 2) + 1] = VAR_11[(VAR_5*1)*2 >> 2] = VAR_11[((VAR_5*1)*2 >> 2) + 1] = VAR_11[(VAR_5*2)*2 >> 2] = VAR_11[((VAR_5*2)*2 >> 2) + 1] = VAR_12;
  VAR_11[(VAR_5*0 + VAR_7)*2 >> 2] = VAR_11[((VAR_5*0 + VAR_7)*2 >> 2) + 1] = VAR_11[(VAR_5*1 + VAR_7)*2 >> 2] = VAR_11[((VAR_5*1 + VAR_7)*2 >> 2) + 1] = VAR_11[(VAR_5*2 + VAR_7)*2 >> 2] = VAR_11[((VAR_5*2 + VAR_7)*2 >> 2) + 1] = VAR_13;

 }
}
