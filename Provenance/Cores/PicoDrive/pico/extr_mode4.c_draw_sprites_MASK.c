
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct PicoVideo {int* reg; } ;
struct TYPE_2__ {scalar_t__ vram; struct PicoVideo video; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (unsigned int,unsigned int,int) ;

__attribute__((used)) static void FUNC_1(int VAR_1)
{
  struct PicoVideo *VAR_2 = &VAR_0.video;
  unsigned int VAR_3[8];
  unsigned int VAR_4[8];
  unsigned char *VAR_5;
  int VAR_6 = 8;
  int VAR_7, VAR_8;
  int VAR_9, VAR_10, VAR_11;

  if (VAR_2->reg[0] & 8)
    VAR_6 = 0;

  VAR_5 = (unsigned char *)VAR_0.vram + ((VAR_2->reg[5] & 0x7e) << 7);
  if (VAR_2->reg[1] & 2) {
    VAR_8 = 0xfe; VAR_11 = 16;
  } else {
    VAR_8 = 0xff; VAR_11 = 8;
  }
  VAR_7 = (VAR_2->reg[6] & 4) << (13-2-1);

  for (VAR_9 = VAR_10 = 0; VAR_9 < 64 && VAR_10 < 8; VAR_9++)
  {
    int VAR_12;
    VAR_12 = VAR_5[VAR_9] + 1;
    if (VAR_12 == 0xd1)
      break;
    if (VAR_12 + VAR_11 <= VAR_1 || VAR_1 < VAR_12)
      continue;

    VAR_4[VAR_10] = VAR_6 + VAR_5[0x80 + VAR_9*2];
    VAR_3[VAR_10] = VAR_7 + ((VAR_5[0x80 + VAR_9*2 + 1] & VAR_8) << (5-1)) +
      ((VAR_1 - VAR_12) << (2-1));
    VAR_10++;
  }


  for (--VAR_10; VAR_10 >= 0; VAR_10--)
    FUNC_0(VAR_4[VAR_10], VAR_3[VAR_10], 0x10);
}
