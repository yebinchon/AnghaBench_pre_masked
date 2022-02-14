
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct posix_acl {TYPE_1__* a_entries; } ;
struct jffs2_acl_header {int a_version; } ;
struct jffs2_acl_entry_short {int dummy; } ;
struct jffs2_acl_entry {int e_id; int e_perm; int e_tag; } ;
struct TYPE_2__ {int e_tag; void* e_id; void* e_perm; } ;






 void* VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 struct posix_acl* FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*,scalar_t__) ;
 void* FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (size_t) ;
 struct posix_acl* FUNC_5 (int,int ) ;
 int FUNC_6 (struct posix_acl*) ;

__attribute__((used)) static struct posix_acl *FUNC_7(void *VAR_5, size_t VAR_6)
{
 void *VAR_7 = VAR_5 + VAR_6;
 struct jffs2_acl_header *VAR_8 = VAR_5;
 struct jffs2_acl_entry *VAR_9;
 struct posix_acl *VAR_10;
 uint32_t VAR_11;
 int VAR_12, VAR_13;

 if (!VAR_5)
  return ((void*)0);
 if (VAR_6 < sizeof(struct jffs2_acl_header))
  return FUNC_0(-VAR_1);
 VAR_11 = FUNC_3(VAR_8->a_version);
 if (VAR_11 != VAR_4) {
  FUNC_1("Invalid ACL version. (=%u)\n", VAR_11);
  return FUNC_0(-VAR_1);
 }

 VAR_5 += sizeof(struct jffs2_acl_header);
 VAR_13 = FUNC_4(VAR_6);
 if (VAR_13 < 0)
  return FUNC_0(-VAR_1);
 if (VAR_13 == 0)
  return ((void*)0);

 VAR_10 = FUNC_5(VAR_13, VAR_3);
 if (!VAR_10)
  return FUNC_0(-VAR_2);

 for (VAR_12=0; VAR_12 < VAR_13; VAR_12++) {
  VAR_9 = VAR_5;
  if (VAR_5 + sizeof(struct jffs2_acl_entry_short) > VAR_7)
   goto fail;
  VAR_10->a_entries[VAR_12].e_tag = FUNC_2(VAR_9->e_tag);
  VAR_10->a_entries[VAR_12].e_perm = FUNC_2(VAR_9->e_perm);
  switch (VAR_10->a_entries[VAR_12].e_tag) {
   case 128:
   case 132:
   case 131:
   case 130:
    VAR_5 += sizeof(struct jffs2_acl_entry_short);
    VAR_10->a_entries[VAR_12].e_id = VAR_0;
    break;

   case 129:
   case 133:
    VAR_5 += sizeof(struct jffs2_acl_entry);
    if (VAR_5 > VAR_7)
     goto fail;
    VAR_10->a_entries[VAR_12].e_id = FUNC_3(VAR_9->e_id);
    break;

   default:
    goto fail;
  }
 }
 if (VAR_5 != VAR_7)
  goto fail;
 return VAR_10;
 fail:
 FUNC_6(VAR_10);
 return FUNC_0(-VAR_1);
}
