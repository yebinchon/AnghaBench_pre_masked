
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kstatfs {int dummy; } ;
struct dentry {TYPE_2__* d_sb; } ;
struct TYPE_4__ {TYPE_1__* s_op; } ;
struct TYPE_3__ {int (* statfs ) (struct dentry*,struct kstatfs*) ;} ;


 int VAR_0 ;
 struct dentry* FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*,struct kstatfs*) ;

__attribute__((used)) static int FUNC_2(struct dentry *VAR_1, struct kstatfs *VAR_2)
{
 struct dentry *VAR_3 = FUNC_0(VAR_1);

 if (!VAR_3->d_sb->s_op->statfs)
  return -VAR_0;
 return VAR_3->d_sb->s_op->statfs(VAR_3, VAR_2);
}
