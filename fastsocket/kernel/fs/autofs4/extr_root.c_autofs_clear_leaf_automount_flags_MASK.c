
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct list_head {int * prev; int * next; } ;
struct TYPE_2__ {struct list_head d_child; } ;
struct dentry {int d_subdirs; TYPE_1__ d_u; struct dentry* d_parent; } ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 int VAR_0 ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct dentry *VAR_1)
{
 struct list_head *VAR_2;
 struct dentry *VAR_3;


 if (FUNC_0(VAR_1->d_parent))
  return;

 FUNC_1(VAR_1);

 VAR_3 = VAR_1->d_parent;

 if (FUNC_0(VAR_3->d_parent))
  return;
 VAR_2 = &VAR_1->d_u.d_child;
 FUNC_3(&VAR_0);

 if (VAR_2->next == &VAR_3->d_subdirs &&
     VAR_2->prev == &VAR_3->d_subdirs)
  FUNC_2(VAR_3);
 FUNC_4(&VAR_0);
 return;
}
