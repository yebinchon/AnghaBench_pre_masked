
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_pageio_descriptor {int pg_moreio; scalar_t__ pg_error; scalar_t__ pg_recoalesce; } ;
struct nfs_page {int dummy; } ;


 int FUNC_0 (struct nfs_pageio_descriptor*,struct nfs_page*) ;
 int FUNC_1 (struct nfs_pageio_descriptor*) ;

__attribute__((used)) static int FUNC_2(struct nfs_pageio_descriptor *VAR_0,
      struct nfs_page *VAR_1)
{
 while (!FUNC_0(VAR_0, VAR_1)) {
  VAR_0->pg_moreio = 1;
  FUNC_1(VAR_0);
  if (VAR_0->pg_error < 0)
   return 0;
  VAR_0->pg_moreio = 0;
  if (VAR_0->pg_recoalesce)
   return 0;
 }
 return 1;
}
