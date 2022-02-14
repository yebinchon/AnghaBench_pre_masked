
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
struct TYPE_7__ {int * slh_first; } ;
struct TYPE_6__ {TYPE_5__ v_knotes; } ;


 int FUNC_0 (TYPE_5__*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

void
FUNC_3(vnode_t VAR_0, int VAR_1)
{

 if (VAR_0->v_knotes.slh_first != ((void*)0)) {
  FUNC_1(VAR_0);
  FUNC_0(&VAR_0->v_knotes, VAR_1);
  FUNC_2(VAR_0);
 }
}
