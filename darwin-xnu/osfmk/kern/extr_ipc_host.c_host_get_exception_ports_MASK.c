
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__* thread_state_flavor_array_t ;
typedef unsigned int mach_msg_type_number_t ;
typedef int kern_return_t ;
typedef TYPE_2__* host_priv_t ;
typedef scalar_t__* exception_port_array_t ;
typedef int exception_mask_t ;
typedef int* exception_mask_array_t ;
typedef scalar_t__* exception_behavior_array_t ;
struct TYPE_9__ {TYPE_1__* exc_actions; } ;
struct TYPE_8__ {scalar_t__ port; scalar_t__ behavior; scalar_t__ flavor; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 TYPE_2__ VAR_6 ;

kern_return_t
FUNC_4(
 host_priv_t VAR_7,
 exception_mask_t VAR_8,
 exception_mask_array_t VAR_9,
 mach_msg_type_number_t * VAR_10,
 exception_port_array_t VAR_11,
 exception_behavior_array_t VAR_12,
 thread_state_flavor_array_t VAR_13 )
{
 unsigned int VAR_14, VAR_15, VAR_16;

 if (VAR_7 == VAR_3)
  return VAR_4;

 if (VAR_8 & ~VAR_0) {
  return VAR_4;
 }

 FUNC_0 (VAR_7 == &VAR_6);

 FUNC_1(VAR_7);

 VAR_16 = 0;

 for (VAR_14 = VAR_2; VAR_14 < VAR_1; VAR_14++) {
  if (VAR_8 & (1 << VAR_14)) {
   for (VAR_15 = 0; VAR_15 < VAR_16; VAR_15++) {




    if (VAR_7->exc_actions[VAR_14].port == VAR_11[VAR_15] &&
     VAR_7->exc_actions[VAR_14].behavior == VAR_12[VAR_15]
      && VAR_7->exc_actions[VAR_14].flavor == VAR_13[VAR_15])
    {
     VAR_9[VAR_15] |= (1 << VAR_14);
     break;
    }
   }
   if (VAR_15 == VAR_16) {
    VAR_9[VAR_15] = (1 << VAR_14);
    VAR_11[VAR_15] =
      FUNC_3(VAR_7->exc_actions[VAR_14].port);
    VAR_12[VAR_15] = VAR_7->exc_actions[VAR_14].behavior;
    VAR_13[VAR_15] = VAR_7->exc_actions[VAR_14].flavor;
    VAR_16++;
    if (VAR_16 > *VAR_10) {
     break;
    }
   }
  }
 }
 FUNC_2(VAR_7);

 *VAR_10 = VAR_16;
 return VAR_5;
}
