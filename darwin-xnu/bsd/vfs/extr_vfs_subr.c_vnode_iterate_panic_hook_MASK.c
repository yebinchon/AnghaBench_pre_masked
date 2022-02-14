
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef int uint64_t ;
struct vnode_iterate_panic_hook {scalar_t__ mp; scalar_t__ vp; } ;
struct TYPE_3__ {scalar_t__ len; scalar_t__ phys_start; int type; } ;
typedef TYPE_1__ panic_phys_range_t ;
typedef int panic_hook_t ;


 int FUNC_0 (void*,int) ;
 scalar_t__ FUNC_1 (scalar_t__,int *,TYPE_1__*) ;
 int FUNC_2 (char*,scalar_t__,int ,...) ;

__attribute__((used)) static void FUNC_3(panic_hook_t *VAR_0)
{
 struct vnode_iterate_panic_hook *VAR_1 = (struct vnode_iterate_panic_hook *)VAR_0;
 panic_phys_range_t VAR_2;
 uint64_t VAR_3;

 if (FUNC_1(VAR_1->mp, &VAR_3, &VAR_2)) {
  FUNC_2("mp = %p, phys = %p, prev (%p: %p-%p)\n",
    VAR_1->mp, VAR_3, VAR_2.type, VAR_2.phys_start,
    VAR_2.phys_start + VAR_2.len);
 } else {
  FUNC_2("mp = %p, phys = %p, prev (!)\n", VAR_1->mp, VAR_3);
 }

 if (FUNC_1(VAR_1->vp, &VAR_3, &VAR_2)) {
  FUNC_2("vp = %p, phys = %p, prev (%p: %p-%p)\n",
    VAR_1->vp, VAR_3, VAR_2.type, VAR_2.phys_start,
    VAR_2.phys_start + VAR_2.len);
 } else {
  FUNC_2("vp = %p, phys = %p, prev (!)\n", VAR_1->vp, VAR_3);
 }
 FUNC_0((void *)(((vm_offset_t)VAR_1->mp -4096) & ~4095), 12288);
}
