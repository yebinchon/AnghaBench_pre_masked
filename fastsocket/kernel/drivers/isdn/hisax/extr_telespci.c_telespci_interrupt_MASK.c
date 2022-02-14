
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
typedef int u_char ;
struct TYPE_3__ {scalar_t__ membase; } ;
struct TYPE_4__ {TYPE_1__ teles0; } ;
struct IsdnCardState {int lock; TYPE_2__ hw; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct IsdnCardState*,int) ;
 int FUNC_1 (struct IsdnCardState*,int) ;
 int FUNC_2 (scalar_t__,int,int ) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (scalar_t__,int,int ,int) ;
 int FUNC_7 (scalar_t__,int ,int) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t
FUNC_9(int VAR_6, void *VAR_7)
{
 struct IsdnCardState *VAR_8 = VAR_7;
 u_char VAR_9, VAR_10;
 u_long VAR_11;

 FUNC_4(&VAR_8->lock, VAR_11);
 VAR_9 = FUNC_2(VAR_8->hw.teles0.membase, 1, VAR_0);
 if (VAR_9)
  FUNC_0(VAR_8, VAR_9);
 VAR_10 = FUNC_3(VAR_8->hw.teles0.membase, VAR_4);
 if ((VAR_9 | VAR_10) == 0) {
  FUNC_5(&VAR_8->lock, VAR_11);
  return VAR_3;
 }
 if (VAR_10)
  FUNC_1(VAR_8, VAR_10);

 FUNC_8(0x70000000, VAR_8->hw.teles0.membase + 0x3C);

 FUNC_6(VAR_8->hw.teles0.membase, 0, VAR_1, 0xFF);
 FUNC_6(VAR_8->hw.teles0.membase, 1, VAR_1, 0xFF);
 FUNC_7(VAR_8->hw.teles0.membase, VAR_5, 0xFF);
 FUNC_7(VAR_8->hw.teles0.membase, VAR_5, 0x0);
 FUNC_6(VAR_8->hw.teles0.membase, 0, VAR_1, 0x0);
 FUNC_6(VAR_8->hw.teles0.membase, 1, VAR_1, 0x0);
 FUNC_5(&VAR_8->lock, VAR_11);
 return VAR_2;
}
