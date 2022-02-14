
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_3__ {int mst_m; int ctmt; int timer; } ;
struct TYPE_4__ {TYPE_1__ hfcD; } ;
struct IsdnCardState {int debug; int lock; TYPE_2__ hw; int (* BC_Write_Reg ) (struct IsdnCardState*,int ,int ,int ) ;} ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct IsdnCardState*,char*,int) ;
 int FUNC_1 (struct IsdnCardState*) ;
 int VAR_6 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct IsdnCardState*) ;
 int FUNC_5 (struct IsdnCardState*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (struct IsdnCardState*,int ,int ,int ) ;
 int FUNC_9 (struct IsdnCardState*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_10(struct IsdnCardState *VAR_7, int VAR_8, void *VAR_9)
{
 u_long VAR_10;
 int VAR_11;

 if (VAR_7->debug & VAR_5)
  FUNC_0(VAR_7, "HFCS: card_msg %x", VAR_8);
 switch (VAR_8) {
  case 129:
   FUNC_6(&VAR_7->lock, VAR_10);
   FUNC_5(VAR_7);
   FUNC_7(&VAR_7->lock, VAR_10);
   return(0);
  case 130:
   FUNC_4(VAR_7);
   return(0);
  case 131:
   VAR_11 = (75*VAR_4)/100 +1;
   FUNC_2(&VAR_7->hw.hfcD.timer, VAR_6 + VAR_11);
   FUNC_6(&VAR_7->lock, VAR_10);
   FUNC_5(VAR_7);
   FUNC_1(VAR_7);
   FUNC_7(&VAR_7->lock, VAR_10);
   VAR_11 = (80*VAR_4)/1000 +1;
   FUNC_3(80);
   FUNC_6(&VAR_7->lock, VAR_10);
   VAR_7->hw.hfcD.ctmt |= VAR_3;
   VAR_7->BC_Write_Reg(VAR_7, VAR_1, VAR_0, VAR_7->hw.hfcD.ctmt);
   VAR_7->BC_Write_Reg(VAR_7, VAR_1, VAR_2, VAR_7->hw.hfcD.mst_m);
   FUNC_7(&VAR_7->lock, VAR_10);
   return(0);
  case 128:
   return(0);
 }
 return(0);
}
