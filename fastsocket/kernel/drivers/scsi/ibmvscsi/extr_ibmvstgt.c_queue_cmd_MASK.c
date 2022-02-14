
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srp_target {int lock; int cmd_queue; } ;
struct iu_entry {int ilist; struct srp_target* target; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_3(struct iu_entry *VAR_0)
{
 struct srp_target *VAR_1 = VAR_0->target;
 unsigned long VAR_2;

 FUNC_1(&VAR_1->lock, VAR_2);
 FUNC_0(&VAR_0->ilist, &VAR_1->cmd_queue);
 FUNC_2(&VAR_1->lock, VAR_2);
}
