
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_3__ {int isac; scalar_t__ cfg_reg; } ;
struct TYPE_4__ {TYPE_1__ avm; } ;
struct IsdnCardState {TYPE_2__ hw; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct IsdnCardState *VAR_1, u_char * VAR_2, int VAR_3)
{
 FUNC_1(VAR_0, VAR_1->hw.avm.cfg_reg + 4);
 FUNC_0(VAR_1->hw.avm.isac, VAR_2, VAR_3);
}
