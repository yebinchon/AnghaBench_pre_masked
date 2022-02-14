
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl_entry {int dummy; } ;
struct posix_acl {int a_count; int a_refcount; } ;
typedef int gfp_t ;


 int FUNC_0 (int *,int) ;
 struct posix_acl* FUNC_1 (struct posix_acl const*,int,int ) ;

struct posix_acl *
FUNC_2(const struct posix_acl *VAR_0, gfp_t VAR_1)
{
 struct posix_acl *VAR_2 = ((void*)0);

 if (VAR_0) {
  int VAR_3 = sizeof(struct posix_acl) + VAR_0->a_count *
             sizeof(struct posix_acl_entry);
  VAR_2 = FUNC_1(VAR_0, VAR_3, VAR_1);
  if (VAR_2)
   FUNC_0(&VAR_2->a_refcount, 1);
 }
 return VAR_2;
}
