
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int dma_xfers; } ;
struct TYPE_4__ {int* reg; int type; int status; } ;
struct TYPE_6__ {TYPE_2__ m; TYPE_1__ video; } ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_0 () ;
 int* VAR_2 ;
 int* VAR_3 ;
 int FUNC_1 (int ,char*,int,int,int,int,int ) ;

int FUNC_2(void)
{
  int VAR_4 = 0, VAR_5, VAR_6 = VAR_1.video.reg[0x17]>>6;
  int VAR_7 = VAR_1.m.dma_xfers;
  int VAR_8;

  if(!(VAR_6&2)) VAR_6 = (VAR_1.video.type==1) ? 0 : 1;
  VAR_8 = VAR_6;
  if(VAR_1.video.reg[12] & 1) VAR_6 |= 4;
  if(!(VAR_1.video.status&8)&&(VAR_1.video.reg[1]&0x40)) VAR_6|=8;
  VAR_5 = VAR_3[VAR_6];
  if(VAR_7 <= VAR_5)
  {
    if(VAR_6&2) VAR_1.video.status&=~2;
    else {
      VAR_4 = VAR_7 * VAR_2[VAR_6] >> 8;
    }
    VAR_1.m.dma_xfers = 0;
  } else {
    if(!(VAR_6&2)) VAR_4 = 488;
    VAR_1.m.dma_xfers -= VAR_5;
  }

  FUNC_1(VAR_0, "~Dma %i op=%i can=%i burn=%i [%i]", VAR_1.m.dma_xfers, VAR_8, VAR_5, VAR_4, FUNC_0());

  return VAR_4;
}
