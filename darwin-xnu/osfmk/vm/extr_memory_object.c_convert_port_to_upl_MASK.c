
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_1__* upl_t ;
typedef TYPE_2__* ipc_port_t ;
struct TYPE_12__ {scalar_t__ ip_kobject; } ;
struct TYPE_11__ {int ref_count; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

upl_t
FUNC_6(
 ipc_port_t VAR_1)
{
 upl_t VAR_2;

 FUNC_2(VAR_1);
 if (!FUNC_0(VAR_1) || (FUNC_1(VAR_1) != VAR_0)) {
   FUNC_3(VAR_1);
   return (upl_t)((void*)0);
 }
 VAR_2 = (upl_t) VAR_1->ip_kobject;
 FUNC_3(VAR_1);
 FUNC_4(VAR_2);
 VAR_2->ref_count+=1;
 FUNC_5(VAR_2);
 return VAR_2;
}
