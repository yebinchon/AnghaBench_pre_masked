
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qstr {int dummy; } ;
struct dentry {TYPE_1__* d_inode; } ;
struct TYPE_2__ {int i_mutex; } ;


 struct dentry* FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 struct dentry* FUNC_2 (struct qstr*,struct dentry*,int *) ;
 int FUNC_3 (char const*,struct qstr*,struct dentry*,int) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (int *) ;

struct dentry *FUNC_6(const char *VAR_1, struct dentry *VAR_2, int VAR_3)
{
 int VAR_4;
 struct qstr VAR_5;

 FUNC_1(!FUNC_5(&VAR_2->d_inode->i_mutex));

 VAR_4 = FUNC_3(VAR_1, &VAR_5, VAR_2, VAR_3);
 if (VAR_4)
  return FUNC_0(VAR_4);

 VAR_4 = FUNC_4(VAR_2->d_inode, VAR_0);
 if (VAR_4)
  return FUNC_0(VAR_4);
 return FUNC_2(&VAR_5, VAR_2, ((void*)0));
}
