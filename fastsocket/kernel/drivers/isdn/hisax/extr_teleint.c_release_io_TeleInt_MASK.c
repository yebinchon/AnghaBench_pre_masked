
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ addr; int timer; } ;
struct TYPE_4__ {TYPE_1__ hfc; } ;
struct IsdnCardState {TYPE_2__ hw; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (struct IsdnCardState*) ;

__attribute__((used)) static void
FUNC_3(struct IsdnCardState *VAR_0)
{
 FUNC_0(&VAR_0->hw.hfc.timer);
 FUNC_2(VAR_0);
 if (VAR_0->hw.hfc.addr)
  FUNC_1(VAR_0->hw.hfc.addr, 2);
}
