
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ph_state; } ;
struct TYPE_4__ {TYPE_1__ amd7930; } ;
struct IsdnCardState {TYPE_2__ dc; } ;
typedef int BYTE ;


 int FUNC_0 (struct IsdnCardState*) ;
 int FUNC_1 (struct IsdnCardState*,int) ;

__attribute__((used)) static void
FUNC_2(struct IsdnCardState *VAR_0) {
        BYTE VAR_1 = FUNC_1(VAR_0, 0xA1);
        VAR_0->dc.amd7930.ph_state = (VAR_1 & 0x7) + 2;
        FUNC_0(VAR_0);
}
