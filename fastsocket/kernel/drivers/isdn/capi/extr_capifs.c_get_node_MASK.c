
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {TYPE_1__* d_inode; } ;
struct TYPE_2__ {int i_mutex; } ;


 struct dentry* VAR_0 ;
 struct dentry* FUNC_0 (char*,struct dentry*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static struct dentry *FUNC_3(int VAR_1)
{
 char VAR_2[10];
 struct dentry *VAR_3 = VAR_0;
 FUNC_1(&VAR_3->d_inode->i_mutex);
 return FUNC_0(VAR_2, VAR_3, FUNC_2(VAR_2, "%d", VAR_1));
}
