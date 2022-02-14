
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_array2_desc {int dummy; } ;
struct posix_acl_entry {int e_tag; int e_id; int e_perm; } ;
struct nfsacl_encode_desc {int typeflag; int uid; int gid; int count; TYPE_1__* acl; } ;
typedef int __be32 ;
struct TYPE_2__ {struct posix_acl_entry* a_entries; } ;






 int VAR_0 ;
 void* FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(struct xdr_array2_desc *VAR_1, void *VAR_2)
{
 struct nfsacl_encode_desc *VAR_3 =
  (struct nfsacl_encode_desc *) VAR_1;
 __be32 *VAR_4 = VAR_2;

 struct posix_acl_entry *VAR_5 =
  &VAR_3->acl->a_entries[VAR_3->count++];

 *VAR_4++ = FUNC_0(VAR_5->e_tag | VAR_3->typeflag);
 switch(VAR_5->e_tag) {
  case 128:
   *VAR_4++ = FUNC_0(VAR_3->uid);
   break;
  case 130:
   *VAR_4++ = FUNC_0(VAR_3->gid);
   break;
  case 129:
  case 131:
   *VAR_4++ = FUNC_0(VAR_5->e_id);
   break;
  default:
   *VAR_4++ = 0;
   break;
 }
 *VAR_4++ = FUNC_0(VAR_5->e_perm & VAR_0);
 return 0;
}
