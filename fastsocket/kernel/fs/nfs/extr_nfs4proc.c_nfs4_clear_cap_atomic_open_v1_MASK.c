
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_server {int caps; } ;
struct nfs4_exception {int retry; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct nfs_server *VAR_2,
  int VAR_3, struct nfs4_exception *VAR_4)
{
 if (VAR_3 != -VAR_0)
  return 0;
 if (!(VAR_2->caps & VAR_1))
  return 0;
 VAR_2->caps &= ~VAR_1;
 VAR_4->retry = 1;
 return 1;
}
