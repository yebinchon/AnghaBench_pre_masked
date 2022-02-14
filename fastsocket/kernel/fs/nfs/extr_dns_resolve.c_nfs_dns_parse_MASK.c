
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct TYPE_3__ {int flags; scalar_t__ expiry_time; } ;
struct nfs_dns_ent {scalar_t__ addrlen; char* hostname; TYPE_1__ h; scalar_t__ namelen; int addr; } ;
struct cache_detail {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int buf1 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,struct cache_detail*) ;
 scalar_t__ FUNC_1 (char**,unsigned int*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 struct nfs_dns_ent* FUNC_3 (struct cache_detail*,struct nfs_dns_ent*) ;
 struct nfs_dns_ent* FUNC_4 (struct cache_detail*,struct nfs_dns_ent*,struct nfs_dns_ent*) ;
 scalar_t__ FUNC_5 (char**,char*,int) ;
 scalar_t__ FUNC_6 (char*,scalar_t__,struct sockaddr*,int) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static int FUNC_9(struct cache_detail *VAR_4, char *VAR_5, int VAR_6)
{
 char VAR_7[VAR_3+1];
 struct nfs_dns_ent VAR_8, *VAR_9;
 unsigned int VAR_10;
 ssize_t VAR_11;
 int VAR_12 = -VAR_1;

 if (VAR_5[VAR_6-1] != '\n')
  goto out;
 VAR_5[VAR_6-1] = '\0';

 VAR_11 = FUNC_5(&VAR_5, VAR_7, sizeof(VAR_7));
 if (VAR_11 <= 0)
  goto out;
 VAR_8.addrlen = FUNC_6(VAR_7, VAR_11,
   (struct sockaddr *)&VAR_8.addr,
   sizeof(VAR_8.addr));

 VAR_11 = FUNC_5(&VAR_5, VAR_7, sizeof(VAR_7));
 if (VAR_11 <= 0)
  goto out;

 VAR_8.hostname = VAR_7;
 VAR_8.namelen = VAR_11;
 FUNC_2(&VAR_8.h, 0, sizeof(VAR_8.h));

 if (FUNC_1(&VAR_5, &VAR_10) < 0)
  goto out;
 if (VAR_10 == 0)
  goto out;
 VAR_8.h.expiry_time = VAR_10 + FUNC_7();

 VAR_12 = -VAR_2;
 VAR_9 = FUNC_3(VAR_4, &VAR_8);
 if (VAR_9 == ((void*)0))
  goto out;

 if (VAR_8.addrlen == 0)
  FUNC_8(VAR_0, &VAR_8.h.flags);

 VAR_9 = FUNC_4(VAR_4, &VAR_8, VAR_9);
 if (VAR_9 == ((void*)0))
  goto out;

 VAR_12 = 0;
 FUNC_0(&VAR_9->h, VAR_4);
out:
 return VAR_12;
}
