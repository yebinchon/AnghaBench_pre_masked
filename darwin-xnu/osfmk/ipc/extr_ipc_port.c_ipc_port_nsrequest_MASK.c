
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ mach_port_mscount_t ;
typedef TYPE_1__* ipc_port_t ;
struct TYPE_9__ {scalar_t__ ip_mscount; scalar_t__ ip_srights; struct TYPE_9__* ip_nsrequest; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,scalar_t__) ;

void
FUNC_4(
 ipc_port_t VAR_1,
 mach_port_mscount_t VAR_2,
 ipc_port_t VAR_3,
 ipc_port_t *VAR_4)
{
 ipc_port_t VAR_5;
 mach_port_mscount_t VAR_6;

 FUNC_0(FUNC_1(VAR_1));

 VAR_5 = VAR_1->ip_nsrequest;
 VAR_6 = VAR_1->ip_mscount;

 if ((VAR_1->ip_srights == 0) && (VAR_2 <= VAR_6) &&
     (VAR_3 != VAR_0)) {
  VAR_1->ip_nsrequest = VAR_0;
  FUNC_2(VAR_1);
  FUNC_3(VAR_3, VAR_6);
 } else {
  VAR_1->ip_nsrequest = VAR_3;
  FUNC_2(VAR_1);
 }

 *VAR_4 = VAR_5;
}
