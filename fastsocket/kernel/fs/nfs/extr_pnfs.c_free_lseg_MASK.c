
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pnfs_layout_segment {TYPE_1__* pls_layout; } ;
struct inode {int dummy; } ;
struct TYPE_8__ {int layout; } ;
struct TYPE_7__ {TYPE_2__* pnfs_curr_ld; } ;
struct TYPE_6__ {int (* free_lseg ) (struct pnfs_layout_segment*) ;} ;
struct TYPE_5__ {struct inode* plh_inode; } ;


 TYPE_4__* FUNC_0 (struct inode*) ;
 TYPE_3__* FUNC_1 (struct inode*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pnfs_layout_segment*) ;

__attribute__((used)) static void FUNC_4(struct pnfs_layout_segment *VAR_0)
{
 struct inode *VAR_1 = VAR_0->pls_layout->plh_inode;

 FUNC_1(VAR_1)->pnfs_curr_ld->free_lseg(VAR_0);

 FUNC_2(FUNC_0(VAR_1)->layout);
}
