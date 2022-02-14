
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_dns_ent {int h; } ;
struct nfs_cache_defer_req {int req; } ;
struct cache_detail {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cache_detail*,int *,int *) ;
 struct nfs_dns_ent* FUNC_1 (struct cache_detail*,struct nfs_dns_ent*) ;

__attribute__((used)) static int FUNC_2(struct cache_detail *VAR_1,
  struct nfs_dns_ent *VAR_2,
  struct nfs_dns_ent **VAR_3,
  struct nfs_cache_defer_req *VAR_4)
{
 int VAR_5 = -VAR_0;

 *VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (*VAR_3) {
  VAR_5 = FUNC_0(VAR_1, &(*VAR_3)->h, &VAR_4->req);
  if (VAR_5)
   *VAR_3 = ((void*)0);
 }
 return VAR_5;
}
