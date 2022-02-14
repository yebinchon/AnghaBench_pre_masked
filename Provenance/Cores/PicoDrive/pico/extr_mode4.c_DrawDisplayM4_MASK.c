
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct PicoVideo {int* reg; } ;
struct TYPE_2__ {unsigned short* vram; struct PicoVideo video; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned short*,int,int,int) ;

__attribute__((used)) static void FUNC_2(int VAR_6)
{
  struct PicoVideo *VAR_7 = &VAR_4.video;
  unsigned short *VAR_8;
  int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
  int VAR_14 = 0;
  int VAR_15 = 32;


  VAR_9 = VAR_7->reg[9] + VAR_6;
  if (VAR_9 >= 224)
    VAR_9 -= 224;


  VAR_8 = VAR_4.vram;
  VAR_8 += (VAR_7->reg[2] & 0x0e) << (10-1);
  VAR_8 += (VAR_9>>3) << (6-1);

  VAR_11 = VAR_7->reg[8];
  if (VAR_6 < 16 && (VAR_7->reg[0] & 0x40))
    VAR_11 = 0;

  VAR_10 = ((-VAR_11 >> 3) + VAR_14) & 0x1f;
  VAR_12 = (VAR_9 & 7) << 1;
  VAR_13 = VAR_15 - VAR_14;

  VAR_11 = ((VAR_11 - 1) & 7) + 1;
  if (VAR_11 != 8)
    VAR_13++;
  VAR_11 += VAR_14 << 3;


  if (VAR_5 & VAR_2)
    FUNC_1(VAR_8, VAR_11, VAR_13, VAR_10 | 0x0000 | (VAR_12 << 16));


  if (VAR_5 & VAR_3)
    FUNC_0(VAR_6);


  if (VAR_5 & VAR_1)
    FUNC_1(VAR_8, VAR_11, VAR_13, VAR_10 | 0x1000 | (VAR_12 << 16));

  if (VAR_7->reg[0] & 0x20)

    ((int *)VAR_0)[2] = ((int *)VAR_0)[3] = 0xe0e0e0e0;
}
