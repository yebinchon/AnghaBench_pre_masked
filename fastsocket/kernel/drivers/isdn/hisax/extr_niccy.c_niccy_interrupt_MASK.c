
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
typedef scalar_t__ u_char ;
struct TYPE_3__ {int hscx; int hscx_ale; int isac; int isac_ale; scalar_t__ cfg_reg; } ;
struct TYPE_4__ {TYPE_1__ niccy; } ;
struct IsdnCardState {scalar_t__ subtyp; int debug; int lock; TYPE_2__ hw; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (struct IsdnCardState*,char*) ;
 int FUNC_1 (struct IsdnCardState*,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct IsdnCardState*,scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,int ,scalar_t__) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int ,int ,scalar_t__,int) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_11, void *VAR_12)
{
 struct IsdnCardState *VAR_13 = VAR_12;
 u_char VAR_14;
 u_long VAR_15;

 FUNC_6(&VAR_13->lock, VAR_15);
 if (VAR_13->subtyp == VAR_8) {
  int VAR_16;
  VAR_16 = FUNC_2(VAR_13->hw.niccy.cfg_reg + VAR_10);
  if (!(VAR_16 & VAR_9)) {
   FUNC_7(&VAR_13->lock, VAR_15);
   return VAR_3;
  }
  FUNC_4(VAR_16, VAR_13->hw.niccy.cfg_reg + VAR_10);
 }
 VAR_14 = FUNC_5(VAR_13->hw.niccy.hscx_ale, VAR_13->hw.niccy.hscx,
   VAR_0 + 0x40);
Start_HSCX:
 if (VAR_14)
  FUNC_1(VAR_13, VAR_14);
 VAR_14 = FUNC_5(VAR_13->hw.niccy.isac_ale, VAR_13->hw.niccy.isac, VAR_4);
Start_ISAC:
 if (VAR_14)
  FUNC_3(VAR_13, VAR_14);
 VAR_14 = FUNC_5(VAR_13->hw.niccy.hscx_ale, VAR_13->hw.niccy.hscx,
   VAR_0 + 0x40);
 if (VAR_14) {
  if (VAR_13->debug & VAR_6)
   FUNC_0(VAR_13, "HSCX IntStat after IntRoutine");
  goto Start_HSCX;
 }
 VAR_14 = FUNC_5(VAR_13->hw.niccy.isac_ale, VAR_13->hw.niccy.isac, VAR_4);
 if (VAR_14) {
  if (VAR_13->debug & VAR_7)
   FUNC_0(VAR_13, "ISAC IntStat after IntRoutine");
  goto Start_ISAC;
 }
 FUNC_8(VAR_13->hw.niccy.hscx_ale, VAR_13->hw.niccy.hscx, VAR_1, 0xFF);
 FUNC_8(VAR_13->hw.niccy.hscx_ale, VAR_13->hw.niccy.hscx, VAR_1 + 0x40,
   0xFF);
 FUNC_8(VAR_13->hw.niccy.isac_ale, VAR_13->hw.niccy.isac, VAR_5, 0xFF);
 FUNC_8(VAR_13->hw.niccy.isac_ale, VAR_13->hw.niccy.isac, VAR_5, 0);
 FUNC_8(VAR_13->hw.niccy.hscx_ale, VAR_13->hw.niccy.hscx, VAR_1, 0);
 FUNC_8(VAR_13->hw.niccy.hscx_ale, VAR_13->hw.niccy.hscx, VAR_1 + 0x40,0);
 FUNC_7(&VAR_13->lock, VAR_15);
 return VAR_2;
}
