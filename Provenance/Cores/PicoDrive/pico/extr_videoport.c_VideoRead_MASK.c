
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int addr; int type; } ;
struct TYPE_4__ {unsigned int* vram; unsigned int* cram; unsigned int* vsram; TYPE_1__ video; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static unsigned int FUNC_2(void)
{
  unsigned int VAR_2=0,VAR_3=0;

  VAR_2=VAR_1.video.addr; VAR_2>>=1;

  switch (VAR_1.video.type)
  {
    case 0: VAR_3=VAR_1.vram [VAR_2&0x7fff]; break;
    case 8: VAR_3=VAR_1.cram [VAR_2&0x003f]; break;
    case 4: VAR_3=VAR_1.vsram[VAR_2&0x003f]; break;
    default:FUNC_1(VAR_0, "VDP read with bad type %i", VAR_1.video.type); break;
  }

  FUNC_0();
  return VAR_3;
}
