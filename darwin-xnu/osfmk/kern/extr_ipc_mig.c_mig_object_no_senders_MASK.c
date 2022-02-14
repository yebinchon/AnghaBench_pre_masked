
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef TYPE_3__* mig_object_t ;
typedef scalar_t__ mach_port_mscount_t ;
typedef TYPE_4__* ipc_port_t ;
typedef int boolean_t ;
struct TYPE_13__ {scalar_t__ imq_seqno; } ;
struct TYPE_16__ {scalar_t__ ip_mscount; TYPE_1__ ip_messages; scalar_t__ ip_kobject; int ip_sorights; } ;
struct TYPE_15__ {TYPE_2__* pVtbl; TYPE_4__* port; } ;
struct TYPE_14__ {int (* Release ) (int *) ;} ;
typedef int IMIGObject ;


 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,scalar_t__,TYPE_4__*,TYPE_4__**) ;
 int FUNC_5 (int *) ;

boolean_t
FUNC_6(
 ipc_port_t VAR_3,
 mach_port_mscount_t VAR_4)
{
 mig_object_t VAR_5;

 FUNC_1(VAR_3);
 if (VAR_3->ip_mscount > VAR_4) {
  ipc_port_t VAR_6;
  VAR_3->ip_sorights++;
  FUNC_2(VAR_3);
  FUNC_4(VAR_3, VAR_4, VAR_3, &VAR_6);


  FUNC_0(VAR_6 == VAR_1);
  return (VAR_0);
 }




 VAR_5 = (mig_object_t)VAR_3->ip_kobject;
 VAR_5->port = VAR_1;





 VAR_3->ip_mscount = 0;
 VAR_3->ip_messages.imq_seqno = 0;
 FUNC_3(VAR_3);




 VAR_5->pVtbl->Release((IMIGObject *)VAR_5);
 return (VAR_2);
}
