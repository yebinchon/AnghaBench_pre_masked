
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_3__ {int addr; scalar_t__ cip; } ;
struct TYPE_4__ {TYPE_1__ hfc; } ;
struct IsdnCardState {TYPE_2__ hw; } ;


 int FUNC_0 (int,int,int ,int *,int) ;

__attribute__((used)) static void
FUNC_1(struct IsdnCardState *VAR_0, u_char * VAR_1, int VAR_2)
{
 VAR_0->hw.hfc.cip = 0;
 FUNC_0(VAR_0->hw.hfc.addr | 1, VAR_0->hw.hfc.addr, 0, VAR_1, VAR_2);
}
