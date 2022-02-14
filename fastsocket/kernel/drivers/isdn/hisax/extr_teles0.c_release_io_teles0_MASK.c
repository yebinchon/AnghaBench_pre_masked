
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int phymem; int membase; scalar_t__ cfg_reg; } ;
struct TYPE_4__ {TYPE_1__ teles0; } ;
struct IsdnCardState {TYPE_2__ hw; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (scalar_t__,int) ;

__attribute__((used)) static void
FUNC_3(struct IsdnCardState *VAR_1)
{
 if (VAR_1->hw.teles0.cfg_reg)
  FUNC_2(VAR_1->hw.teles0.cfg_reg, 8);
 FUNC_0(VAR_1->hw.teles0.membase);
 FUNC_1(VAR_1->hw.teles0.phymem, VAR_0);
}
