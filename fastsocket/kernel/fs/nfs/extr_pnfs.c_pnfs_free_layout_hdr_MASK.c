
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pnfs_layoutdriver_type {void (* free_layout_hdr ) (struct pnfs_layout_hdr*) ;scalar_t__ alloc_layout_hdr; } ;
struct pnfs_layout_hdr {int plh_lc_cred; int plh_inode; } ;
struct TYPE_2__ {struct pnfs_layoutdriver_type* pnfs_curr_ld; } ;


 TYPE_1__* FUNC_0 (int ) ;
 void FUNC_1 (struct pnfs_layout_hdr*) ;
 int FUNC_2 (int ) ;
 void FUNC_3 (struct pnfs_layout_hdr*) ;

__attribute__((used)) static void
FUNC_4(struct pnfs_layout_hdr *VAR_0)
{
 struct pnfs_layoutdriver_type *VAR_1 = FUNC_0(VAR_0->plh_inode)->pnfs_curr_ld;
 FUNC_2(VAR_0->plh_lc_cred);
 return VAR_1->alloc_layout_hdr ? VAR_1->free_layout_hdr(VAR_0) : FUNC_1(VAR_0);
}
