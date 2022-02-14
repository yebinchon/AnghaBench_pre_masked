
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
typedef scalar_t__ u_char ;
struct TYPE_3__ {int hscx; int adr; int isac; } ;
struct TYPE_4__ {TYPE_1__ asus; } ;
struct IsdnCardState {int debug; int lock; TYPE_2__ hw; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct IsdnCardState*,char*) ;
 int FUNC_1 (struct IsdnCardState*,scalar_t__) ;
 int FUNC_2 (struct IsdnCardState*,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ,int ,scalar_t__,int) ;

__attribute__((used)) static irqreturn_t
FUNC_7(int VAR_7, void *VAR_8)
{
 struct IsdnCardState *VAR_9 = VAR_8;
 u_char VAR_10;
 u_long VAR_11;

 FUNC_4(&VAR_9->lock, VAR_11);
 VAR_10 = FUNC_3(VAR_9->hw.asus.adr, VAR_9->hw.asus.hscx, VAR_0 + 0x40);
      Start_HSCX:
 if (VAR_10)
  FUNC_1(VAR_9, VAR_10);
 VAR_10 = FUNC_3(VAR_9->hw.asus.adr, VAR_9->hw.asus.isac, VAR_3);
      Start_ISAC:
 if (VAR_10)
  FUNC_2(VAR_9, VAR_10);
 VAR_10 = FUNC_3(VAR_9->hw.asus.adr, VAR_9->hw.asus.hscx, VAR_0 + 0x40);
 if (VAR_10) {
  if (VAR_9->debug & VAR_5)
   FUNC_0(VAR_9, "HSCX IntStat after IntRoutine");
  goto Start_HSCX;
 }
 VAR_10 = FUNC_3(VAR_9->hw.asus.adr, VAR_9->hw.asus.isac, VAR_3);
 if (VAR_10) {
  if (VAR_9->debug & VAR_6)
   FUNC_0(VAR_9, "ISAC IntStat after IntRoutine");
  goto Start_ISAC;
 }
 FUNC_6(VAR_9->hw.asus.adr, VAR_9->hw.asus.hscx, VAR_1, 0xFF);
 FUNC_6(VAR_9->hw.asus.adr, VAR_9->hw.asus.hscx, VAR_1 + 0x40, 0xFF);
 FUNC_6(VAR_9->hw.asus.adr, VAR_9->hw.asus.isac, VAR_4, 0xFF);
 FUNC_6(VAR_9->hw.asus.adr, VAR_9->hw.asus.isac, VAR_4, 0x0);
 FUNC_6(VAR_9->hw.asus.adr, VAR_9->hw.asus.hscx, VAR_1, 0x0);
 FUNC_6(VAR_9->hw.asus.adr, VAR_9->hw.asus.hscx, VAR_1 + 0x40, 0x0);
 FUNC_5(&VAR_9->lock, VAR_11);
 return VAR_2;
}
