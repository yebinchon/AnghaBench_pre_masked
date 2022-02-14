
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_state; int i_list; int i_count; } ;
struct TYPE_2__ {int nr_unused; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_2 (int *,int *) ;

void FUNC_3(struct inode *VAR_4)
{
 if (FUNC_1(&VAR_4->i_count)) {
  FUNC_0(&VAR_4->i_count);
  return;
 }
 FUNC_0(&VAR_4->i_count);
 if (!(VAR_4->i_state & (VAR_0|VAR_1)))
  FUNC_2(&VAR_4->i_list, &VAR_2);
 VAR_3.nr_unused--;
}
