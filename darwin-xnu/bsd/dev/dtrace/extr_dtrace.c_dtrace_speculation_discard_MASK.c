
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef size_t processorid_t ;
struct TYPE_6__ {TYPE_2__* dts_speculations; scalar_t__ dts_nspeculations; } ;
typedef TYPE_1__ dtrace_state_t ;
struct TYPE_7__ {int dtsp_state; TYPE_3__* dtsp_buffer; } ;
typedef TYPE_2__ dtrace_speculation_t ;
typedef int dtrace_speculation_state_t ;
typedef int dtrace_specid_t ;
struct TYPE_8__ {scalar_t__ dtb_offset; scalar_t__ dtb_drops; } ;
typedef TYPE_3__ dtrace_buffer_t ;
struct TYPE_9__ {int cpuc_dtrace_flags; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;







 TYPE_5__* VAR_1 ;
 int FUNC_1 (int *,int,int) ;

__attribute__((used)) static void
FUNC_2(dtrace_state_t *VAR_2, processorid_t VAR_3,
    dtrace_specid_t VAR_4)
{
 dtrace_speculation_t *VAR_5;
 dtrace_speculation_state_t VAR_6, VAR_7 = 128;
 dtrace_buffer_t *VAR_8;

 if (VAR_4 == 0)
  return;

 if (VAR_4 > (dtrace_specid_t)VAR_2->dts_nspeculations) {
  VAR_1[VAR_3].cpuc_dtrace_flags |= VAR_0;
  return;
 }

 VAR_5 = &VAR_2->dts_speculations[VAR_4 - 1];
 VAR_8 = &VAR_5->dtsp_buffer[VAR_3];

 do {
  VAR_6 = VAR_5->dtsp_state;

  switch (VAR_6) {
  case 128:
  case 130:
  case 131:
  case 129:
   return;

  case 134:
  case 133:
   VAR_7 = 129;
   break;

  case 132:
   if (VAR_8->dtb_offset != 0) {
    VAR_7 = 128;
   } else {
    VAR_7 = 129;
   }
   break;

  default:
   FUNC_0(0);
  }
 } while (FUNC_1((uint32_t *)&VAR_5->dtsp_state,
     VAR_6, VAR_7) != VAR_6);

 VAR_8->dtb_offset = 0;
 VAR_8->dtb_drops = 0;
}
