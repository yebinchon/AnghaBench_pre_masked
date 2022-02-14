
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_char ;
struct TYPE_3__ {scalar_t__ cfg_reg; } ;
struct TYPE_4__ {TYPE_1__ avm; } ;
struct IsdnCardState {TYPE_2__ hw; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static inline void
FUNC_1(struct IsdnCardState *VAR_4, int VAR_5, u_char VAR_6, u_char VAR_7)
{
        VAR_6 -= 0x20;
 FUNC_0(VAR_4->hw.avm.cfg_reg+VAR_0,
   VAR_3+VAR_5*VAR_2+VAR_6);
 FUNC_0(VAR_4->hw.avm.cfg_reg+VAR_1, VAR_7);
}
