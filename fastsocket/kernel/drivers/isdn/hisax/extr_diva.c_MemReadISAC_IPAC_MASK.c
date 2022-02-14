
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


 scalar_t__ FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static u_char
FUNC_1(struct IsdnCardState *VAR_0, u_char VAR_1)
{
 return (FUNC_0(VAR_0->hw.diva.cfg_reg, VAR_1+0x80));
}
