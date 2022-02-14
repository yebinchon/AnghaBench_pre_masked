
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u16 ;
struct TYPE_6__ {int type; void* addr; } ;
struct TYPE_5__ {int dirtyPal; } ;
struct TYPE_8__ {void** vram; void** cram; void** vsram; TYPE_2__ video; TYPE_1__ m; } ;
struct TYPE_7__ {unsigned char** word_ram1M; int* s68k_regs; } ;


 int VAR_0 ;
 TYPE_4__ VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_0 (unsigned int) ;
 int VAR_3 ;

void FUNC_1(unsigned int VAR_4, unsigned int VAR_5, int VAR_6, unsigned char VAR_7)
{
  unsigned char *VAR_8;
  unsigned int VAR_9, VAR_10;
  u16 *VAR_11;

  VAR_8 = VAR_2->word_ram1M[VAR_2->s68k_regs[3]&1];

  switch (VAR_1.video.type)
  {
    case 1:
      VAR_11 = VAR_1.vram;
      for(; VAR_6; VAR_6--)
      {
        VAR_9 = FUNC_0(VAR_4 >> 2) << 2;
        VAR_9 |= VAR_4 & 2;

        VAR_11[VAR_5>>1] = *(u16 *)(VAR_8 + VAR_9);
 VAR_4 += 2;

        VAR_5=(u16)(VAR_5+VAR_7);
      }
      VAR_3 |= VAR_0;
      break;

    case 3:
      VAR_1.m.dirtyPal = 1;
      VAR_11 = VAR_1.cram;
      for(VAR_10=VAR_5&0x7f; VAR_6; VAR_6--)
      {
        VAR_9 = FUNC_0(VAR_4 >> 2) << 2;
        VAR_9 |= VAR_4 & 2;
        VAR_11[VAR_10>>1] = *(u16 *)(VAR_8 + VAR_9);
 VAR_4 += 2;

        VAR_10+=VAR_7;

        if(VAR_10 >= 0x80) break;
      }
      VAR_5=(VAR_5&0xff00)|VAR_10;
      break;

    case 5:
      VAR_11 = VAR_1.vsram;
      for(VAR_10=VAR_5&0x7f; VAR_6; VAR_6--)
      {
        VAR_9 = FUNC_0(VAR_4 >> 2) << 2;
        VAR_9 |= VAR_4 & 2;
        VAR_11[VAR_10>>1] = *(u16 *)(VAR_8 + VAR_9);
 VAR_4 += 2;

        VAR_10+=VAR_7;

        if(VAR_10 >= 0x80) break;
      }
      VAR_5=(VAR_5&0xff00)|VAR_10;
      break;
  }

  VAR_1.video.addr=(u16)VAR_5;
}
