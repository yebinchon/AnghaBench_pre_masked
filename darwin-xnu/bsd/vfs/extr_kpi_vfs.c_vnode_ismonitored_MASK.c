
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* vnode_t ;
struct TYPE_4__ {int * slh_first; } ;
struct TYPE_5__ {TYPE_1__ v_knotes; } ;



int
FUNC_0(vnode_t VAR_0) {
 return (VAR_0->v_knotes.slh_first != ((void*)0));
}
