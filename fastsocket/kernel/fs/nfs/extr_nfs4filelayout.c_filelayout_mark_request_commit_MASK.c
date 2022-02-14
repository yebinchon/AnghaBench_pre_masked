
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnfs_layout_segment {int dummy; } ;
struct nfs_page {int dummy; } ;
struct nfs_commit_info {int dummy; } ;
struct list_head {int dummy; } ;


 struct list_head* FUNC_0 (struct nfs_page*,struct pnfs_layout_segment*,struct nfs_commit_info*) ;
 int FUNC_1 (struct nfs_page*,struct list_head*,struct nfs_commit_info*) ;

__attribute__((used)) static void
FUNC_2(struct nfs_page *VAR_0,
          struct pnfs_layout_segment *VAR_1,
          struct nfs_commit_info *VAR_2)
{
 struct list_head *VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_1(VAR_0, VAR_3, VAR_2);
}
