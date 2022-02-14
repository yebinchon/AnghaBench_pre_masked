
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_3__ {int cfg_reg; } ;
struct TYPE_4__ {TYPE_1__ avm; } ;
struct IsdnCardState {int lock; TYPE_2__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct IsdnCardState*,int ,int) ;
 int FUNC_1 (struct IsdnCardState*) ;
 int FUNC_2 (struct IsdnCardState*) ;
 int FUNC_3 (struct IsdnCardState*) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct IsdnCardState*) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static int
FUNC_9(struct IsdnCardState *VAR_5, int VAR_6, void *VAR_7)
{
 u_long VAR_8;

 switch (VAR_6) {
  case 129:
   FUNC_7(&VAR_5->lock, VAR_8);
   FUNC_6(VAR_5);
   FUNC_8(&VAR_5->lock, VAR_8);
   return(0);
  case 130:
   FUNC_4(0, VAR_5->hw.avm.cfg_reg + 2);
   FUNC_5(VAR_5->hw.avm.cfg_reg, 32);
   return(0);
  case 131:
   FUNC_7(&VAR_5->lock, VAR_8);
   FUNC_6(VAR_5);
   FUNC_1(VAR_5);
   FUNC_3(VAR_5);
   FUNC_2(VAR_5);
   FUNC_4(VAR_0 | VAR_2,
    VAR_5->hw.avm.cfg_reg + 2);
   FUNC_0(VAR_5, VAR_4, 0);
   FUNC_4(VAR_0 | VAR_2 |
    VAR_1, VAR_5->hw.avm.cfg_reg + 2);

   FUNC_0(VAR_5, VAR_3, 0x41);
   FUNC_8(&VAR_5->lock, VAR_8);
   return(0);
  case 128:
   return(0);
 }
 return(0);
}
