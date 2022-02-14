
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_long ;
typedef scalar_t__ u_char ;
struct TYPE_4__ {int isac_adr; int isac_ale; int jade_adr; int jade_ale; scalar_t__ base; } ;
struct TYPE_5__ {TYPE_1__ ax; } ;
struct IsdnCardState {int lock; TYPE_2__ hw; } ;
typedef int irqreturn_t ;
struct TYPE_6__ {int i20IntStatus; int i20IntCtrl; } ;
typedef TYPE_3__ I20_REGISTER_FILE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct IsdnCardState*,scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct IsdnCardState*,scalar_t__,int) ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static irqreturn_t
FUNC_5(int VAR_5, void *VAR_6)
{
 struct IsdnCardState *VAR_7 = VAR_6;
 u_char VAR_8 = 0;
 u_long VAR_9;
 I20_REGISTER_FILE *VAR_10;

 FUNC_3(&VAR_7->lock, VAR_9);
 VAR_10 = (I20_REGISTER_FILE *) (VAR_7->hw.ax.base);


 if (VAR_10->i20IntStatus & VAR_3) {

  VAR_10->i20IntStatus = VAR_3;

  VAR_10->i20IntCtrl &= ~VAR_3;

  VAR_8 = FUNC_2(VAR_7->hw.ax.jade_ale, VAR_7->hw.ax.jade_adr, VAR_4 + 0x80);
  if (VAR_8) {
   FUNC_1(VAR_7, VAR_8, 0);
  }

  VAR_8 = FUNC_2(VAR_7->hw.ax.jade_ale, VAR_7->hw.ax.jade_adr, VAR_4 + 0xC0);
  if (VAR_8) {
   FUNC_1(VAR_7, VAR_8, 1);
  }

  VAR_8 = FUNC_2(VAR_7->hw.ax.isac_ale, VAR_7->hw.ax.isac_adr, VAR_2);
  if (VAR_8) {
   FUNC_0(VAR_7, VAR_8);
  }

  VAR_10->i20IntCtrl |= VAR_3;
  FUNC_4(&VAR_7->lock, VAR_9);
  return VAR_0;
 } else {
  FUNC_4(&VAR_7->lock, VAR_9);
  return VAR_1;
 }
}
