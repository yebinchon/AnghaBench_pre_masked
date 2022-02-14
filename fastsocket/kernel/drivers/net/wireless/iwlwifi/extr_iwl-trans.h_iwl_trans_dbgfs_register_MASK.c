
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_trans {TYPE_1__* ops; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int (* dbgfs_register ) (struct iwl_trans*,struct dentry*) ;} ;


 int FUNC_0 (struct iwl_trans*,struct dentry*) ;

__attribute__((used)) static inline int FUNC_1(struct iwl_trans *VAR_0,
        struct dentry *VAR_1)
{
 return VAR_0->ops->dbgfs_register(VAR_0, VAR_1);
}
