
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct qstr {int len; scalar_t__ name; int hash; } ;
struct dentry {int d_fsdata; } ;
struct TYPE_8__ {scalar_t__ ci_name; scalar_t__ ci_namebuf; } ;
struct config_group {TYPE_4__ cg_item; } ;
struct configfs_subsystem {struct config_group su_group; } ;
struct configfs_dirent {int s_element; } ;
struct TYPE_7__ {TYPE_2__* s_root; } ;
struct TYPE_6__ {TYPE_1__* d_inode; struct configfs_dirent* d_fsdata; } ;
struct TYPE_5__ {int i_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_4__*,struct dentry*) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 TYPE_3__* VAR_3 ;
 int FUNC_4 (struct dentry*,int *) ;
 struct dentry* FUNC_5 (TYPE_2__*,struct qstr*) ;
 int FUNC_6 (struct dentry*) ;
 int FUNC_7 (struct dentry*) ;
 int FUNC_8 (scalar_t__,int ) ;
 int FUNC_9 (int ,struct config_group*) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (struct config_group*) ;

int FUNC_17(struct configfs_subsystem *VAR_4)
{
 int VAR_5;
 struct config_group *VAR_6 = &VAR_4->su_group;
 struct qstr VAR_7;
 struct dentry *VAR_8;
 struct configfs_dirent *VAR_9;

 VAR_5 = FUNC_2();
 if (VAR_5)
  return VAR_5;

 if (!VAR_6->cg_item.ci_name)
  VAR_6->cg_item.ci_name = VAR_6->cg_item.ci_namebuf;

 VAR_9 = VAR_3->s_root->d_fsdata;
 FUNC_9(FUNC_15(VAR_9->s_element), VAR_6);

 FUNC_10(&VAR_3->s_root->d_inode->i_mutex,
   VAR_1);

 VAR_7.name = VAR_6->cg_item.ci_name;
 VAR_7.len = FUNC_14(VAR_7.name);
 VAR_7.hash = FUNC_8(VAR_7.name, VAR_7.len);

 VAR_5 = -VAR_0;
 VAR_8 = FUNC_5(VAR_3->s_root, &VAR_7);
 if (VAR_8) {
  FUNC_4(VAR_8, ((void*)0));

  VAR_5 = FUNC_0(VAR_9->s_element, &VAR_6->cg_item,
         VAR_8);
  if (VAR_5) {
   FUNC_6(VAR_8);
   FUNC_7(VAR_8);
  } else {
   FUNC_12(&VAR_2);
   FUNC_1(VAR_8->d_fsdata);
   FUNC_13(&VAR_2);
  }
 }

 FUNC_11(&VAR_3->s_root->d_inode->i_mutex);

 if (VAR_5) {
  FUNC_16(VAR_6);
  FUNC_3();
 }

 return VAR_5;
}
