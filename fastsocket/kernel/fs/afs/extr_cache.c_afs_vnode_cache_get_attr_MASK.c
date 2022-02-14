
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {int size; int data_version; } ;
struct TYPE_3__ {int unique; int vnode; } ;
struct afs_vnode {TYPE_2__ status; TYPE_1__ fid; } ;


 int FUNC_0 (char*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(const void *VAR_0,
         uint64_t *VAR_1)
{
 const struct afs_vnode *VAR_2 = VAR_0;

 FUNC_0("{%x,%x,%llx},",
        VAR_2->fid.vnode, VAR_2->fid.unique,
        VAR_2->status.data_version);

 *VAR_1 = VAR_2->status.size;
}
