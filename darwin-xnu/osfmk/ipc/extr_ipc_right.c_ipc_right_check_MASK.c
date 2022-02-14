
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int mach_port_name_t ;
typedef int ipc_space_t ;
typedef TYPE_1__* ipc_port_t ;
typedef int ipc_object_t ;
typedef TYPE_2__* ipc_entry_t ;
typedef int ipc_entry_bits_t ;
typedef int boolean_t ;
struct TYPE_12__ {int ie_bits; scalar_t__ ie_object; int ie_request; } ;
struct TYPE_11__ {scalar_t__ ip_srights; scalar_t__ ip_sorights; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,int ,TYPE_2__*) ;
 int FUNC_7 (int ,int ,int ,TYPE_2__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int ,int ) ;
 int FUNC_9 (int ) ;

boolean_t
FUNC_10(
 ipc_space_t VAR_10,
 ipc_port_t VAR_11,
 mach_port_name_t VAR_12,
 ipc_entry_t VAR_13)
{
 ipc_entry_bits_t VAR_14;

 FUNC_2(FUNC_9(VAR_10));
 FUNC_2(VAR_11 == (ipc_port_t) VAR_13->ie_object);

 FUNC_4(VAR_11);
 if (FUNC_3(VAR_11))
  return VAR_0;



 VAR_14 = VAR_13->ie_bits;
 FUNC_2((VAR_14 & VAR_5) == 0);
 FUNC_2(FUNC_1(VAR_14) > 0);

 if (VAR_14 & VAR_6) {
                FUNC_2(FUNC_0(VAR_14) == VAR_6);
  FUNC_2(FUNC_1(VAR_14) > 0);
  FUNC_2(VAR_11->ip_srights > 0);
  VAR_11->ip_srights--;
        } else {
                FUNC_2(FUNC_0(VAR_14) == VAR_7);
                FUNC_2(FUNC_1(VAR_14) == 1);
  FUNC_2(VAR_11->ip_sorights > 0);
  VAR_11->ip_sorights--;
        }
 FUNC_5(VAR_11);





 if ((VAR_14 & VAR_6) != 0) {
  FUNC_7(VAR_10, (ipc_object_t)VAR_11, VAR_12, VAR_13);
 }


 VAR_14 = (VAR_14 &~ VAR_1) | VAR_4;
 if (VAR_13->ie_request != VAR_2) {
  if (FUNC_8(VAR_11, VAR_12, VAR_13->ie_request) != 0) {

   if (FUNC_1(VAR_14) < VAR_8)
    VAR_14++;
  }
  VAR_13->ie_request = VAR_2;
 }
 VAR_13->ie_bits = VAR_14;
 VAR_13->ie_object = VAR_3;
 FUNC_6(VAR_10, VAR_12, VAR_13);
 return VAR_9;
}
