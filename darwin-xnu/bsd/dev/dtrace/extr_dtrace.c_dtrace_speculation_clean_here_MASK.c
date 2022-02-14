
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t processorid_t ;
struct TYPE_7__ {TYPE_2__* dts_speculations; scalar_t__ dts_nspeculations; TYPE_3__* dts_buffer; } ;
typedef TYPE_1__ dtrace_state_t ;
struct TYPE_8__ {scalar_t__ dtsp_state; TYPE_3__* dtsp_buffer; } ;
typedef TYPE_2__ dtrace_speculation_t ;
typedef size_t dtrace_specid_t ;
typedef int dtrace_icookie_t ;
struct TYPE_9__ {scalar_t__ dtb_offset; int * dtb_tomax; } ;
typedef TYPE_3__ dtrace_buffer_t ;
struct TYPE_10__ {size_t cpu_id; } ;


 TYPE_6__* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,size_t,size_t) ;

__attribute__((used)) static void
FUNC_3(dtrace_state_t *VAR_3)
{
 dtrace_icookie_t VAR_4;
 processorid_t VAR_5 = VAR_0->cpu_id;
 dtrace_buffer_t *VAR_6 = &VAR_3->dts_buffer[VAR_5];
 dtrace_specid_t VAR_7;

 VAR_4 = FUNC_0();

 if (VAR_6->dtb_tomax == ((void*)0)) {
  FUNC_1(VAR_4);
  return;
 }

 for (VAR_7 = 0; VAR_7 < (dtrace_specid_t)VAR_3->dts_nspeculations; VAR_7++) {
  dtrace_speculation_t *VAR_8 = &VAR_3->dts_speculations[VAR_7];
  dtrace_buffer_t *VAR_9 = &VAR_8->dtsp_buffer[VAR_5];

  if (VAR_9->dtb_tomax == ((void*)0))
   continue;

  if (VAR_8->dtsp_state == VAR_2) {
   VAR_9->dtb_offset = 0;
   continue;
  }

  if (VAR_8->dtsp_state != VAR_1)
   continue;

  if (VAR_9->dtb_offset == 0)
   continue;

  FUNC_2(VAR_3, VAR_5, VAR_7 + 1);
 }

 FUNC_1(VAR_4);
}
