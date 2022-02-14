
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_pageio_descriptor {int pg_recoalesce; } ;


 int FUNC_0 (struct nfs_pageio_descriptor*) ;
 int FUNC_1 (struct nfs_pageio_descriptor*) ;

void FUNC_2(struct nfs_pageio_descriptor *VAR_0)
{
 for (;;) {
  FUNC_1(VAR_0);
  if (!VAR_0->pg_recoalesce)
   break;
  if (!FUNC_0(VAR_0))
   break;
 }
}
