
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_3__ {scalar_t__ isac; scalar_t__ cfg_reg; } ;
struct TYPE_4__ {TYPE_1__ teles3; } ;
struct IsdnCardState {scalar_t__ typ; int irq; TYPE_2__ hw; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__,int) ;

__attribute__((used)) static int
FUNC_2(struct IsdnCardState *VAR_3)
{
 u_char VAR_4;

 if (VAR_3->typ != VAR_2) {
  if ((VAR_3->hw.teles3.cfg_reg) && (VAR_3->typ != VAR_1)) {
   switch (VAR_3->irq) {
    case 2:
    case 9:
     VAR_4 = 0x00;
     break;
    case 3:
     VAR_4 = 0x02;
     break;
    case 4:
     VAR_4 = 0x04;
     break;
    case 5:
     VAR_4 = 0x06;
     break;
    case 10:
     VAR_4 = 0x08;
     break;
    case 11:
     VAR_4 = 0x0A;
     break;
    case 12:
     VAR_4 = 0x0C;
     break;
    case 15:
     VAR_4 = 0x0E;
     break;
    default:
     return(1);
   }
   FUNC_1(VAR_3->hw.teles3.cfg_reg + 4, VAR_4);
   FUNC_0(VAR_0 / 10 + 1);
   FUNC_1(VAR_3->hw.teles3.cfg_reg + 4, VAR_4 | 1);
   FUNC_0(VAR_0 / 10 + 1);
  } else if (VAR_3->typ == VAR_1) {
   FUNC_1(VAR_3->hw.teles3.cfg_reg, 0xff);
   FUNC_0(2);
   FUNC_1(VAR_3->hw.teles3.cfg_reg, 0x00);
   FUNC_0(2);
  } else {

   FUNC_1(VAR_3->hw.teles3.isac + 0x3c, 0);
   FUNC_0(2);
   FUNC_1(VAR_3->hw.teles3.isac + 0x3c, 1);
   FUNC_0(2);
  }
 }
 return(0);
}
