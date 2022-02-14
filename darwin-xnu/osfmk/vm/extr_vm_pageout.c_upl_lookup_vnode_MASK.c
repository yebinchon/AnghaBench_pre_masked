
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* upl_t ;
struct vnode {int dummy; } ;
struct TYPE_5__ {TYPE_1__* map_object; } ;
struct TYPE_4__ {int pager; int internal; } ;


 struct vnode* FUNC_0 (int ) ;

struct vnode * FUNC_1(upl_t VAR_0)
{
 if (!VAR_0->map_object->internal)
  return FUNC_0(VAR_0->map_object->pager);
 else
  return ((void*)0);
}
