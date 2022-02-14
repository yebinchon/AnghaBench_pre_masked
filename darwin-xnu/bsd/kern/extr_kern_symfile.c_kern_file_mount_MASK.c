
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mount {int dummy; } ;
struct kern_direct_file_io_ref_t {TYPE_1__* vp; } ;
struct TYPE_2__ {struct mount* v_mount; } ;



struct mount *
FUNC_0(struct kern_direct_file_io_ref_t * VAR_0)
{
    return (VAR_0->vp->v_mount);
}
