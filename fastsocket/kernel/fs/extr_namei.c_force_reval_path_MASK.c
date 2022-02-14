
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct path {struct dentry* dentry; } ;
struct nameidata {int dummy; } ;
struct dentry {TYPE_3__* d_op; TYPE_2__* d_sb; } ;
struct TYPE_6__ {int (* d_revalidate ) (struct dentry*,struct nameidata*) ;} ;
struct TYPE_5__ {TYPE_1__* s_type; } ;
struct TYPE_4__ {int fs_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*,struct nameidata*) ;

__attribute__((used)) static int
FUNC_2(struct path *VAR_2, struct nameidata *VAR_3)
{
 int VAR_4;
 struct dentry *VAR_5 = VAR_2->dentry;






 if (!(VAR_5->d_sb->s_type->fs_flags & VAR_1))
  return 0;

 VAR_4 = VAR_5->d_op->d_revalidate(VAR_5, VAR_3);
 if (VAR_4 > 0)
  return 0;

 if (!VAR_4) {
  FUNC_0(VAR_5);
  VAR_4 = -VAR_0;
 }
 return VAR_4;
}
