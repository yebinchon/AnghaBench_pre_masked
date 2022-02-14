
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef TYPE_1__* thread_t ;
typedef scalar_t__ ipc_port_t ;
typedef scalar_t__ ipc_object_t ;
typedef int boolean_t ;
struct TYPE_3__ {scalar_t__ turnstile; scalar_t__ ith_state; int ith_option; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 () ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int ,int ) ;

void
FUNC_5(ipc_object_t VAR_13)
{
 thread_t VAR_14 = FUNC_2();
 ipc_port_t VAR_15 = VAR_4;
 boolean_t VAR_16 = VAR_14->turnstile ? VAR_0 : VAR_11;

 if (FUNC_3(VAR_13) == VAR_1) {
  FUNC_0(VAR_15 = (ipc_port_t) VAR_13);
 } else {
  FUNC_1(VAR_14->turnstile != VAR_12);
  return;
 }

 uint8_t VAR_17 = VAR_2;




 if (!((VAR_14->ith_state == VAR_10 && VAR_14->ith_option & VAR_7) ||
  VAR_14->ith_state == VAR_6 ||
  VAR_14->ith_state == VAR_9 ||
  VAR_14->ith_state == VAR_8 ||
  VAR_14->ith_state == VAR_5)) {

  VAR_17 |= VAR_3;
 }

 FUNC_4(VAR_15,
  VAR_17, VAR_16);

}
