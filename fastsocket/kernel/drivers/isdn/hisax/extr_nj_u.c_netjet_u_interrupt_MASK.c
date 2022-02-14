
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
typedef int u_char ;
struct TYPE_3__ {int last_is0; int irqstat0; scalar_t__ base; } ;
struct TYPE_4__ {TYPE_1__ njet; } ;
struct IsdnCardState {int debug; int lock; int HW_Flags; TYPE_2__ hw; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct IsdnCardState*,int ) ;
 int FUNC_1 (struct IsdnCardState*,int ,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct IsdnCardState*,char*,int,int) ;
 int FUNC_4 (struct IsdnCardState*,int) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct IsdnCardState*) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int ,int *) ;
 scalar_t__ FUNC_10 (int ,int *) ;
 int FUNC_11 (struct IsdnCardState*) ;

__attribute__((used)) static irqreturn_t
FUNC_12(int VAR_13, void *VAR_14)
{
 struct IsdnCardState *VAR_15 = VAR_14;
 u_char VAR_16, VAR_17;
 u_long VAR_18;

 FUNC_7(&VAR_15->lock, VAR_18);
 if (!((VAR_17 = FUNC_2(VAR_15->hw.njet.base + VAR_11)) &
  VAR_12)) {
  VAR_16 = FUNC_0(VAR_15, VAR_1);
  if (VAR_15->debug & VAR_4)
   FUNC_3(VAR_15, "tiger: i1 %x %x", VAR_17, VAR_16);
  if (VAR_16) {
   FUNC_4(VAR_15, VAR_16);
   FUNC_1(VAR_15, VAR_2, 0xFF);
   FUNC_1(VAR_15, VAR_2, 0x0);
  }
 }


 if (FUNC_5(VAR_15->hw.njet.base + VAR_7) <
  FUNC_5(VAR_15->hw.njet.base + VAR_8))

  VAR_17 = 0x08;
 else
  VAR_17 = 0x04;
 if (FUNC_5(VAR_15->hw.njet.base + VAR_5) <
  FUNC_5(VAR_15->hw.njet.base + VAR_6))

  VAR_17 = VAR_17 | 0x02;
 else
  VAR_17 = VAR_17 | 0x01;
 if (VAR_17 != VAR_15->hw.njet.last_is0)
 {
  if (FUNC_10(VAR_0, &VAR_15->HW_Flags)) {
   FUNC_8(&VAR_15->lock, VAR_18);
   return VAR_3;
  }
  VAR_15->hw.njet.irqstat0 = VAR_17;
  if ((VAR_15->hw.njet.irqstat0 & VAR_9) !=
   (VAR_15->hw.njet.last_is0 & VAR_9))

   FUNC_6(VAR_15);
  if ((VAR_15->hw.njet.irqstat0 & VAR_10) !=
   (VAR_15->hw.njet.last_is0 & VAR_10))

   FUNC_11(VAR_15);

  FUNC_9(VAR_0, &VAR_15->HW_Flags);
 }
 FUNC_8(&VAR_15->lock, VAR_18);
 return VAR_3;
}
