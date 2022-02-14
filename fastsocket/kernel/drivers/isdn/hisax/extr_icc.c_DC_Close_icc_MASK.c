
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * mon_tx; int * mon_rx; } ;
struct TYPE_4__ {TYPE_1__ icc; } ;
struct IsdnCardState {TYPE_2__ dc; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct IsdnCardState *VAR_0) {
 FUNC_0(VAR_0->dc.icc.mon_rx);
 VAR_0->dc.icc.mon_rx = ((void*)0);
 FUNC_0(VAR_0->dc.icc.mon_tx);
 VAR_0->dc.icc.mon_tx = ((void*)0);
}
