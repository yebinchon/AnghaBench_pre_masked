
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_pageio_descriptor {int * pg_lseg; int pg_dreq; int pg_inode; } ;
struct nfs_page {scalar_t__ wb_offset; scalar_t__ wb_pgbase; int wb_context; } ;
struct nfs_commit_info {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,struct nfs_commit_info*,int ) ;
 int FUNC_2 (struct nfs_commit_info*,int ,int ) ;
 int FUNC_3 (struct nfs_pageio_descriptor*) ;
 int * FUNC_4 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (int *) ;

void
FUNC_6(struct nfs_pageio_descriptor *VAR_3,
    struct nfs_page *VAR_4)
{
 struct nfs_commit_info VAR_5;
 int VAR_6;

 FUNC_0(VAR_3->pg_lseg != ((void*)0));

 if (VAR_4->wb_offset != VAR_4->wb_pgbase)
  goto out_mds;
 VAR_3->pg_lseg = FUNC_4(VAR_3->pg_inode,
        VAR_4->wb_context,
        0,
        VAR_2,
        VAR_1,
        VAR_0);

 if (VAR_3->pg_lseg == ((void*)0))
  goto out_mds;
 FUNC_2(&VAR_5, VAR_3->pg_inode, VAR_3->pg_dreq);
 VAR_6 = FUNC_1(VAR_3->pg_lseg, &VAR_5, VAR_0);
 if (VAR_6 < 0) {
  FUNC_5(VAR_3->pg_lseg);
  VAR_3->pg_lseg = ((void*)0);
  goto out_mds;
 }
 return;
out_mds:
 FUNC_3(VAR_3);
}
