
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dentry {TYPE_1__* d_inode; } ;
struct TYPE_5__ {struct dentry* dentry; int list; } ;
struct TYPE_4__ {int i_nlink; } ;
typedef TYPE_2__ Node ;


 int VAR_0 ;
 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(Node *VAR_3)
{
 struct dentry *VAR_4;

 FUNC_4(&VAR_1);
 VAR_4 = VAR_3->dentry;
 if (VAR_4) {
  FUNC_2(&VAR_3->list);
  VAR_3->dentry = ((void*)0);
 }
 FUNC_5(&VAR_1);

 if (VAR_4) {
  VAR_4->d_inode->i_nlink--;
  FUNC_0(VAR_4);
  FUNC_1(VAR_4);
  FUNC_3(&VAR_0, &VAR_2);
 }
}
