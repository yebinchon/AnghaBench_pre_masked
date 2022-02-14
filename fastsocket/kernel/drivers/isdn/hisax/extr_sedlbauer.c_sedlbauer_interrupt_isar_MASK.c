
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
typedef int u_char ;
struct TYPE_3__ {int hscx; int adr; int isac; } ;
struct TYPE_4__ {TYPE_1__ sedl; } ;
struct IsdnCardState {int debug; int lock; TYPE_2__ hw; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct IsdnCardState*,char*) ;
 int FUNC_1 (struct IsdnCardState*,int) ;
 int FUNC_2 (struct IsdnCardState*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ,int ,int ,int) ;

__attribute__((used)) static irqreturn_t
FUNC_7(int VAR_8, void *VAR_9)
{
 struct IsdnCardState *VAR_10 = VAR_9;
 u_char VAR_11;
 int VAR_12 = 5;
 u_long VAR_13;

 FUNC_4(&VAR_10->lock, VAR_13);
 VAR_11 = FUNC_3(VAR_10->hw.sedl.adr, VAR_10->hw.sedl.hscx, VAR_3);
      Start_ISAR:
 if (VAR_11 & VAR_5)
  FUNC_2(VAR_10);
 VAR_11 = FUNC_3(VAR_10->hw.sedl.adr, VAR_10->hw.sedl.isac, VAR_1);
      Start_ISAC:
 if (VAR_11)
  FUNC_1(VAR_10, VAR_11);
 VAR_11 = FUNC_3(VAR_10->hw.sedl.adr, VAR_10->hw.sedl.hscx, VAR_3);
 if ((VAR_11 & VAR_5) && --VAR_12) {
  if (VAR_10->debug & VAR_6)
   FUNC_0(VAR_10, "ISAR IntStat after IntRoutine");
  goto Start_ISAR;
 }
 VAR_11 = FUNC_3(VAR_10->hw.sedl.adr, VAR_10->hw.sedl.isac, VAR_1);
 if (VAR_11 && --VAR_12) {
  if (VAR_10->debug & VAR_7)
   FUNC_0(VAR_10, "ISAC IntStat after IntRoutine");
  goto Start_ISAC;
 }
 if (!VAR_12)
  if (VAR_10->debug & VAR_7)
   FUNC_0(VAR_10, "Sedlbauer IRQ LOOP");

 FUNC_6(VAR_10->hw.sedl.adr, VAR_10->hw.sedl.hscx, VAR_3, 0);
 FUNC_6(VAR_10->hw.sedl.adr, VAR_10->hw.sedl.isac, VAR_2, 0xFF);
 FUNC_6(VAR_10->hw.sedl.adr, VAR_10->hw.sedl.isac, VAR_2, 0x0);
 FUNC_6(VAR_10->hw.sedl.adr, VAR_10->hw.sedl.hscx, VAR_3, VAR_4);
 FUNC_5(&VAR_10->lock, VAR_13);
 return VAR_0;
}
