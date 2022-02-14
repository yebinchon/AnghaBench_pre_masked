
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_5__ {int CR1; int CR2; int CR3; int CR4; int HIRQ; } ;
struct TYPE_6__ {int playFAD; int FAD; int maxrepeat; int playendFAD; TYPE_2__ reg; int status; TYPE_1__* cdi; int playtype; void* index; void* track; } ;
struct TYPE_4__ {int (* ReadAheadFAD ) (int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 TYPE_3__* VAR_3 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (void*,int) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;

void FUNC_7(void) {
  u32 VAR_4;
  u32 VAR_5;
  u32 VAR_6;


  VAR_4 = ((VAR_3->reg.CR1 & 0xFF) << 16) | VAR_3->reg.CR2;
  VAR_5 = ((VAR_3->reg.CR3 & 0xFF) << 16) | VAR_3->reg.CR4;
  VAR_6 = VAR_3->reg.CR3 >> 8;


  if (VAR_4 == 0xFFFFFF || VAR_6 == 0xFF)
  {

  }
  else if (VAR_4 & 0x800000)
  {

     VAR_3->playFAD = (VAR_4 & 0xFFFFF);

     FUNC_3(FUNC_1(VAR_3->playFAD), 0);

     if (!(VAR_6 & 0x80))

        VAR_3->FAD = VAR_3->playFAD;
  }
  else
  {



     if (VAR_4 == 0)
        VAR_4 = 0x0100;

     if (!(VAR_6 & 0x80))
     {
        FUNC_3((u8)(VAR_4 >> 8), 1);
        VAR_3->playFAD = VAR_3->FAD;
        VAR_3->track = (u8)(VAR_4 >> 8);
        VAR_3->index = (u8)VAR_4;
     }
     else
     {

        FUNC_3((u8)(VAR_4 >> 8), 0);
     }
  }

  VAR_6 &= 0x7F;


  if (VAR_6 != 0x7F)
     VAR_3->maxrepeat = VAR_6;


  if (VAR_5 == 0xFFFFFF)
  {

  }
  else if (VAR_5 & 0x800000)
  {

     VAR_3->playendFAD = VAR_3->playFAD+(VAR_5 & 0xFFFFF);
  }
  else if (VAR_5 != 0)
  {

     VAR_5 += 0x100;

     if ((VAR_5 & 0xFF) == 0)
        VAR_3->playendFAD = FUNC_4((u16)(VAR_5 | 0x0063));
     else
        VAR_3->playendFAD = FUNC_4((u16)VAR_5);
  }
  else
  {

     VAR_3->playendFAD = FUNC_4(0xFFFF);
  }







  FUNC_2(1);

  VAR_3->status = VAR_2;
  VAR_3->playtype = VAR_1;
  VAR_3->cdi->ReadAheadFAD(VAR_3->FAD);

  FUNC_5(VAR_3->status);
  VAR_3->reg.HIRQ |= VAR_0;
}
