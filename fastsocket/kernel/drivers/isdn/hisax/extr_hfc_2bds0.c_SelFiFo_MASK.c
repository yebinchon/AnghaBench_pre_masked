
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_3__ {int fifo; } ;
struct TYPE_4__ {TYPE_1__ hfcD; } ;
struct IsdnCardState {int (* BC_Write_Reg ) (struct IsdnCardState*,int ,int,int ) ;TYPE_2__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct IsdnCardState*) ;
 int FUNC_1 (struct IsdnCardState*) ;
 int FUNC_2 (struct IsdnCardState*,char*) ;
 int FUNC_3 (struct IsdnCardState*,int ,int,int ) ;

__attribute__((used)) static int
FUNC_4(struct IsdnCardState *VAR_11, u_char VAR_12)
{
 u_char VAR_13;

 if (VAR_11->hw.hfcD.fifo == VAR_12)
  return(1);
 switch(VAR_12) {
  case 0: VAR_13 = VAR_2 | VAR_5 | VAR_4 | VAR_0;
   break;
  case 1: VAR_13 = VAR_2 | VAR_5 | VAR_3 | VAR_0;
   break;
  case 2: VAR_13 = VAR_2 | VAR_5 | VAR_4 | VAR_1;
   break;
  case 3: VAR_13 = VAR_2 | VAR_5 | VAR_3 | VAR_1;
   break;
  case 4: VAR_13 = VAR_7 | VAR_10 | VAR_9;
   break;
  case 5: VAR_13 = VAR_7 | VAR_10 | VAR_8;
   break;
  default:
   FUNC_2(VAR_11, "SelFiFo Error");
   return(0);
 }
 VAR_11->hw.hfcD.fifo = VAR_12;
 FUNC_1(VAR_11);
 VAR_11->BC_Write_Reg(VAR_11, VAR_6, VAR_13, 0);
 FUNC_0(VAR_11);
 return(2);
}
