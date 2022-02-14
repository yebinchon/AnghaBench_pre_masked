
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct adapter {TYPE_2__* card; TYPE_1__* slic_regs; } ;
struct TYPE_4__ {int loadlevel_current; } ;
struct TYPE_3__ {int slic_intagg; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct adapter *VAR_1, u32 VAR_2)
{
 FUNC_0(&VAR_1->slic_regs->slic_intagg, VAR_2, VAR_0);
 VAR_1->card->loadlevel_current = VAR_2;
}
