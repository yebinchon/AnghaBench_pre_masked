
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
typedef enum vtype { ____Placeholder_vtype } vtype ;
struct TYPE_3__ {int v_type; int v_specflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_0(vnode_t VAR_3)
{
 enum vtype VAR_4 = VAR_3->v_type;
 if (!((VAR_4 == VAR_2) || (VAR_4 == VAR_1))) {
  return 0;
 } else {
  return (VAR_3->v_specflags & VAR_0);
 }
}
