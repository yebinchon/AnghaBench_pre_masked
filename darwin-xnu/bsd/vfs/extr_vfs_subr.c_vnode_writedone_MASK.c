
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
typedef int caddr_t ;
struct TYPE_5__ {scalar_t__ v_numoutput; int v_flag; } ;


 int FUNC_0 (int,scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;

void
FUNC_5(vnode_t VAR_2)
{
 if (VAR_2) {
  int VAR_3 = 0;

         FUNC_0(-1, &VAR_2->v_numoutput);

  FUNC_2(VAR_2);

  if (VAR_2->v_numoutput < 0)
   FUNC_1("vnode_writedone: numoutput < 0");

  if ((VAR_2->v_flag & VAR_1)) {
   VAR_2->v_flag &= ~VAR_1;
   VAR_3 = 1;
  }
  if ((VAR_2->v_flag & VAR_0) && (VAR_2->v_numoutput == 0)) {
   VAR_2->v_flag &= ~VAR_0;
   VAR_3 = 1;
  }
  FUNC_3(VAR_2);

  if (VAR_3)
   FUNC_4((caddr_t)&VAR_2->v_numoutput);
 }
}
