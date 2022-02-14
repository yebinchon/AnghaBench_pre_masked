
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_3__ {int phymem; scalar_t__ membase; scalar_t__ cfg_reg; } ;
struct TYPE_4__ {TYPE_1__ teles0; } ;
struct IsdnCardState {int irq; TYPE_2__ hw; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int
FUNC_4(struct IsdnCardState *VAR_1)
{
 u_char VAR_2;

 if (VAR_1->hw.teles0.cfg_reg) {
  switch (VAR_1->irq) {
   case 2:
   case 9:
    VAR_2 = 0x00;
    break;
   case 3:
    VAR_2 = 0x02;
    break;
   case 4:
    VAR_2 = 0x04;
    break;
   case 5:
    VAR_2 = 0x06;
    break;
   case 10:
    VAR_2 = 0x08;
    break;
   case 11:
    VAR_2 = 0x0A;
    break;
   case 12:
    VAR_2 = 0x0C;
    break;
   case 15:
    VAR_2 = 0x0E;
    break;
   default:
    return(1);
  }
  VAR_2 |= ((VAR_1->hw.teles0.phymem >> 9) & 0xF0);
  FUNC_1(VAR_1->hw.teles0.cfg_reg + 4, VAR_2);
  FUNC_0(VAR_0 / 10 + 1);
  FUNC_1(VAR_1->hw.teles0.cfg_reg + 4, VAR_2 | 1);
  FUNC_0(VAR_0 / 10 + 1);
 }
 FUNC_3(0, VAR_1->hw.teles0.membase + 0x80); FUNC_2();
 FUNC_0(VAR_0 / 5 + 1);
 FUNC_3(1, VAR_1->hw.teles0.membase + 0x80); FUNC_2();
 FUNC_0(VAR_0 / 5 + 1);
 return(0);
}
