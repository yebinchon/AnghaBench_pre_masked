
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int l1hw; } ;
struct PStack {TYPE_1__ l1; } ;
struct IsdnCardState {int debug; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct IsdnCardState*,char*) ;

__attribute__((used)) static void
FUNC_1(struct PStack *VAR_2, struct IsdnCardState *VAR_3)
{

        if (VAR_3->debug & VAR_1)
  FUNC_0(VAR_3, "Amd7930: setstack called");

        VAR_2->l1.l1hw = VAR_0;
}
