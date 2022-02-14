
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vnode {scalar_t__ v_usecount; scalar_t__ v_kusecount; } ;



uint32_t
FUNC_0(struct vnode *VAR_0)
{
 if (VAR_0->v_usecount > VAR_0->v_kusecount)
  return (1);
 return (0);
}
