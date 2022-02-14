
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * lock_map; int wait; int * counter; } ;
struct super_block {TYPE_1__ s_writers; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (struct super_block*) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct super_block *VAR_1, int VAR_2)
{

 if (FUNC_4(!FUNC_2(VAR_1)))
  return;

 FUNC_0(&VAR_1->s_writers.counter[VAR_2-1]);




 FUNC_3();
 if (FUNC_5(&VAR_1->s_writers.wait))
  FUNC_6(&VAR_1->s_writers.wait);
 FUNC_1(&VAR_1->s_writers.lock_map[VAR_2-1], 1, VAR_0);
}
