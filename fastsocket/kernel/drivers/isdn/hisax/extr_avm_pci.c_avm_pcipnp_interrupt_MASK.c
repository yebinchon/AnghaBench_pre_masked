
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
typedef int u_char ;
struct TYPE_3__ {scalar_t__ cfg_reg; } ;
struct TYPE_4__ {TYPE_1__ avm; } ;
struct IsdnCardState {int lock; TYPE_2__ hw; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct IsdnCardState*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct IsdnCardState*,int ) ;
 int FUNC_2 (struct IsdnCardState*,int ,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct IsdnCardState*,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static irqreturn_t
FUNC_7(int VAR_7, void *VAR_8)
{
 struct IsdnCardState *VAR_9 = VAR_8;
 u_long VAR_10;
 u_char VAR_11;
 u_char VAR_12;

 FUNC_5(&VAR_9->lock, VAR_10);
 VAR_12 = FUNC_3(VAR_9->hw.avm.cfg_reg + 2);
 if ((VAR_12 & VAR_2) == VAR_2) {

  FUNC_6(&VAR_9->lock, VAR_10);
  return VAR_4;
 }
 if (!(VAR_12 & VAR_1)) {
  VAR_11 = FUNC_1(VAR_9, VAR_5);
  FUNC_4(VAR_9, VAR_11);
 }
 if (!(VAR_12 & VAR_0)) {
  FUNC_0(VAR_9);
 }
 FUNC_2(VAR_9, VAR_6, 0xFF);
 FUNC_2(VAR_9, VAR_6, 0x0);
 FUNC_6(&VAR_9->lock, VAR_10);
 return VAR_3;
}
