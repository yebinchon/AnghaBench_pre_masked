
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ base; } ;
struct TYPE_5__ {TYPE_1__ ax; } ;
struct IsdnCardState {scalar_t__ typ; TYPE_2__ hw; } ;
struct TYPE_6__ {int i20IntCtrl; } ;
typedef TYPE_3__ I20_REGISTER_FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_0(struct IsdnCardState *VAR_3, unsigned VAR_4)
{
 if (VAR_3->typ == VAR_0) {
  I20_REGISTER_FILE *VAR_5 = (I20_REGISTER_FILE *) (VAR_3->hw.ax.base);
  if (VAR_4)
   VAR_5->i20IntCtrl |= (VAR_1 | VAR_2);
  else

   VAR_5->i20IntCtrl &= ~(VAR_1 | VAR_2);
 }
}
