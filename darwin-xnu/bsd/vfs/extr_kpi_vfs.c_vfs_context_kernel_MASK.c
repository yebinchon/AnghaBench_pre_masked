
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* vfs_context_t ;
struct TYPE_7__ {scalar_t__ p_ucred; } ;
struct TYPE_6__ {scalar_t__ vc_ucred; int * vc_thread; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 TYPE_3__* VAR_2 ;
 int * FUNC_0 (TYPE_3__*) ;

vfs_context_t
FUNC_1(void)
{
 if (VAR_1.vc_ucred == VAR_0)
  VAR_1.vc_ucred = VAR_2->p_ucred;
 if (VAR_1.vc_thread == ((void*)0))
  VAR_1.vc_thread = FUNC_0(VAR_2);

 return(&VAR_1);
}
