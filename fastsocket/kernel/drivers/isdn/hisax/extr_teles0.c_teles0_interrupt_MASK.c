
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
typedef scalar_t__ u_char ;
struct TYPE_3__ {int membase; } ;
struct TYPE_4__ {TYPE_1__ teles0; } ;
struct IsdnCardState {int debug; int lock; TYPE_2__ hw; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct IsdnCardState*,char*) ;
 int FUNC_1 (struct IsdnCardState*,scalar_t__) ;
 int FUNC_2 (struct IsdnCardState*,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int ,int,int ,int) ;
 int FUNC_8 (int ,int ,int) ;

__attribute__((used)) static irqreturn_t
FUNC_9(int VAR_7, void *VAR_8)
{
 struct IsdnCardState *VAR_9 = VAR_8;
 u_char VAR_10;
 u_long VAR_11;
 int VAR_12 = 0;

 FUNC_5(&VAR_9->lock, VAR_11);
 VAR_10 = FUNC_3(VAR_9->hw.teles0.membase, 1, VAR_0);
      Start_HSCX:
 if (VAR_10)
  FUNC_1(VAR_9, VAR_10);
 VAR_10 = FUNC_4(VAR_9->hw.teles0.membase, VAR_3);
      Start_ISAC:
 if (VAR_10)
  FUNC_2(VAR_9, VAR_10);
 VAR_12++;
 VAR_10 = FUNC_3(VAR_9->hw.teles0.membase, 1, VAR_0);
 if (VAR_10 && VAR_12 < 5) {
  if (VAR_9->debug & VAR_5)
   FUNC_0(VAR_9, "HSCX IntStat after IntRoutine");
  goto Start_HSCX;
 }
 VAR_10 = FUNC_4(VAR_9->hw.teles0.membase, VAR_3);
 if (VAR_10 && VAR_12 < 5) {
  if (VAR_9->debug & VAR_6)
   FUNC_0(VAR_9, "ISAC IntStat after IntRoutine");
  goto Start_ISAC;
 }
 FUNC_7(VAR_9->hw.teles0.membase, 0, VAR_1, 0xFF);
 FUNC_7(VAR_9->hw.teles0.membase, 1, VAR_1, 0xFF);
 FUNC_8(VAR_9->hw.teles0.membase, VAR_4, 0xFF);
 FUNC_8(VAR_9->hw.teles0.membase, VAR_4, 0x0);
 FUNC_7(VAR_9->hw.teles0.membase, 0, VAR_1, 0x0);
 FUNC_7(VAR_9->hw.teles0.membase, 1, VAR_1, 0x0);
 FUNC_6(&VAR_9->lock, VAR_11);
 return VAR_2;
}
