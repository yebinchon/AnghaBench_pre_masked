
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vfsmount {scalar_t__ mnt_ns; } ;
struct TYPE_4__ {TYPE_1__* nsproxy; } ;
struct TYPE_3__ {scalar_t__ mnt_ns; } ;


 TYPE_2__* VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct vfsmount *VAR_1)
{
 return VAR_1->mnt_ns == VAR_0->nsproxy->mnt_ns;
}
