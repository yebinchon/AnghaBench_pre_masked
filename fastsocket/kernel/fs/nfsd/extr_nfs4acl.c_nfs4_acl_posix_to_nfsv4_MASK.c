
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int a_count; } ;
struct nfs4_acl {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nfs4_acl* FUNC_0 (int ) ;
 unsigned int VAR_2 ;
 int FUNC_1 (struct posix_acl*,struct nfs4_acl*,unsigned int) ;
 struct nfs4_acl* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct posix_acl*) ;

struct nfs4_acl *
FUNC_4(struct posix_acl *VAR_3, struct posix_acl *VAR_4,
   unsigned int VAR_5)
{
 struct nfs4_acl *VAR_6;
 int VAR_7 = 0;

 if (VAR_3) {
  if (FUNC_3(VAR_3) < 0)
   return FUNC_0(-VAR_0);
  VAR_7 += 2*VAR_3->a_count;
 }
 if (VAR_4) {
  if (FUNC_3(VAR_4) < 0)
   return FUNC_0(-VAR_0);
  VAR_7 += 2*VAR_4->a_count;
 }


 VAR_6 = FUNC_2(VAR_7);
 if (VAR_6 == ((void*)0))
  return FUNC_0(-VAR_1);

 if (VAR_3)
  FUNC_1(VAR_3, VAR_6, VAR_5 & ~VAR_2);

 if (VAR_4)
  FUNC_1(VAR_4, VAR_6, VAR_5 | VAR_2);

 return VAR_6;
}
