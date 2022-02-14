
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ cfg_reg; } ;
struct TYPE_4__ {TYPE_1__ ix1; } ;
struct IsdnCardState {TYPE_2__ hw; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__,int) ;

__attribute__((used)) static void
FUNC_2(struct IsdnCardState *VAR_2)
{
 int VAR_3;


 VAR_3 = 3 * (VAR_0 / 10) + 1;
 while (VAR_3--) {
  FUNC_1(VAR_2->hw.ix1.cfg_reg + VAR_1, 1);
  FUNC_0(1);
 }
 FUNC_1(VAR_2->hw.ix1.cfg_reg + VAR_1, 0);
}
