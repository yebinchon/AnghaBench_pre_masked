
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_3__ {int auxd; int isac; int auxa; } ;
struct TYPE_4__ {TYPE_1__ njet; } ;
struct IsdnCardState {TYPE_2__ hw; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int *,int) ;

void
FUNC_2(struct IsdnCardState *VAR_0, u_char *VAR_1, int VAR_2)
{
 VAR_0->hw.njet.auxd &= 0xfc;
 FUNC_0(VAR_0->hw.njet.auxa, VAR_0->hw.njet.auxd);
 FUNC_1(VAR_0->hw.njet.isac, VAR_1, VAR_2);
}
