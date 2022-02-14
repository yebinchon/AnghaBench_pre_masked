
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_3__ {int isac_adr; int isac_ale; } ;
struct TYPE_4__ {TYPE_1__ ax; } ;
struct IsdnCardState {TYPE_2__ hw; } ;


 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct IsdnCardState *VAR_0, u_char VAR_1, u_char VAR_2)
{
 FUNC_0(VAR_0->hw.ax.isac_ale, VAR_0->hw.ax.isac_adr, VAR_1, VAR_2);
}
