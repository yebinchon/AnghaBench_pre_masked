
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * counter; int wait_unfrozen; int wait; int * lock_map; } ;
struct super_block {TYPE_1__ s_writers; } ;
struct file_system_type {int fs_flags; int * s_writers_key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int * VAR_2 ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct super_block *VAR_3, struct file_system_type *VAR_4)
{
 int VAR_5;
 int VAR_6;


 if (FUNC_4(!(VAR_4->fs_flags & VAR_0)))
  return 0;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  VAR_5 = FUNC_3(&VAR_3->s_writers.counter[VAR_6], 0);
  if (VAR_5 < 0)
   goto err_out;
  FUNC_1(&VAR_3->s_writers.lock_map[VAR_6], VAR_2[VAR_6],
     &VAR_4->s_writers_key[VAR_6], 0);
 }
 FUNC_0(&VAR_3->s_writers.wait);
 FUNC_0(&VAR_3->s_writers.wait_unfrozen);
 return 0;
err_out:
 while (--VAR_6 >= 0)
  FUNC_2(&VAR_3->s_writers.counter[VAR_6]);
 return VAR_5;
}
