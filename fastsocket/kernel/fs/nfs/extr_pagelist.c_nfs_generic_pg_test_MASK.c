
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_pageio_descriptor {scalar_t__ pg_bsize; scalar_t__ pg_count; } ;
struct nfs_page {scalar_t__ wb_bytes; } ;


 scalar_t__ VAR_0 ;

bool FUNC_0(struct nfs_pageio_descriptor *VAR_1, struct nfs_page *VAR_2, struct nfs_page *VAR_3)
{







 if (VAR_1->pg_bsize < VAR_0)
  return 0;

 return VAR_1->pg_count + VAR_3->wb_bytes <= VAR_1->pg_bsize;
}
