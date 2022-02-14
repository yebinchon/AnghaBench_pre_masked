
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_root {int log_mutex; int log_writers; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct btrfs_root *VAR_1)
{
 int VAR_2 = -VAR_0;

 FUNC_1(&VAR_1->log_mutex);
 FUNC_0(&VAR_1->log_writers);
 FUNC_2(&VAR_1->log_mutex);
 return VAR_2;
}
