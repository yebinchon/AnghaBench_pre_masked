
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnfs_layout_segment {struct pnfs_layout_hdr* pls_layout; int pls_flags; int pls_refcount; int pls_lc_list; int pls_list; } ;
struct pnfs_layout_hdr {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(struct pnfs_layout_hdr *VAR_1, struct pnfs_layout_segment *VAR_2)
{
 FUNC_0(&VAR_2->pls_list);
 FUNC_0(&VAR_2->pls_lc_list);
 FUNC_1(&VAR_2->pls_refcount, 1);
 FUNC_3();
 FUNC_2(VAR_0, &VAR_2->pls_flags);
 VAR_2->pls_layout = VAR_1;
}
