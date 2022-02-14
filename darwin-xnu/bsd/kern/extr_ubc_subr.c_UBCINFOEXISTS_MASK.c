
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {scalar_t__ v_type; scalar_t__ v_ubcinfo; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

int
FUNC_0(const struct vnode * VAR_2)
{
        return((VAR_2) && ((VAR_2)->v_type == VAR_1) && ((VAR_2)->v_ubcinfo != VAR_0));
}
