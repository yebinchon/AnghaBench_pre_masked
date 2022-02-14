
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_char ;
struct TYPE_3__ {int cfg_reg; } ;
struct TYPE_4__ {TYPE_1__ diva; } ;
struct IsdnCardState {TYPE_2__ hw; } ;


 int FUNC_0 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct IsdnCardState *VAR_0, int VAR_1, u_char VAR_2, u_char VAR_3)
{
 FUNC_0(VAR_0->hw.diva.cfg_reg, VAR_2 + (VAR_1 ? 0x40 : 0), VAR_3);
}
