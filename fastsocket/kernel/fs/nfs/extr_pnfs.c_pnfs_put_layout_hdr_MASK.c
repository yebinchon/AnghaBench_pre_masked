
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnfs_layout_hdr {int plh_refcount; struct inode* plh_inode; } ;
struct inode {int i_lock; } ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (struct pnfs_layout_hdr*) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct pnfs_layout_hdr *VAR_0)
{
 struct inode *VAR_1 = VAR_0->plh_inode;

 if (FUNC_0(&VAR_0->plh_refcount, &VAR_1->i_lock)) {
  FUNC_1(VAR_0);
  FUNC_2(&VAR_1->i_lock);
 }
}
