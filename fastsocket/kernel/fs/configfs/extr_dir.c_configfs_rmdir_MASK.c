
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct mutex {int dummy; } ;
struct module {int dummy; } ;
struct inode {int dummy; } ;
struct dentry {scalar_t__ d_parent; struct configfs_dirent* d_fsdata; } ;
struct TYPE_9__ {TYPE_1__* ci_type; } ;
struct TYPE_10__ {TYPE_2__ cg_item; } ;
struct configfs_subsystem {struct mutex su_mutex; TYPE_3__ su_group; } ;
struct configfs_dirent {int s_type; scalar_t__ s_dependent_count; } ;
struct config_item {TYPE_4__* ci_type; } ;
struct TYPE_13__ {scalar_t__ s_root; } ;
struct TYPE_12__ {struct configfs_subsystem* cg_subsys; } ;
struct TYPE_11__ {struct module* ct_owner; } ;
struct TYPE_8__ {struct module* ct_owner; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct config_item*,struct config_item*) ;
 int FUNC_2 (struct config_item*,struct config_item*) ;
 int FUNC_3 (struct config_item*) ;
 int FUNC_4 (struct config_item*) ;
 int FUNC_5 (struct config_item*) ;
 int FUNC_6 (struct dentry*,struct mutex**) ;
 int FUNC_7 (struct dentry*) ;
 int VAR_6 ;
 struct config_item* FUNC_8 (struct dentry*) ;
 TYPE_7__* VAR_7 ;
 struct mutex VAR_8 ;
 int FUNC_9 (struct module*) ;
 int FUNC_10 (struct mutex*) ;
 int FUNC_11 (struct mutex*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 TYPE_5__* FUNC_14 (struct config_item*) ;
 int FUNC_15 (TYPE_5__*) ;
 int FUNC_16 (struct config_item*) ;

__attribute__((used)) static int FUNC_17(struct inode *VAR_9, struct dentry *VAR_10)
{
 struct config_item *VAR_11;
 struct config_item *VAR_12;
 struct configfs_subsystem *VAR_13;
 struct configfs_dirent *VAR_14;
 struct module *VAR_15 = ((void*)0), *VAR_16 = ((void*)0);
 int VAR_17;

 if (VAR_10->d_parent == VAR_7->s_root)
  return -VAR_5;

 VAR_14 = VAR_10->d_fsdata;
 if (VAR_14->s_type & VAR_0)
  return -VAR_5;


 VAR_11 = FUNC_8(VAR_10->d_parent);
 VAR_13 = FUNC_14(VAR_11)->cg_subsys;
 FUNC_0(!VAR_13);

 if (!VAR_11->ci_type) {
  FUNC_3(VAR_11);
  return -VAR_4;
 }


 FUNC_0(!VAR_13->su_group.cg_item.ci_type);
 VAR_15 = VAR_13->su_group.cg_item.ci_type->ct_owner;





 do {
  struct mutex *VAR_18;

  FUNC_10(&VAR_8);
  FUNC_12(&VAR_6);





  VAR_17 = VAR_14->s_dependent_count ? -VAR_3 : 0;
  if (!VAR_17) {
   VAR_17 = FUNC_6(VAR_10, &VAR_18);
   if (VAR_17)
    FUNC_7(VAR_10);
  }
  FUNC_13(&VAR_6);
  FUNC_11(&VAR_8);

  if (VAR_17) {
   if (VAR_17 != -VAR_2) {
    FUNC_3(VAR_11);
    return VAR_17;
   }


   FUNC_10(VAR_18);
   FUNC_11(VAR_18);
  }
 } while (VAR_17 == -VAR_2);


 VAR_12 = FUNC_8(VAR_10);


 FUNC_3(VAR_11);

 if (VAR_12->ci_type)
  VAR_16 = VAR_12->ci_type->ct_owner;

 if (VAR_14->s_type & VAR_1) {
  FUNC_4(VAR_12);

  FUNC_10(&VAR_13->su_mutex);
  FUNC_1(VAR_11, VAR_12);
  FUNC_15(FUNC_14(VAR_12));
 } else {
  FUNC_5(VAR_12);

  FUNC_10(&VAR_13->su_mutex);
  FUNC_1(VAR_11, VAR_12);
  FUNC_16(VAR_12);
 }

 FUNC_2(VAR_11, VAR_12);
 FUNC_11(&VAR_13->su_mutex);


 FUNC_3(VAR_12);

 FUNC_9(VAR_16);
 FUNC_9(VAR_15);

 return 0;
}
