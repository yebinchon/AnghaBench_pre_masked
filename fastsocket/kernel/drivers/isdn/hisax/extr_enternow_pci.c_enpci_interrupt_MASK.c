
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_3__ {unsigned char last_is0; unsigned char irqstat0; scalar_t__ base; } ;
struct TYPE_4__ {TYPE_1__ njet; } ;
struct IsdnCardState {int lock; int HW_Flags; TYPE_2__ hw; } ;
typedef int irqreturn_t ;


 int FUNC_0 (struct IsdnCardState*,unsigned char) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 unsigned char FUNC_1 (struct IsdnCardState*,int) ;
 unsigned char VAR_11 ;
 unsigned char FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (unsigned char,scalar_t__) ;
 int FUNC_5 (struct IsdnCardState*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 int FUNC_10 (struct IsdnCardState*) ;

__attribute__((used)) static irqreturn_t
FUNC_11(int VAR_12, void *VAR_13)
{
 struct IsdnCardState *VAR_14 = VAR_13;
 unsigned char VAR_15, VAR_16, VAR_17;
 u_long VAR_18;

 FUNC_6(&VAR_14->lock, VAR_18);
 VAR_16 = FUNC_2(VAR_14->hw.njet.base + VAR_10);


 if (!(VAR_16 & VAR_11)) {

  VAR_17 = FUNC_1(VAR_14, 0x00);
  FUNC_0(VAR_14, VAR_17);
  VAR_16 = 1;
 } else
  VAR_16 = 0;
 VAR_15 = FUNC_2(VAR_14->hw.njet.base + VAR_9);
 if ((VAR_15 | VAR_16)==0) {
  FUNC_7(&VAR_14->lock, VAR_18);
  return VAR_2;
 }
 if (VAR_15)
  FUNC_4(VAR_15, VAR_14->hw.njet.base + VAR_9);



 if (FUNC_3(VAR_14->hw.njet.base + VAR_5) <
  FUNC_3(VAR_14->hw.njet.base + VAR_6))

  VAR_15 = 0x08;
 else
  VAR_15 = 0x04;
 if (FUNC_3(VAR_14->hw.njet.base + VAR_3) <
  FUNC_3(VAR_14->hw.njet.base + VAR_4))

  VAR_15 = VAR_15 | 0x02;
 else
  VAR_15 = VAR_15 | 0x01;
 if (VAR_15 != VAR_14->hw.njet.last_is0)
 {
  if (FUNC_9(VAR_0, &VAR_14->HW_Flags)) {
   FUNC_7(&VAR_14->lock, VAR_18);
   return VAR_1;
  }
  VAR_14->hw.njet.irqstat0 = VAR_15;
  if ((VAR_14->hw.njet.irqstat0 & VAR_7) !=
   (VAR_14->hw.njet.last_is0 & VAR_7))

   FUNC_5(VAR_14);
  if ((VAR_14->hw.njet.irqstat0 & VAR_8) !=
   (VAR_14->hw.njet.last_is0 & VAR_8))

   FUNC_10(VAR_14);
  FUNC_8(VAR_0, &VAR_14->HW_Flags);
 }
 FUNC_7(&VAR_14->lock, VAR_18);
 return VAR_1;
}
