
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct nfs_dns_ent {char* hostname; size_t namelen; size_t addrlen; int h; int addr; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int *,int *) ;
 size_t FUNC_1 (int *,struct nfs_dns_ent*,struct nfs_dns_ent**) ;
 int FUNC_2 (struct sockaddr*,int *,size_t) ;
 int VAR_3 ;

ssize_t FUNC_3(char *VAR_4, size_t VAR_5,
  struct sockaddr *VAR_6, size_t VAR_7)
{
 struct nfs_dns_ent VAR_8 = {
  .hostname = VAR_4,
  .namelen = VAR_5,
 };
 struct nfs_dns_ent *VAR_9 = ((void*)0);
 ssize_t VAR_10;

 VAR_10 = FUNC_1(&VAR_3, &VAR_8, &VAR_9);
 if (VAR_10 == 0) {
  if (VAR_7 >= VAR_9->addrlen) {
   FUNC_2(VAR_6, &VAR_9->addr, VAR_9->addrlen);
   VAR_10 = VAR_9->addrlen;
  } else
   VAR_10 = -VAR_1;
  FUNC_0(&VAR_9->h, &VAR_3);
 } else if (VAR_10 == -VAR_0)
  VAR_10 = -VAR_2;
 return VAR_10;
}
