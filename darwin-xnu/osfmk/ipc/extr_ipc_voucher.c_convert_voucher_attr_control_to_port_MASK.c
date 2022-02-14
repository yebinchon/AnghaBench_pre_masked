
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef TYPE_1__* ipc_voucher_attr_control_t ;
typedef TYPE_2__* ipc_port_t ;
typedef scalar_t__ ipc_kobject_t ;
struct TYPE_25__ {scalar_t__ ip_kobject; int ip_srights; int ip_mscount; struct TYPE_25__* ip_nsrequest; } ;
struct TYPE_24__ {TYPE_2__* ivac_port; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_2__*,TYPE_2__**) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,scalar_t__,scalar_t__) ;
 TYPE_2__* FUNC_8 () ;
 int FUNC_9 (TYPE_2__*) ;
 TYPE_2__* FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*,int ,int ,TYPE_2__**) ;
 int FUNC_13 (TYPE_1__*) ;

ipc_port_t
FUNC_14(ipc_voucher_attr_control_t VAR_3)
{
 ipc_port_t VAR_4, VAR_5;

 if (VAR_2 == VAR_3)
  return (VAR_1);


 VAR_4 = VAR_3->ivac_port;
 if (!FUNC_0(VAR_4)) {
  VAR_4 = FUNC_8();
  FUNC_2(FUNC_0(VAR_4));
  if (FUNC_1(VAR_1, VAR_4, &VAR_3->ivac_port)) {
   FUNC_5(VAR_4);
   FUNC_7(VAR_4, (ipc_kobject_t) VAR_3, VAR_0);
  } else {
   FUNC_9(VAR_4);
   VAR_4 = VAR_3->ivac_port;
   FUNC_5(VAR_4);
   FUNC_2(FUNC_4(VAR_4) == VAR_0);
   FUNC_2(VAR_4->ip_kobject == (ipc_kobject_t)VAR_3);
  }
 } else
  FUNC_5(VAR_4);

 FUNC_2(FUNC_3(VAR_4));
 VAR_5 = FUNC_10(VAR_4);

 if (1 == VAR_4->ip_srights) {
  ipc_port_t VAR_6;


  FUNC_2(VAR_1 == VAR_4->ip_nsrequest);
  FUNC_12(VAR_4, VAR_4->ip_mscount, FUNC_11(VAR_4), &VAR_6);
  FUNC_2(VAR_1 == VAR_6);

 } else {

  FUNC_6(VAR_4);
  FUNC_13(VAR_3);
 }
 return (VAR_5);
}
