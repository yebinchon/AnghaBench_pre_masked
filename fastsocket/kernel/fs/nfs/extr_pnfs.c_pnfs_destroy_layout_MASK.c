
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pnfs_layout_hdr {int plh_block_lgets; } ;
struct TYPE_2__ {int i_lock; } ;
struct nfs_inode {TYPE_1__ vfs_inode; struct pnfs_layout_hdr* layout; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct pnfs_layout_hdr*,int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;

void
FUNC_5(struct nfs_inode *VAR_1)
{
 struct pnfs_layout_hdr *VAR_2;
 FUNC_0(VAR_0);

 FUNC_3(&VAR_1->vfs_inode.i_lock);
 VAR_2 = VAR_1->layout;
 if (VAR_2) {
  VAR_2->plh_block_lgets++;
  FUNC_1(VAR_2, &VAR_0, ((void*)0));
 }
 FUNC_4(&VAR_1->vfs_inode.i_lock);
 FUNC_2(&VAR_0);
}
