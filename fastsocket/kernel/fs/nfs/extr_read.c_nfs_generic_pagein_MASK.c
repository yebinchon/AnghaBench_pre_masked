
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_pgio_header {int dummy; } ;
struct nfs_pageio_descriptor {scalar_t__ pg_bsize; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct nfs_pageio_descriptor*,struct nfs_pgio_header*) ;
 int FUNC_1 (struct nfs_pageio_descriptor*,struct nfs_pgio_header*) ;

int FUNC_2(struct nfs_pageio_descriptor *VAR_1,
         struct nfs_pgio_header *VAR_2)
{
 if (VAR_1->pg_bsize < VAR_0)
  return FUNC_0(VAR_1, VAR_2);
 return FUNC_1(VAR_1, VAR_2);
}
