
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pnfs_layout_hdr {int plh_lc_cred; struct inode* plh_inode; int plh_bulk_recall; int plh_segs; int plh_layouts; int plh_refcount; } ;
struct nfs_open_context {TYPE_2__* state; } ;
struct inode {int dummy; } ;
typedef int gfp_t ;
struct TYPE_4__ {TYPE_1__* owner; } ;
struct TYPE_3__ {int so_cred; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ) ;
 struct pnfs_layout_hdr* FUNC_3 (struct inode*,int ) ;

__attribute__((used)) static struct pnfs_layout_hdr *
FUNC_4(struct inode *VAR_0,
        struct nfs_open_context *VAR_1,
        gfp_t VAR_2)
{
 struct pnfs_layout_hdr *VAR_3;

 VAR_3 = FUNC_3(VAR_0, VAR_2);
 if (!VAR_3)
  return ((void*)0);
 FUNC_1(&VAR_3->plh_refcount, 1);
 FUNC_0(&VAR_3->plh_layouts);
 FUNC_0(&VAR_3->plh_segs);
 FUNC_0(&VAR_3->plh_bulk_recall);
 VAR_3->plh_inode = VAR_0;
 VAR_3->plh_lc_cred = FUNC_2(VAR_1->state->owner->so_cred);
 return VAR_3;
}
