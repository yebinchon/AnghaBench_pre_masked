
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
typedef scalar_t__ u_char ;
struct TYPE_3__ {int addr; } ;
struct TYPE_4__ {TYPE_1__ hfc; } ;
struct IsdnCardState {int debug; int lock; TYPE_2__ hw; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct IsdnCardState*,char*) ;
 int FUNC_1 (struct IsdnCardState*,scalar_t__) ;
 scalar_t__ FUNC_2 (int,int,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int,int,int ,int) ;

__attribute__((used)) static irqreturn_t
FUNC_6(int VAR_4, void *VAR_5)
{
 struct IsdnCardState *VAR_6 = VAR_5;
 u_char VAR_7;
 u_long VAR_8;

 FUNC_3(&VAR_6->lock, VAR_8);
 VAR_7 = FUNC_2(VAR_6->hw.hfc.addr | 1, VAR_6->hw.hfc.addr, VAR_1);
      Start_ISAC:
 if (VAR_7)
  FUNC_1(VAR_6, VAR_7);
 VAR_7 = FUNC_2(VAR_6->hw.hfc.addr | 1, VAR_6->hw.hfc.addr, VAR_1);
 if (VAR_7) {
  if (VAR_6->debug & VAR_3)
   FUNC_0(VAR_6, "ISAC IntStat after IntRoutine");
  goto Start_ISAC;
 }
 FUNC_5(VAR_6->hw.hfc.addr | 1, VAR_6->hw.hfc.addr, VAR_2, 0xFF);
 FUNC_5(VAR_6->hw.hfc.addr | 1, VAR_6->hw.hfc.addr, VAR_2, 0x0);
 FUNC_4(&VAR_6->lock, VAR_8);
 return VAR_0;
}
