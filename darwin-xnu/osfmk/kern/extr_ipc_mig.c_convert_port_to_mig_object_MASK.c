
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_2__* mig_object_t ;
typedef TYPE_3__* ipc_port_t ;
struct TYPE_13__ {scalar_t__ ip_kobject; } ;
struct TYPE_12__ {TYPE_1__* pVtbl; } ;
struct TYPE_11__ {int (* QueryInterface ) (int *,int const*,void**) ;} ;
typedef int MIGIID ;
typedef int IMIGObject ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *,int const*,void**) ;

mig_object_t
FUNC_6(
 ipc_port_t VAR_1,
 const MIGIID *VAR_2)
{
 mig_object_t VAR_3;
 void *VAR_4;

 if (!FUNC_0(VAR_1))
  return ((void*)0);

 FUNC_3(VAR_1);
 if (!FUNC_1(VAR_1) || (FUNC_2(VAR_1) != VAR_0)) {
  FUNC_4(VAR_1);
  return ((void*)0);
 }





 VAR_4 = ((void*)0);
 VAR_3 = (mig_object_t)VAR_1->ip_kobject;
 VAR_3->pVtbl->QueryInterface((IMIGObject *)VAR_3, VAR_2, &VAR_4);
 FUNC_4(VAR_1);
 return (mig_object_t)VAR_4;
}
