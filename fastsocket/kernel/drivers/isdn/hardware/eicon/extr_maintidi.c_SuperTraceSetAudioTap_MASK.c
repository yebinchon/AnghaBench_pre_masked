
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Channels; long audio_tap_mask; int trace_event_mask; } ;
typedef TYPE_1__ diva_strace_context_t ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1 (void* VAR_1, int VAR_2, int VAR_3) {
 diva_strace_context_t* VAR_4 = (diva_strace_context_t*)VAR_1;

 if ((VAR_2 < 1) || (VAR_2 > VAR_4->Channels)) {
  return (-1);
 }
 VAR_2--;

 if (VAR_3) {
  VAR_4->audio_tap_mask |= (1L << VAR_2);
 } else {
  VAR_4->audio_tap_mask &= ~(1L << VAR_2);
 }





  if (VAR_4->audio_tap_mask) {
    VAR_4->trace_event_mask |= VAR_0;
  } else {
    VAR_4->trace_event_mask &= ~VAR_0;
  }

 return (FUNC_0 (VAR_4));
}
