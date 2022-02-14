
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pnfs_layout_segment {TYPE_1__* pls_layout; int pls_list; int pls_flags; } ;
struct inode {int dummy; } ;
struct TYPE_4__ {int roc_rpcwaitq; } ;
struct TYPE_3__ {int plh_flags; int plh_segs; struct inode* plh_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static void
FUNC_8(struct pnfs_layout_segment *VAR_2)
{
 struct inode *VAR_3 = VAR_2->pls_layout->plh_inode;

 FUNC_1(FUNC_7(VAR_1, &VAR_2->pls_flags));
 FUNC_2(&VAR_2->pls_list);
 if (FUNC_3(&VAR_2->pls_layout->plh_segs)) {
  FUNC_6(VAR_0, &VAR_2->pls_layout->plh_flags);

  FUNC_4(VAR_2->pls_layout);
 }
 FUNC_5(&FUNC_0(VAR_3)->roc_rpcwaitq);
}
