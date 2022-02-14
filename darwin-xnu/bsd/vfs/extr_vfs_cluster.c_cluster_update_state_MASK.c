
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_3__* vnode_t ;
typedef scalar_t__ vm_object_offset_t ;
struct cl_extent {void* e_addr; void* b_addr; } ;
typedef void* daddr64_t ;
typedef int boolean_t ;
struct TYPE_7__ {TYPE_1__* vu_ubcinfo; } ;
struct TYPE_8__ {TYPE_2__ v_un; } ;
struct TYPE_6__ {int ui_size; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,struct cl_extent*,int ,int ,int *,scalar_t__,int,int ,int *,int *,int ) ;

void
FUNC_2(vnode_t VAR_3, vm_object_offset_t VAR_4, vm_object_offset_t VAR_5, boolean_t VAR_6)
{
 struct cl_extent VAR_7;
 boolean_t VAR_8 = VAR_2;

 FUNC_0(VAR_4 < VAR_5);
 FUNC_0((VAR_4 & VAR_0) == 0);
 FUNC_0((VAR_5 & VAR_0) == 0);

 VAR_7.b_addr = (daddr64_t)(VAR_4 / VAR_1);
 VAR_7.e_addr = (daddr64_t)(VAR_5 / VAR_1);

 FUNC_1(VAR_3, &VAR_7, 0, VAR_2, &VAR_8, VAR_4, (int)(VAR_5 - VAR_4),
          VAR_3->v_un.vu_ubcinfo->ui_size, ((void*)0), ((void*)0), VAR_6);
}
