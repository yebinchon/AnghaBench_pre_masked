
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct qstr {int len; scalar_t__ name; int hash; } ;
struct dentry {struct configfs_dirent* d_fsdata; } ;
struct configfs_dirent {int s_type; } ;
struct TYPE_3__ {scalar_t__ ci_name; scalar_t__ ci_namebuf; struct dentry* ci_dentry; } ;
struct config_group {TYPE_1__ cg_item; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*,struct dentry*) ;
 int FUNC_1 (struct dentry*,int *) ;
 struct dentry* FUNC_2 (struct dentry*,struct qstr*) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct config_group *VAR_2,
    struct config_group *VAR_3)
{
 int VAR_4;
 struct qstr VAR_5;
 struct configfs_dirent *VAR_6;

 struct dentry *VAR_7, *VAR_8 = VAR_2->cg_item.ci_dentry;

 if (!VAR_3->cg_item.ci_name)
  VAR_3->cg_item.ci_name = VAR_3->cg_item.ci_namebuf;
 VAR_5.name = VAR_3->cg_item.ci_name;
 VAR_5.len = FUNC_6(VAR_5.name);
 VAR_5.hash = FUNC_5(VAR_5.name, VAR_5.len);

 VAR_4 = -VAR_1;
 VAR_7 = FUNC_2(VAR_8, &VAR_5);
 if (VAR_7) {
  FUNC_1(VAR_7, ((void*)0));

  VAR_4 = FUNC_0(&VAR_2->cg_item,
         &VAR_3->cg_item, VAR_7);
  if (!VAR_4) {
   VAR_6 = VAR_7->d_fsdata;
   VAR_6->s_type |= VAR_0;
  } else {
   FUNC_3(VAR_7);
   FUNC_4(VAR_7);
  }
 }

 return VAR_4;
}
