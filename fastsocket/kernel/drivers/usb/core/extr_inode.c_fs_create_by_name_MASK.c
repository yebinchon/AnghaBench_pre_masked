
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct dentry {TYPE_3__* d_inode; } ;
typedef int mode_t ;
struct TYPE_7__ {int i_mutex; } ;
struct TYPE_6__ {TYPE_1__* mnt_sb; } ;
struct TYPE_5__ {struct dentry* s_root; } ;


 int VAR_0 ;
 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 struct dentry* FUNC_3 (char const*,struct dentry*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (TYPE_3__*,struct dentry*,int) ;
 int FUNC_8 (TYPE_3__*,struct dentry*,int) ;
 TYPE_2__* VAR_3 ;

__attribute__((used)) static int FUNC_9 (const char *VAR_4, mode_t VAR_5,
         struct dentry *VAR_6, struct dentry **VAR_7)
{
 int VAR_8 = 0;






 if (!VAR_6 ) {
  if (VAR_3 && VAR_3->mnt_sb) {
   VAR_6 = VAR_3->mnt_sb->s_root;
  }
 }

 if (!VAR_6) {
  FUNC_2("Ah! can not find a parent!");
  return -VAR_0;
 }

 *VAR_7 = ((void*)0);
 FUNC_4(&VAR_6->d_inode->i_mutex);
 *VAR_7 = FUNC_3(VAR_4, VAR_6, FUNC_6(VAR_4));
 if (!FUNC_0(*VAR_7)) {
  if ((VAR_5 & VAR_2) == VAR_1)
   VAR_8 = FUNC_8 (VAR_6->d_inode, *VAR_7, VAR_5);
  else
   VAR_8 = FUNC_7 (VAR_6->d_inode, *VAR_7, VAR_5);
 } else
  VAR_8 = FUNC_1(*VAR_7);
 FUNC_5(&VAR_6->d_inode->i_mutex);

 return VAR_8;
}
