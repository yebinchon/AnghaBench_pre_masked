
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_acl {scalar_t__ naces; } ;
struct nfs4_ace {int dummy; } ;


 int VAR_0 ;
 struct nfs4_acl* FUNC_0 (int,int ) ;

struct nfs4_acl *
FUNC_1(int VAR_1)
{
 struct nfs4_acl *VAR_2;

 VAR_2 = FUNC_0(sizeof(*VAR_2) + VAR_1*sizeof(struct nfs4_ace), VAR_0);
 if (VAR_2 == ((void*)0))
  return ((void*)0);
 VAR_2->naces = 0;
 return VAR_2;
}
