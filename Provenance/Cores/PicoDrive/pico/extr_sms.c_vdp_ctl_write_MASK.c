
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct PicoVideo {int pending; int* reg; int addr; unsigned char type; } ;
struct TYPE_2__ {struct PicoVideo video; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ,char*,unsigned char,int) ;

__attribute__((used)) static void FUNC_1(unsigned char VAR_2)
{
  struct PicoVideo *VAR_3 = &VAR_1.video;

  if (VAR_3->pending) {
    if ((VAR_2 >> 6) == 2) {
      VAR_3->reg[VAR_2 & 0x0f] = VAR_3->addr;
      FUNC_0(VAR_0, "  VDP r%02x=%02x", VAR_2 & 0x0f, VAR_3->addr & 0xff);
    }
    VAR_3->type = VAR_2 >> 6;
    VAR_3->addr &= 0x00ff;
    VAR_3->addr |= (VAR_2 & 0x3f) << 8;
  } else {
    VAR_3->addr &= 0x3f00;
    VAR_3->addr |= VAR_2;
  }
  VAR_3->pending ^= 1;
}
