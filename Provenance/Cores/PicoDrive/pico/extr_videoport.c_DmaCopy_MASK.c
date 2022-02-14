
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u16 ;
struct TYPE_5__ {size_t addr; unsigned char* reg; int status; } ;
struct TYPE_4__ {int dma_xfers; } ;
struct TYPE_6__ {TYPE_2__ video; TYPE_1__ m; scalar_t__ vram; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,int,int ) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(int VAR_4)
{
  u16 VAR_5=VAR_2.video.addr;
  unsigned char *VAR_6 = (unsigned char *) VAR_2.vram;
  unsigned char *VAR_7;
  unsigned char VAR_8=VAR_2.video.reg[0xf];
  int VAR_9;
  FUNC_1(VAR_0, "DmaCopy len %i [%i]", VAR_4, FUNC_0());

  VAR_2.m.dma_xfers += VAR_4;
  VAR_2.video.status |= 2;

  VAR_9 =VAR_2.video.reg[0x15];
  VAR_9|=VAR_2.video.reg[0x16]<<8;
  VAR_7=VAR_6+VAR_9;

  if (VAR_9+VAR_4 > 0x10000) VAR_4=0x10000-VAR_9;

  for (; VAR_4; VAR_4--)
  {
    VAR_6[VAR_5] = *VAR_7++;

    VAR_5=(u16)(VAR_5+VAR_8);
  }

  VAR_2.video.addr=VAR_5;
  VAR_3 |= VAR_1;
}
