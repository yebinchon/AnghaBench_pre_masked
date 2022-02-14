
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dentry {scalar_t__ d_time; int d_lock; TYPE_2__* d_parent; } ;
struct TYPE_4__ {TYPE_1__* d_inode; } ;
struct TYPE_3__ {scalar_t__ i_version; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct dentry *VAR_0)
{
 int VAR_1 = 1;
 FUNC_0(&VAR_0->d_lock);
 if (VAR_0->d_time != VAR_0->d_parent->d_inode->i_version)
  VAR_1 = 0;
 FUNC_1(&VAR_0->d_lock);
 return VAR_1;
}
