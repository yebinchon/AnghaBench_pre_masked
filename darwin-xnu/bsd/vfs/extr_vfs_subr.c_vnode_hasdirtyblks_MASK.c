
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_3__* vnode_t ;
struct cl_writebehind {scalar_t__ cl_scmap; scalar_t__ cl_number; } ;
struct TYPE_6__ {scalar_t__ lh_first; } ;
struct TYPE_8__ {TYPE_2__* v_ubcinfo; TYPE_1__ v_dirtyblkhd; } ;
struct TYPE_7__ {struct cl_writebehind* cl_wbehind; } ;


 int FUNC_0 (TYPE_3__*) ;

int
FUNC_1(vnode_t VAR_0)
{
        struct cl_writebehind *VAR_1;
        if (VAR_0->v_dirtyblkhd.lh_first)
         return (1);

 if (!FUNC_0(VAR_0))
         return (0);

 VAR_1 = VAR_0->v_ubcinfo->cl_wbehind;

 if (VAR_1 && (VAR_1->cl_number || VAR_1->cl_scmap))
         return (1);

 return (0);
}
