
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pnfs_layoutdriver_type {struct pnfs_layout_hdr* (* alloc_layout_hdr ) (struct inode*,int ) ;} ;
struct pnfs_layout_hdr {int dummy; } ;
struct inode {int dummy; } ;
typedef int gfp_t ;
struct TYPE_2__ {struct pnfs_layoutdriver_type* pnfs_curr_ld; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 struct pnfs_layout_hdr* FUNC_1 (int,int ) ;
 struct pnfs_layout_hdr* FUNC_2 (struct inode*,int ) ;

__attribute__((used)) static struct pnfs_layout_hdr *
FUNC_3(struct inode *VAR_0, gfp_t VAR_1)
{
 struct pnfs_layoutdriver_type *VAR_2 = FUNC_0(VAR_0)->pnfs_curr_ld;
 return VAR_2->alloc_layout_hdr ? VAR_2->alloc_layout_hdr(VAR_0, VAR_1) :
  FUNC_1(sizeof(struct pnfs_layout_hdr), VAR_1);
}
