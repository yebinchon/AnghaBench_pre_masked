
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
typedef scalar_t__ vfs_context_t ;
typedef int kauth_action_t ;
struct TYPE_4__ {scalar_t__ v_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int ,uintptr_t,uintptr_t,uintptr_t,uintptr_t) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_3 ;

int
FUNC_2(vnode_t VAR_4, vnode_t VAR_5, kauth_action_t VAR_6, vfs_context_t VAR_7)
{
 int VAR_8, VAR_9;





 if (VAR_4->v_type == VAR_2)
  return(0);

 VAR_8 = 0;
 VAR_9 = FUNC_0(VAR_3, FUNC_1(VAR_7), VAR_6,
     (uintptr_t)VAR_7, (uintptr_t)VAR_4, (uintptr_t)VAR_5, (uintptr_t)&VAR_8);
 if (VAR_9 == VAR_1)
  VAR_9 = VAR_0;

 if ((VAR_9 != 0) && (VAR_8 != 0))
         return(VAR_8);
 return(VAR_9);
}
