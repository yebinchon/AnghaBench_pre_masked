
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct posix_acl {int a_count; TYPE_1__* a_entries; } ;
struct TYPE_5__ {void* a_version; TYPE_3__* a_entries; } ;
typedef TYPE_2__ posix_acl_xattr_header ;
struct TYPE_6__ {void* e_id; void* e_perm; void* e_tag; } ;
typedef TYPE_3__ posix_acl_xattr_entry ;
struct TYPE_4__ {int e_id; int e_perm; int e_tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int) ;

int
FUNC_3(const struct posix_acl *VAR_2, void *VAR_3, size_t VAR_4)
{
 posix_acl_xattr_header *VAR_5 = (posix_acl_xattr_header *)VAR_3;
 posix_acl_xattr_entry *VAR_6 = VAR_5->a_entries;
 int VAR_7, VAR_8;

 VAR_7 = FUNC_2(VAR_2->a_count);
 if (!VAR_3)
  return VAR_7;
 if (VAR_7 > VAR_4)
  return -VAR_0;

 VAR_5->a_version = FUNC_1(VAR_1);

 for (VAR_8=0; VAR_8 < VAR_2->a_count; VAR_8++, VAR_6++) {
  VAR_6->e_tag = FUNC_0(VAR_2->a_entries[VAR_8].e_tag);
  VAR_6->e_perm = FUNC_0(VAR_2->a_entries[VAR_8].e_perm);
  VAR_6->e_id = FUNC_1(VAR_2->a_entries[VAR_8].e_id);
 }
 return VAR_7;
}
