
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ mach_port_name_t ;
typedef scalar_t__ ipc_space_t ;
typedef TYPE_1__* ipc_port_t ;
typedef TYPE_2__* ipc_entry_t ;
struct TYPE_13__ {int ie_bits; scalar_t__ ie_object; } ;
struct TYPE_12__ {scalar_t__ ip_receiver_name; scalar_t__ ip_receiver; int ip_sorights; } ;


 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_2__* FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (scalar_t__) ;

ipc_port_t
FUNC_8(
 ipc_space_t VAR_3,
 mach_port_name_t VAR_4)
{
 ipc_port_t VAR_5;
 ipc_entry_t VAR_6;

 FUNC_1(FUNC_7(VAR_3));

 VAR_6 = FUNC_6(VAR_3, VAR_4);
 if (VAR_6 == VAR_0)
  return VAR_1;
 if ((VAR_6->ie_bits & VAR_2) == 0)
  return VAR_1;

 FUNC_0(VAR_5 = (ipc_port_t) VAR_6->ie_object);
 FUNC_1(VAR_5 != VAR_1);

 FUNC_3(VAR_5);
 FUNC_1(FUNC_2(VAR_5));
 FUNC_1(VAR_5->ip_receiver_name == VAR_4);
 FUNC_1(VAR_5->ip_receiver == VAR_3);

 FUNC_4(VAR_5);
 VAR_5->ip_sorights++;
 FUNC_5(VAR_5);

 return VAR_5;
}
