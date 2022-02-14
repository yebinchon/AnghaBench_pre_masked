
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
typedef int u_char ;
struct TYPE_3__ {int * hscx; int isac; int cfg_reg; } ;
struct TYPE_4__ {TYPE_1__ avm; } ;
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
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct IsdnCardState*,char*,int) ;
 int FUNC_3 (struct IsdnCardState*,int) ;
 int FUNC_4 (struct IsdnCardState*,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int ,int ,int) ;

__attribute__((used)) static irqreturn_t
FUNC_9(int VAR_9, void *VAR_10)
{
 struct IsdnCardState *VAR_11 = VAR_10;
 u_char VAR_12, VAR_13;
 u_long VAR_14;

 FUNC_6(&VAR_11->lock, VAR_14);
 while (((VAR_13 = FUNC_0(VAR_11->hw.avm.cfg_reg)) & 0xf) != 0x7) {
  if (!(VAR_13 & VAR_2)) {
   FUNC_1(VAR_11->hw.avm.cfg_reg, 0x1E);
   VAR_13 = FUNC_0(VAR_11->hw.avm.cfg_reg);
  } else if (VAR_11->debug & VAR_8)
   FUNC_2(VAR_11, "avm IntStatus %x", VAR_13);
  if (!(VAR_13 & VAR_0)) {
   VAR_12 = FUNC_5(VAR_11->hw.avm.hscx[1], VAR_3);
   if (VAR_12)
    FUNC_3(VAR_11, VAR_12);
  }
  if (!(VAR_13 & VAR_1)) {
   VAR_12 = FUNC_5(VAR_11->hw.avm.isac, VAR_6);
   if (VAR_12)
    FUNC_4(VAR_11, VAR_12);
  }
 }
 FUNC_8(VAR_11->hw.avm.hscx[0], VAR_4, 0xFF);
 FUNC_8(VAR_11->hw.avm.hscx[1], VAR_4, 0xFF);
 FUNC_8(VAR_11->hw.avm.isac, VAR_7, 0xFF);
 FUNC_8(VAR_11->hw.avm.isac, VAR_7, 0x0);
 FUNC_8(VAR_11->hw.avm.hscx[0], VAR_4, 0x0);
 FUNC_8(VAR_11->hw.avm.hscx[1], VAR_4, 0x0);
 FUNC_7(&VAR_11->lock, VAR_14);
 return VAR_5;
}
