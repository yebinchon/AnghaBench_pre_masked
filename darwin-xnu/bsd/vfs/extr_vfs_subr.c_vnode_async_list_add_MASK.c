
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
struct TYPE_6__ {int v_lflag; int v_listflag; } ;


 int FUNC_0 (int *,TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_2 (char*,TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(vnode_t VAR_6)
{
 FUNC_3();

 if (FUNC_1(VAR_6) || (VAR_6->v_lflag & (VAR_2|VAR_1)))
  FUNC_2("vnode_async_list_add: %p is in wrong state", VAR_6);

 FUNC_0(&VAR_5, VAR_6, VAR_4);
 VAR_6->v_listflag |= VAR_0;

 VAR_3++;

 FUNC_4();

 FUNC_5(&VAR_5);

}
