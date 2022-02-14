
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_char ;
struct TYPE_3__ {scalar_t__ isac; scalar_t__ cfg_reg; } ;
struct TYPE_4__ {TYPE_1__ avm; } ;
struct IsdnCardState {TYPE_2__ hw; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static inline void
FUNC_1(struct IsdnCardState *VAR_2, int VAR_3, u_char VAR_4, u_char VAR_5)
{
 register u_char VAR_6 = VAR_3 ? VAR_1 : VAR_0;

 FUNC_0(VAR_6, VAR_2->hw.avm.cfg_reg + 4);
 FUNC_0(VAR_5, VAR_2->hw.avm.isac + VAR_4);
}
