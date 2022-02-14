
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
struct TYPE_8__ {int v_listflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,TYPE_1__*) ;
 int FUNC_2 (char*,TYPE_1__*) ;
 int FUNC_3 (char*,TYPE_1__*) ;
 int FUNC_4 (char*,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_5(vnode_t VAR_3)
{
 if (FUNC_0(VAR_3)) {




         if (VAR_3->v_listflag & VAR_2)
          FUNC_4("vnode_list_remove", VAR_3);
  else if (VAR_3->v_listflag & VAR_1)
          FUNC_2("vnode_list_remove", VAR_3);
  else if (VAR_3->v_listflag & VAR_0)
          FUNC_1("vnode_list_remove", VAR_3);
  else
          FUNC_3("vnode_list_remove", VAR_3);
 }
}
