
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* reg; } ;
struct TYPE_6__ {TYPE_1__ video; } ;
struct TYPE_5__ {int EmuOpt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static void FUNC_0(void)
{
 unsigned short *VAR_12 = (unsigned short *)VAR_8;
 int VAR_13, VAR_14, VAR_15 = 320;


 if (VAR_9 == 0 || VAR_7.EmuOpt != VAR_6)
  return;

 VAR_13 = VAR_10 + VAR_1;
 VAR_14 = VAR_11 + VAR_2;
 if (!(VAR_4.video.reg[12]&1) && !(VAR_5 & VAR_3))
  VAR_13 += 32;

 if (VAR_7.EmuOpt & VAR_0) {
  VAR_15 = 240;
  VAR_12 += (319 - VAR_13) * VAR_15 + VAR_14;
 } else
  VAR_12 += VAR_13 + VAR_14 * VAR_15;

 VAR_12[0] ^= 0xffff;
 VAR_12[VAR_15-1] ^= 0xffff;
 VAR_12[VAR_15] ^= 0xffff;
 VAR_12[VAR_15+1] ^= 0xffff;
 VAR_12[VAR_15*2] ^= 0xffff;
}
