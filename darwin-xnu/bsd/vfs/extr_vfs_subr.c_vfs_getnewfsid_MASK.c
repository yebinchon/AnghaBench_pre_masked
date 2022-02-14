
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int* val; } ;
struct TYPE_8__ {TYPE_2__ f_fsid; } ;
struct mount {TYPE_3__ mnt_vfsstat; TYPE_1__* mnt_vtable; } ;
struct TYPE_9__ {int* val; } ;
typedef TYPE_4__ fsid_t ;
struct TYPE_6__ {int vfc_typenum; } ;


 void* FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;

void
FUNC_4(struct mount *VAR_2)
{

 fsid_t VAR_3;
 int VAR_4;

 FUNC_1();


 VAR_4 = VAR_2->mnt_vtable->vfc_typenum;
 if (++VAR_0 == 0)
  VAR_0++;
 VAR_3.val[0] = FUNC_0(VAR_1 + VAR_4, VAR_0);
 VAR_3.val[1] = VAR_4;

 while (FUNC_3(&VAR_3)) {
  if (++VAR_0 == 0)
   VAR_0++;
  VAR_3.val[0] = FUNC_0(VAR_1 + VAR_4, VAR_0);
 }

 VAR_2->mnt_vfsstat.f_fsid.val[0] = VAR_3.val[0];
 VAR_2->mnt_vfsstat.f_fsid.val[1] = VAR_3.val[1];
 FUNC_2();
}
