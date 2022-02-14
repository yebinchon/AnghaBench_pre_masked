
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct inode {int i_count; } ;
struct TYPE_7__ {int name; } ;
struct dentry {TYPE_3__ d_name; TYPE_2__* d_parent; struct inode* d_inode; } ;
struct TYPE_8__ {int (* link ) (struct inode*,struct inode*,TYPE_3__*) ;} ;
struct TYPE_5__ {int name; } ;
struct TYPE_6__ {TYPE_1__ d_name; } ;


 TYPE_4__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct dentry*,struct inode*) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (int ,char*,int ,int ,int ,int ) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*,struct inode*,TYPE_3__*) ;

__attribute__((used)) static int
FUNC_7(struct dentry *VAR_1, struct inode *VAR_2, struct dentry *VAR_3)
{
 struct inode *VAR_4 = VAR_1->d_inode;
 int VAR_5;

 FUNC_4(VAR_0, "NFS: link(%s/%s -> %s/%s)\n",
  VAR_1->d_parent->d_name.name, VAR_1->d_name.name,
  VAR_3->d_parent->d_name.name, VAR_3->d_name.name);

 FUNC_5(VAR_4);

 FUNC_3(VAR_3);
 VAR_5 = FUNC_0(VAR_2)->link(VAR_4, VAR_2, &VAR_3->d_name);
 if (VAR_5 == 0) {
  FUNC_1(&VAR_4->i_count);
  FUNC_2(VAR_3, VAR_4);
 }
 return VAR_5;
}
