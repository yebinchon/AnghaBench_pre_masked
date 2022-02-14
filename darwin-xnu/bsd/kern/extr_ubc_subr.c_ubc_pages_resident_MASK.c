
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* vnode_t ;
typedef scalar_t__ kern_return_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_6__ {TYPE_1__* v_ubcinfo; } ;
struct TYPE_5__ {int ui_control; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ,scalar_t__*) ;

int
FUNC_2(vnode_t VAR_2)
{
 kern_return_t VAR_3;
 boolean_t VAR_4;

 if (!FUNC_0(VAR_2))
  return (0);







 VAR_3 = FUNC_1(VAR_2->v_ubcinfo->ui_control, &VAR_4);

 if (VAR_3 != VAR_0)
  return (0);

 if (VAR_4 == VAR_1)
  return (1);

 return (0);
}
