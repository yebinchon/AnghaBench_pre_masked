
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int mach_port_mscount_t ;
typedef TYPE_1__* ipc_port_t ;
struct TYPE_10__ {scalar_t__ ip_srights; scalar_t__ ip_nsrequest; int ip_mscount; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (char*,TYPE_1__*) ;

void
FUNC_8(
 ipc_port_t VAR_1)
{
 ipc_port_t VAR_2 = VAR_0;
 mach_port_mscount_t VAR_3;

 if (!FUNC_0(VAR_1))
  return;

 FUNC_3(VAR_1);

 FUNC_1(VAR_1->ip_srights > 0);
 if (VAR_1->ip_srights == 0) {
  FUNC_7("Over-release of port %p send right!", VAR_1);
 }

 VAR_1->ip_srights--;

 if (!FUNC_2(VAR_1)) {
  FUNC_5(VAR_1);
  FUNC_4(VAR_1);
  return;
 }

 if (VAR_1->ip_srights == 0 &&
     VAR_1->ip_nsrequest != VAR_0) {
  VAR_2 = VAR_1->ip_nsrequest;
  VAR_1->ip_nsrequest = VAR_0;
  VAR_3 = VAR_1->ip_mscount;
  FUNC_5(VAR_1);
  FUNC_4(VAR_1);
  FUNC_6(VAR_2, VAR_3);
 } else {
  FUNC_5(VAR_1);
  FUNC_4(VAR_1);
 }
}
