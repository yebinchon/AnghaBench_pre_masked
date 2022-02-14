
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctlr_info {int lock; scalar_t__ cmd_pool_bits; struct CommandList* cmd_pool; } ;
struct CommandList {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct ctlr_info *VAR_1, struct CommandList *VAR_2)
{
 int VAR_3;
 unsigned long VAR_4;

 VAR_3 = VAR_2 - VAR_1->cmd_pool;
 FUNC_1(&VAR_1->lock, VAR_4);
 FUNC_0(VAR_3 & (VAR_0 - 1),
    VAR_1->cmd_pool_bits + (VAR_3 / VAR_0));
 FUNC_2(&VAR_1->lock, VAR_4);
}
