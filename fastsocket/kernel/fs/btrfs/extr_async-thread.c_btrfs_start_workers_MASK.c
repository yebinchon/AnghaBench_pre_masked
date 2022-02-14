
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_workers {int lock; int num_workers_starting; } ;


 int FUNC_0 (struct btrfs_workers*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct btrfs_workers *VAR_0)
{
 FUNC_1(&VAR_0->lock);
 VAR_0->num_workers_starting++;
 FUNC_2(&VAR_0->lock);
 return FUNC_0(VAR_0);
}
