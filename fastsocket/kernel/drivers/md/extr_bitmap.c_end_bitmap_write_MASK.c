
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_head {struct bitmap* b_private; } ;
struct bitmap {int write_wait; int pending_writes; int flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct buffer_head *VAR_1, int VAR_2)
{
 struct bitmap *VAR_3 = VAR_1->b_private;

 if (!VAR_2)
  FUNC_1(VAR_0, &VAR_3->flags);
 if (FUNC_0(&VAR_3->pending_writes))
  FUNC_2(&VAR_3->write_wait);
}
