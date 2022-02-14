
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ base; } ;
struct TYPE_4__ {TYPE_1__ njet; } ;
struct IsdnCardState {TYPE_2__ hw; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct IsdnCardState *VAR_2, unsigned char VAR_3) {
        if (!VAR_3)
         FUNC_0(0x00, VAR_2->hw.njet.base+VAR_0);
        else
         FUNC_0(VAR_1, VAR_2->hw.njet.base+VAR_0);
}
