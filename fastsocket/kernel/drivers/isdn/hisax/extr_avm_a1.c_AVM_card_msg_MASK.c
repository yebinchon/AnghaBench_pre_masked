
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






 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct IsdnCardState*,int) ;
 int FUNC_2 (struct IsdnCardState*,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int
FUNC_5(struct IsdnCardState *VAR_0, int VAR_1, void *VAR_2)
{
 u_long VAR_3;

 switch (VAR_1) {
  case 129:
   return(0);
  case 130:
   FUNC_2(VAR_0, 0x3f);
   return(0);
  case 131:
   FUNC_3(&VAR_0->lock, VAR_3);
   FUNC_1(VAR_0, 1);
   FUNC_0(VAR_0->hw.avm.cfg_reg, 0x16);
   FUNC_0(VAR_0->hw.avm.cfg_reg, 0x1E);
   FUNC_1(VAR_0, 2);
   FUNC_4(&VAR_0->lock, VAR_3);
   return(0);
  case 128:
   return(0);
 }
 return(0);
}
