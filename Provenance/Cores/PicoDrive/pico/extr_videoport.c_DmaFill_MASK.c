
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned short u16 ;
struct TYPE_5__ {unsigned short addr; unsigned char* reg; int status; } ;
struct TYPE_4__ {int dma_xfers; } ;
struct TYPE_6__ {TYPE_2__ video; TYPE_1__ m; scalar_t__ vram; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,int,unsigned char,int ) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(int VAR_4)
{
  int VAR_5;
  unsigned short VAR_6=VAR_2.video.addr;
  unsigned char *VAR_7=(unsigned char *) VAR_2.vram;
  unsigned char VAR_8 = (unsigned char) (VAR_4 >> 8);
  unsigned char VAR_9=VAR_2.video.reg[0xf];

  VAR_5=FUNC_0();
  FUNC_2(VAR_0, "DmaFill len %i inc %i [%i]", VAR_5, VAR_9, FUNC_1());

  VAR_2.m.dma_xfers += VAR_5;
  VAR_2.video.status |= 2;



  VAR_7[VAR_6] = (unsigned char) VAR_4;
  VAR_6=(u16)(VAR_6+VAR_9);

  if (!VAR_9) VAR_5=1;

  for (; VAR_5; VAR_5--) {


    VAR_7[VAR_6] = VAR_8;


    VAR_6=(u16)(VAR_6+VAR_9);
  }

  VAR_2.video.addr=VAR_6;

  VAR_2.video.reg[0x13] = VAR_2.video.reg[0x14] = 0;

  VAR_3 |= VAR_1;
}
