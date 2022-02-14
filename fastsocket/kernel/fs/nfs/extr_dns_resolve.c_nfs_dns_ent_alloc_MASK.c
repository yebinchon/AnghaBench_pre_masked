
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_head {int dummy; } ;
struct nfs_dns_ent {struct cache_head h; scalar_t__ addrlen; scalar_t__ namelen; int * hostname; } ;


 int VAR_0 ;
 struct nfs_dns_ent* FUNC_0 (int,int ) ;

__attribute__((used)) static struct cache_head *FUNC_1(void)
{
 struct nfs_dns_ent *VAR_1 = FUNC_0(sizeof(*VAR_1), VAR_0);

 if (VAR_1 != ((void*)0)) {
  VAR_1->hostname = ((void*)0);
  VAR_1->namelen = 0;
  VAR_1->addrlen = 0;
  return &VAR_1->h;
 }
 return ((void*)0);
}
