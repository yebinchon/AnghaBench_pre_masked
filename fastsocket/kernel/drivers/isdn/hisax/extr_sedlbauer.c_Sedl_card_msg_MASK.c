
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_3__ {int reset_off; int cfg_reg; int hscx; int adr; int chip; int bus; int isac; } ;
struct TYPE_4__ {TYPE_1__ sedl; } ;
struct IsdnCardState {int lock; TYPE_2__ hw; int subtyp; int (* writeisac ) (struct IsdnCardState*,int ,int) ;} ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct IsdnCardState*) ;
 int FUNC_2 (struct IsdnCardState*,int) ;
 int FUNC_3 (struct IsdnCardState*) ;
 int FUNC_4 (struct IsdnCardState*) ;
 int FUNC_5 (struct IsdnCardState*) ;
 int FUNC_6 (struct IsdnCardState*) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (struct IsdnCardState*,int ,int) ;
 int FUNC_10 (struct IsdnCardState*,int ,int) ;
 int FUNC_11 (int ,int ,int ,int) ;

__attribute__((used)) static int
FUNC_12(struct IsdnCardState *VAR_8, int VAR_9, void *VAR_10)
{
 u_long VAR_11;

 switch (VAR_9) {
  case 131:
   FUNC_7(&VAR_8->lock, VAR_11);
   FUNC_6(VAR_8);
   FUNC_8(&VAR_8->lock, VAR_11);
   return(0);
  case 132:
   if (VAR_8->hw.sedl.bus == VAR_3)

    FUNC_0(VAR_8->hw.sedl.cfg_reg+ 5, 0);
   if (VAR_8->hw.sedl.chip == VAR_4) {
    FUNC_7(&VAR_8->lock, VAR_11);
    FUNC_11(VAR_8->hw.sedl.adr, VAR_8->hw.sedl.hscx,
     VAR_2, 0);
    FUNC_11(VAR_8->hw.sedl.adr, VAR_8->hw.sedl.isac,
     VAR_1, 0xFF);
    FUNC_6(VAR_8);
    FUNC_11(VAR_8->hw.sedl.adr, VAR_8->hw.sedl.hscx,
     VAR_2, 0);
    FUNC_11(VAR_8->hw.sedl.adr, VAR_8->hw.sedl.isac,
     VAR_1, 0xFF);
    FUNC_8(&VAR_8->lock, VAR_11);
   }
   FUNC_5(VAR_8);
   return(0);
  case 133:
   FUNC_7(&VAR_8->lock, VAR_11);
   if (VAR_8->hw.sedl.bus == VAR_3)

    FUNC_0(VAR_8->hw.sedl.cfg_reg+ 5, 0x02);
   FUNC_6(VAR_8);
   if (VAR_8->hw.sedl.chip == VAR_4) {
    FUNC_1(VAR_8);
    FUNC_11(VAR_8->hw.sedl.adr, VAR_8->hw.sedl.hscx,
     VAR_2, 0);
    FUNC_3(VAR_8);
    FUNC_4(VAR_8);

    VAR_8->writeisac(VAR_8, VAR_1, 0);

    VAR_8->writeisac(VAR_8, VAR_0, 0x41);
   } else {
    FUNC_2(VAR_8, 3);
   }
   FUNC_8(&VAR_8->lock, VAR_11);
   return(0);
  case 130:
   return(0);
  case 129:
   if (VAR_8->subtyp != VAR_7)
    return(0);
   FUNC_7(&VAR_8->lock, VAR_11);
   if ((long) VAR_10)
    VAR_8->hw.sedl.reset_off &= ~VAR_6;
   else
    VAR_8->hw.sedl.reset_off &= ~VAR_5;
   FUNC_0(VAR_8->hw.sedl.cfg_reg +3, VAR_8->hw.sedl.reset_off);
   FUNC_8(&VAR_8->lock, VAR_11);
   break;
  case 128:
   if (VAR_8->subtyp != VAR_7)
    return(0);
   FUNC_7(&VAR_8->lock, VAR_11);
   if ((long) VAR_10)
    VAR_8->hw.sedl.reset_off |= VAR_6;
   else
    VAR_8->hw.sedl.reset_off |= VAR_5;
   FUNC_0(VAR_8->hw.sedl.cfg_reg +3, VAR_8->hw.sedl.reset_off);
   FUNC_8(&VAR_8->lock, VAR_11);
   break;
 }
 return(0);
}
