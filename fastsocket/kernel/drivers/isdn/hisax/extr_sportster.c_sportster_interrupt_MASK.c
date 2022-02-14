
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
typedef scalar_t__ u_char ;
struct TYPE_3__ {scalar_t__ cfg_reg; } ;
struct TYPE_4__ {TYPE_1__ spt; } ;
struct IsdnCardState {int debug; int lock; TYPE_2__ hw; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct IsdnCardState*,int,int ) ;
 scalar_t__ FUNC_1 (struct IsdnCardState*,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct IsdnCardState*,char*) ;
 int FUNC_4 (struct IsdnCardState*,scalar_t__) ;
 int FUNC_5 (struct IsdnCardState*,scalar_t__) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static irqreturn_t
FUNC_8(int VAR_6, void *VAR_7)
{
 struct IsdnCardState *VAR_8 = VAR_7;
 u_char VAR_9;
 u_long VAR_10;

 FUNC_6(&VAR_8->lock, VAR_10);
 VAR_9 = FUNC_0(VAR_8, 1, VAR_0);
      Start_HSCX:
 if (VAR_9)
  FUNC_4(VAR_8, VAR_9);
 VAR_9 = FUNC_1(VAR_8, VAR_2);
      Start_ISAC:
 if (VAR_9)
  FUNC_5(VAR_8, VAR_9);
 VAR_9 = FUNC_0(VAR_8, 1, VAR_0);
 if (VAR_9) {
  if (VAR_8->debug & VAR_3)
   FUNC_3(VAR_8, "HSCX IntStat after IntRoutine");
  goto Start_HSCX;
 }
 VAR_9 = FUNC_1(VAR_8, VAR_2);
 if (VAR_9) {
  if (VAR_8->debug & VAR_4)
   FUNC_3(VAR_8, "ISAC IntStat after IntRoutine");
  goto Start_ISAC;
 }

 FUNC_2(VAR_8->hw.spt.cfg_reg + VAR_5 +1);
 FUNC_7(&VAR_8->lock, VAR_10);
 return VAR_1;
}
