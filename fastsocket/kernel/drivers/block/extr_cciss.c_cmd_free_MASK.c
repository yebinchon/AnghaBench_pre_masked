
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nr_frees; scalar_t__ cmd_pool_bits; int * cmd_pool; } ;
typedef TYPE_1__ ctlr_info_t ;
typedef int CommandList_struct ;


 int VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(ctlr_info_t *VAR_1, CommandList_struct *VAR_2)
{
 int VAR_3;

 VAR_3 = VAR_2 - VAR_1->cmd_pool;
 FUNC_0(VAR_3 & (VAR_0 - 1),
    VAR_1->cmd_pool_bits + (VAR_3 / VAR_0));
 VAR_1->nr_frees++;
}
