
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int CR2; int CR1; int CR3; int CR4; int HIRQ; } ;
struct TYPE_4__ {int status; int mpgauth; int isonesectorstored; int satauth; TYPE_1__ reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__* VAR_8 ;
 int FUNC_0 (int) ;

void FUNC_1(void) {
  int VAR_9;

  VAR_9 = VAR_8->reg.CR2 & 0xFF;


  if ((VAR_8->status & 0xF) != VAR_5 &&
      (VAR_8->status & 0xF) != VAR_6)
  {

     VAR_8->status = VAR_4;

     VAR_8->reg.CR1 = (VAR_8->status << 8) | 0xFF;
     VAR_8->reg.CR2 = 0xFFFF;
     VAR_8->reg.CR3 = 0xFFFF;
     VAR_8->reg.CR4 = 0xFFFF;

     if (VAR_9 == 1)
     {
        VAR_8->reg.HIRQ |= VAR_3;
        VAR_8->mpgauth = 2;
     }
     else
     {

        VAR_8->isonesectorstored = 1;
        VAR_8->reg.HIRQ |= VAR_2 | VAR_1;
        VAR_8->satauth = 4;
     }



     VAR_8->status = VAR_7;
  }
  else
  {
     if (VAR_9 == 1)
     {
        VAR_8->reg.HIRQ |= VAR_3;
        VAR_8->mpgauth = 2;
     }
     else
        VAR_8->reg.HIRQ |= VAR_2 | VAR_1;
  }

  FUNC_0(VAR_8->status);
  VAR_8->reg.HIRQ |= VAR_0;
}
