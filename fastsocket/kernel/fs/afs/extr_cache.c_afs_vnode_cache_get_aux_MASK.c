
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {int data_version; } ;
struct TYPE_3__ {int unique; int vnode; } ;
struct afs_vnode {TYPE_2__ status; TYPE_1__ fid; } ;


 int FUNC_0 (char*,int ,int ,int ,void*,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (void*,int *,int) ;

__attribute__((used)) static uint16_t FUNC_3(const void *VAR_0,
     void *VAR_1, uint16_t VAR_2)
{
 const struct afs_vnode *VAR_3 = VAR_0;
 uint16_t VAR_4;

 FUNC_0("{%x,%x,%Lx},%p,%u",
        VAR_3->fid.vnode, VAR_3->fid.unique, VAR_3->status.data_version,
        VAR_1, VAR_2);

 VAR_4 = sizeof(VAR_3->fid.unique) + sizeof(VAR_3->status.data_version);
 if (VAR_4 > VAR_2)
  return 0;

 FUNC_2(VAR_1, &VAR_3->fid.unique, sizeof(VAR_3->fid.unique));
 VAR_1 += sizeof(VAR_3->fid.unique);
 FUNC_2(VAR_1, &VAR_3->status.data_version,
        sizeof(VAR_3->status.data_version));

 FUNC_1(" = %u", VAR_4);
 return VAR_4;
}
