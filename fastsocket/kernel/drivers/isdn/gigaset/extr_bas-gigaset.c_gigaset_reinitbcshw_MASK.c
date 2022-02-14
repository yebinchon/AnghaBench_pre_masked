
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct bas_bc_state* bas; } ;
struct bc_state {TYPE_1__ hw; } ;
struct bas_bc_state {int loststatus; int isoinlock; int isooutlock; scalar_t__ numsub; int corrbytes; scalar_t__ running; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct bc_state *VAR_1)
{
 struct bas_bc_state *VAR_2 = VAR_1->hw.bas;

 VAR_1->hw.bas->running = 0;
 FUNC_0(&VAR_1->hw.bas->corrbytes, 0);
 VAR_1->hw.bas->numsub = 0;
 FUNC_1(&VAR_2->isooutlock);
 FUNC_1(&VAR_2->isoinlock);
 VAR_2->loststatus = -VAR_0;
}
