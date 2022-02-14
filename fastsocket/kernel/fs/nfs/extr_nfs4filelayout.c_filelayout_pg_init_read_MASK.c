
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_pageio_descriptor {int * pg_lseg; int pg_inode; } ;
struct nfs_page {scalar_t__ wb_offset; scalar_t__ wb_pgbase; int wb_context; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct nfs_pageio_descriptor*) ;
 int * FUNC_2 (int ,int ,int ,int ,int ,int ) ;

void
FUNC_3(struct nfs_pageio_descriptor *VAR_3,
   struct nfs_page *VAR_4)
{
 FUNC_0(VAR_3->pg_lseg != ((void*)0));

 if (VAR_4->wb_offset != VAR_4->wb_pgbase) {






  FUNC_1(VAR_3);
  return;
 }
 VAR_3->pg_lseg = FUNC_2(VAR_3->pg_inode,
        VAR_4->wb_context,
        0,
        VAR_2,
        VAR_1,
        VAR_0);

 if (VAR_3->pg_lseg == ((void*)0))
  FUNC_1(VAR_3);
}
