
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int version ;
typedef int unique ;
typedef int uint16_t ;
struct TYPE_4__ {int data_version; } ;
struct TYPE_3__ {int unique; int vnode; } ;
struct afs_vnode {TYPE_2__ status; TYPE_1__ fid; } ;
typedef enum fscache_checkaux { ____Placeholder_fscache_checkaux } fscache_checkaux ;
typedef unsigned int afs_dataversion_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ,int ,void const*,int) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (void const*,int *,int) ;
 int FUNC_3 (unsigned int*,void const*,int) ;

__attribute__((used)) static enum fscache_checkaux FUNC_4(void *VAR_2,
             const void *VAR_3,
             uint16_t VAR_4)
{
 struct afs_vnode *VAR_5 = VAR_2;
 uint16_t VAR_6;

 FUNC_0("{%x,%x,%llx},%p,%u",
        VAR_5->fid.vnode, VAR_5->fid.unique, VAR_5->status.data_version,
        VAR_3, VAR_4);


 VAR_6 = sizeof(VAR_5->fid.unique) + sizeof(VAR_5->status.data_version);
 if (VAR_6 != VAR_4) {
  FUNC_1(" = OBSOLETE [len %hx != %hx]", VAR_6, VAR_4);
  return VAR_0;
 }

 if (FUNC_2(VAR_3,
     &VAR_5->fid.unique,
     sizeof(VAR_5->fid.unique)
     ) != 0) {
  unsigned VAR_7;

  FUNC_3(&VAR_7, VAR_3, sizeof(VAR_7));

  FUNC_1(" = OBSOLETE [uniq %x != %x]",
         VAR_7, VAR_5->fid.unique);
  return VAR_0;
 }

 if (FUNC_2(VAR_3 + sizeof(VAR_5->fid.unique),
     &VAR_5->status.data_version,
     sizeof(VAR_5->status.data_version)
     ) != 0) {
  afs_dataversion_t VAR_8;

  FUNC_3(&VAR_8, VAR_3 + sizeof(VAR_5->fid.unique),
         sizeof(VAR_8));

  FUNC_1(" = OBSOLETE [vers %llx != %llx]",
         VAR_8, VAR_5->status.data_version);
  return VAR_0;
 }

 FUNC_1(" = SUCCESS");
 return VAR_1;
}
