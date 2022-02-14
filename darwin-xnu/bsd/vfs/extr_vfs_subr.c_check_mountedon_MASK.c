
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
typedef enum vtype { ____Placeholder_vtype } vtype ;
typedef scalar_t__ dev_t ;
struct TYPE_8__ {scalar_t__ v_rdev; int v_type; int v_id; scalar_t__ v_usecount; int v_iocount; struct TYPE_8__* v_specnext; } ;


 size_t FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_1__** VAR_0 ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;

int
FUNC_8(dev_t VAR_1, enum vtype VAR_2, int *VAR_3)
{
 vnode_t VAR_4;
 int VAR_5 = 0;
 int VAR_6;

loop:
 FUNC_1();
 for (VAR_4 = VAR_0[FUNC_0(VAR_1)]; VAR_4; VAR_4 = VAR_4->v_specnext) {
  if (VAR_1 != VAR_4->v_rdev || VAR_2 != VAR_4->v_type)
   continue;
  VAR_6 = VAR_4->v_id;
  FUNC_2();
  if (FUNC_4(VAR_4,VAR_6))
   goto loop;
  FUNC_5(VAR_4);
  if ((VAR_4->v_usecount > 0) || (VAR_4->v_iocount > 1)) {
   FUNC_7(VAR_4);
   if ((*VAR_3 = FUNC_3(VAR_4)) != 0)
    VAR_5 = 1;
  } else
   FUNC_7(VAR_4);
  FUNC_6(VAR_4);
  return(VAR_5);
 }
 FUNC_2();
 return (0);
}
