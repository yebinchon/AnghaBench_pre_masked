
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int CR1; int CR2; int HIRQ; } ;
struct TYPE_4__ {int* TOC; int FAD; int index; int options; int repcnt; int ctrladdr; int track; TYPE_1__ reg; void* status; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (void*) ;

void FUNC_3(void) {
  if (VAR_3->reg.CR1 & 0x80)
  {

     u32 VAR_4;
  int VAR_5;

     VAR_4 = ((VAR_3->reg.CR1 & 0x0F) << 16) | VAR_3->reg.CR2;
  VAR_3->status = VAR_1;
  for (VAR_5 = 0; VAR_5 < 16; VAR_5++){
   u32 VAR_6 = VAR_3->TOC[VAR_5] & 0x00FFFFFF;
   if (VAR_6 >= VAR_4){
    FUNC_1(VAR_5, 1);
    VAR_3->FAD = VAR_4;
    break;
   }
  }

  }
  else
  {

     if (VAR_3->reg.CR2 >> 8)
     {

        VAR_3->status = VAR_1;
        FUNC_1((VAR_3->reg.CR2 >> 8), 1);
        VAR_3->index = VAR_3->reg.CR2 & 0xFF;
     }
     else
     {

        VAR_3->status = VAR_2;
        VAR_3->options = 0xFF;
        VAR_3->repcnt = 0xFF;
        VAR_3->ctrladdr = 0xFF;
        VAR_3->track = 0xFF;
        VAR_3->index = 0xFF;
        VAR_3->FAD = 0xFFFFFFFF;
     }
  }

  FUNC_0(0);

  FUNC_2(VAR_3->status);
  VAR_3->reg.HIRQ |= VAR_0;
}
