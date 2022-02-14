
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {TYPE_1__* d_inode; } ;
struct config_item {int dummy; } ;
struct TYPE_2__ {int i_mutex; int i_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct config_item*,struct dentry*) ;
 int FUNC_1 (struct config_item*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct config_item*) ;

__attribute__((used)) static int FUNC_6(struct config_item *VAR_1,
    struct config_item *VAR_2,
    struct dentry *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_3);
 if (!VAR_4) {
  VAR_4 = FUNC_5(VAR_2);
  if (VAR_4) {





   FUNC_3(&VAR_3->d_inode->i_mutex);
   FUNC_1(VAR_2);
   VAR_3->d_inode->i_flags |= VAR_0;
   FUNC_4(&VAR_3->d_inode->i_mutex);
   FUNC_2(VAR_3);
  }
 }

 return VAR_4;
}
