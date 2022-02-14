
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_dns_ent {int dummy; } ;
struct nfs_cache_defer_req {int dummy; } ;
struct cache_detail {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cache_detail*,struct nfs_dns_ent*,struct nfs_dns_ent**,struct nfs_cache_defer_req*) ;
 int FUNC_1 (struct cache_detail*,struct nfs_dns_ent*,struct nfs_dns_ent**) ;
 struct nfs_cache_defer_req* FUNC_2 () ;
 int FUNC_3 (struct nfs_cache_defer_req*) ;
 int FUNC_4 (struct nfs_cache_defer_req*) ;

__attribute__((used)) static int FUNC_5(struct cache_detail *VAR_2,
  struct nfs_dns_ent *VAR_3,
  struct nfs_dns_ent **VAR_4)
{
 struct nfs_cache_defer_req *VAR_5;
 int VAR_6 = -VAR_1;

 VAR_5 = FUNC_2();
 if (!VAR_5)
  goto out;
 VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_6 == -VAR_0) {
  VAR_6 = FUNC_4(VAR_5);
  if (!VAR_6)
   VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4);
 }
 FUNC_3(VAR_5);
out:
 return VAR_6;
}
