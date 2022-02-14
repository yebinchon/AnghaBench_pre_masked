
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct file {int dummy; } ;
struct TYPE_6__ {int name; } ;
struct dentry {int d_inode; TYPE_3__ d_name; TYPE_2__* d_parent; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_5__ {TYPE_1__ d_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, struct dentry *VAR_3, int VAR_4)
{
 FUNC_0(VAR_0, "NFS: fsync dir(%s/%s) datasync %d\n",
   VAR_3->d_parent->d_name.name, VAR_3->d_name.name,
   VAR_4);

 FUNC_1(VAR_3->d_inode, VAR_1);
 return 0;
}
