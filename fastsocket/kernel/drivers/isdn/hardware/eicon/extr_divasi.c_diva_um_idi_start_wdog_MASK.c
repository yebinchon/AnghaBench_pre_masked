
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int diva_timer_id; } ;
typedef TYPE_1__ diva_um_idi_os_context_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,scalar_t__) ;

void FUNC_2(void *VAR_2)
{
 diva_um_idi_os_context_t *VAR_3;

 if (VAR_2 &&
     ((VAR_3 =
       (diva_um_idi_os_context_t *)
       FUNC_0(VAR_2)))) {
  FUNC_1(&VAR_3->diva_timer_id, VAR_1 + 10 * VAR_0);
 }
}
