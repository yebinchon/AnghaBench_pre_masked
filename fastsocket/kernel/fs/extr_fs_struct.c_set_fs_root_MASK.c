
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {scalar_t__ dentry; } ;
struct fs_struct {int lock; struct path root; } ;


 int FUNC_0 (struct path*) ;
 int FUNC_1 (struct path*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct fs_struct *VAR_0, struct path *VAR_1)
{
 struct path VAR_2;

 FUNC_2(&VAR_0->lock);
 VAR_2 = VAR_0->root;
 VAR_0->root = *VAR_1;
 FUNC_0(VAR_1);
 FUNC_3(&VAR_0->lock);
 if (VAR_2.dentry)
  FUNC_1(&VAR_2);
}
