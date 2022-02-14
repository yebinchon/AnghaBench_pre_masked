
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int wait; int * counter; int * lock_map; } ;
struct super_block {TYPE_1__ s_writers; } ;
typedef scalar_t__ s64 ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 int FUNC_5 (int *,int,int ) ;
 int FUNC_6 (struct super_block*) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int) ;
 int VAR_2 ;

void FUNC_9(struct super_block *VAR_3, int VAR_4)
{
 s64 VAR_5;


 if (FUNC_8(!FUNC_6(VAR_3)))
  return;




 FUNC_4(&VAR_3->s_writers.lock_map[VAR_4-1], 0, 0, VAR_1);
 FUNC_5(&VAR_3->s_writers.lock_map[VAR_4-1], 1, VAR_1);

 do {
  FUNC_0(VAR_2);





  FUNC_3(&VAR_3->s_writers.wait, &VAR_2,
    VAR_0);

  VAR_5 = FUNC_2(&VAR_3->s_writers.counter[VAR_4-1]);
  if (VAR_5)
   FUNC_7();

  FUNC_1(&VAR_3->s_writers.wait, &VAR_2);
 } while (VAR_5);
}
