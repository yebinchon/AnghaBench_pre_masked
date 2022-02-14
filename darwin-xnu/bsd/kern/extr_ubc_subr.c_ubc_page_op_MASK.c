
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
typedef int ppnum_t ;
typedef scalar_t__ off_t ;
typedef int memory_object_offset_t ;
typedef scalar_t__ memory_object_control_t ;
typedef int kern_return_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int ,int,int *,int*) ;
 scalar_t__ FUNC_1 (struct vnode*,int ) ;

kern_return_t
FUNC_2(
 struct vnode *VAR_3,
 off_t VAR_4,
 int VAR_5,
 ppnum_t *VAR_6,
 int *VAR_7)
{
 memory_object_control_t VAR_8;

 VAR_8 = FUNC_1(VAR_3, VAR_2);
 if (VAR_8 == VAR_1)
  return VAR_0;

 return (FUNC_0(VAR_8,
          (memory_object_offset_t)VAR_4,
          VAR_5,
          VAR_6,
          VAR_7));
}
