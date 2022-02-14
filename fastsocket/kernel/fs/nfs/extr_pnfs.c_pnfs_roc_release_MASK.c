
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pnfs_layout_hdr {int plh_block_lgets; } ;
struct inode {int i_lock; } ;
struct TYPE_2__ {struct pnfs_layout_hdr* layout; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct pnfs_layout_hdr*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct inode *VAR_0)
{
 struct pnfs_layout_hdr *VAR_1;

 FUNC_2(&VAR_0->i_lock);
 VAR_1 = FUNC_0(VAR_0)->layout;
 VAR_1->plh_block_lgets--;
 FUNC_1(VAR_1);
 FUNC_3(&VAR_0->i_lock);
}
