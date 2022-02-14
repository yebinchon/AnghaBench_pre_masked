
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct posix_acl_entry {int e_tag; int e_id; void* e_perm; } ;
struct posix_acl {struct posix_acl_entry* a_entries; } ;
struct TYPE_3__ {scalar_t__ a_version; } ;
typedef TYPE_1__ posix_acl_xattr_header ;
struct TYPE_4__ {int e_id; int e_perm; int e_tag; } ;
typedef TYPE_2__ posix_acl_xattr_entry ;






 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct posix_acl* FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct posix_acl* FUNC_4 (int,int ) ;
 int FUNC_5 (struct posix_acl*) ;
 int FUNC_6 (size_t) ;

struct posix_acl *
FUNC_7(const void *VAR_6, size_t VAR_7)
{
 posix_acl_xattr_header *VAR_8 = (posix_acl_xattr_header *)VAR_6;
 posix_acl_xattr_entry *VAR_9 = (posix_acl_xattr_entry *)(VAR_8+1), *VAR_10;
 int VAR_11;
 struct posix_acl *VAR_12;
 struct posix_acl_entry *VAR_13;

 if (!VAR_6)
  return ((void*)0);
 if (VAR_7 < sizeof(posix_acl_xattr_header))
   return FUNC_0(-VAR_1);
 if (VAR_8->a_version != FUNC_1(VAR_5))
  return FUNC_0(-VAR_3);

 VAR_11 = FUNC_6(VAR_7);
 if (VAR_11 < 0)
  return FUNC_0(-VAR_1);
 if (VAR_11 == 0)
  return ((void*)0);

 VAR_12 = FUNC_4(VAR_11, VAR_4);
 if (!VAR_12)
  return FUNC_0(-VAR_2);
 VAR_13 = VAR_12->a_entries;

 for (VAR_10 = VAR_9 + VAR_11; VAR_9 != VAR_10; VAR_13++, VAR_9++) {
  VAR_13->e_tag = FUNC_2(VAR_9->e_tag);
  VAR_13->e_perm = FUNC_2(VAR_9->e_perm);

  switch(VAR_13->e_tag) {
   case 128:
   case 132:
   case 131:
   case 130:
    VAR_13->e_id = VAR_0;
    break;

   case 129:
   case 133:
    VAR_13->e_id = FUNC_3(VAR_9->e_id);
    break;

   default:
    goto fail;
  }
 }
 return VAR_12;

fail:
 FUNC_5(VAR_12);
 return FUNC_0(-VAR_1);
}
