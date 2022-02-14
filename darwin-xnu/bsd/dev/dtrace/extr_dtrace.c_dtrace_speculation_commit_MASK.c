
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int const uint32_t ;
typedef size_t processorid_t ;
struct TYPE_15__ {TYPE_1__** dts_ecbs; scalar_t__ dts_necbs; TYPE_5__* dts_buffer; TYPE_3__* dts_speculations; scalar_t__ dts_nspeculations; } ;
typedef TYPE_2__ dtrace_state_t ;
struct TYPE_16__ {int dtsp_state; TYPE_5__* dtsp_buffer; } ;
typedef TYPE_3__ dtrace_speculation_t ;
typedef int dtrace_speculation_state_t ;
typedef int dtrace_specid_t ;
struct TYPE_17__ {int dtrh_epid; } ;
typedef TYPE_4__ dtrace_rechdr_t ;
typedef int dtrace_epid_t ;
struct TYPE_18__ {uintptr_t dtb_offset; scalar_t__ dtb_drops; int dtb_xamot_drops; scalar_t__ dtb_tomax; } ;
typedef TYPE_5__ dtrace_buffer_t ;
struct TYPE_14__ {size_t dte_size; } ;
struct TYPE_13__ {int cpuc_dtrace_flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;




 int VAR_1 ;


 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 scalar_t__ VAR_3 ;
 TYPE_10__* VAR_4 ;
 int FUNC_3 (TYPE_5__*) ;
 intptr_t FUNC_4 (TYPE_5__*,uintptr_t,int,TYPE_2__*,int *) ;
 int FUNC_5 (int const*,int const,int) ;
 int FUNC_6 () ;

__attribute__((used)) static void
FUNC_7(dtrace_state_t *VAR_5, processorid_t VAR_6,
    dtrace_specid_t VAR_7)
{
 dtrace_speculation_t *VAR_8;
 dtrace_buffer_t *VAR_9, *VAR_10;
 uintptr_t VAR_11, VAR_12, VAR_13, VAR_14;
 dtrace_speculation_state_t VAR_15, VAR_16 = 128;
 intptr_t VAR_17;
 uint64_t VAR_18;

 if (VAR_7 == 0)
  return;

 if (VAR_7 > (dtrace_specid_t)VAR_5->dts_nspeculations) {
  VAR_4[VAR_6].cpuc_dtrace_flags |= VAR_0;
  return;
 }

 VAR_8 = &VAR_5->dts_speculations[VAR_7 - 1];
 VAR_9 = &VAR_8->dtsp_buffer[VAR_6];
 VAR_10 = &VAR_5->dts_buffer[VAR_6];

 do {
  VAR_15 = VAR_8->dtsp_state;

  if (VAR_15 == VAR_1)
   break;

  switch (VAR_15) {
  case 128:
  case 129:
   return;

  case 130:







   FUNC_0(VAR_9->dtb_offset == 0);
   return;

  case 133:
   VAR_16 = 130;
   break;

  case 131:







   if (VAR_9->dtb_offset != 0) {
    VAR_16 = 130;
    break;
   }


  case 132:
   VAR_16 = VAR_1;
   break;

  default:
   FUNC_0(0);
  }
 } while (FUNC_5((uint32_t *)&VAR_8->dtsp_state,
     VAR_15, VAR_16) != VAR_15);






 if ((VAR_17 = FUNC_4(VAR_10, VAR_9->dtb_offset,
     sizeof (uint64_t), VAR_5, ((void*)0))) < 0) {
  FUNC_3(VAR_10);
  goto out;
 }
 VAR_18 = FUNC_6();
 VAR_12 = (uintptr_t)VAR_9->dtb_tomax;
 VAR_14 = VAR_12 + VAR_9->dtb_offset;
 while (VAR_12 < VAR_14) {
  size_t VAR_19;
  dtrace_rechdr_t *VAR_20 = (dtrace_rechdr_t *)VAR_12;

  if (VAR_20->dtrh_epid == VAR_2) {
   VAR_12 += sizeof (dtrace_epid_t);
   continue;
  }

  FUNC_0(VAR_20->dtrh_epid <= ((dtrace_epid_t) VAR_5->dts_necbs));
  VAR_19 = VAR_5->dts_ecbs[VAR_20->dtrh_epid - 1]->dte_size;

  FUNC_0(VAR_12 + VAR_19 <= VAR_14);
  FUNC_0(VAR_19 >= sizeof(dtrace_rechdr_t));
  FUNC_0(FUNC_1(VAR_20) == VAR_3);

  FUNC_2(VAR_20, VAR_18);

  VAR_12 += VAR_19;
 }







 VAR_11 = (uintptr_t)VAR_10->dtb_tomax + VAR_17;
 VAR_13 = VAR_11 + VAR_9->dtb_offset;
 VAR_12 = (uintptr_t)VAR_9->dtb_tomax;




 while (VAR_13 - VAR_11 >= sizeof (uint64_t)) {
  *((uint64_t *)VAR_11) = *((uint64_t *)VAR_12);

  VAR_11 += sizeof (uint64_t);
  VAR_12 += sizeof (uint64_t);
 }




 while (VAR_13 - VAR_11)
  *((uint8_t *)VAR_11++) = *((uint8_t *)VAR_12++);




 VAR_10->dtb_offset = VAR_17 + VAR_9->dtb_offset;

out:




 if (VAR_15 == 133 ||
     (VAR_15 == 131 && VAR_16 == 130)) {
  uint32_t VAR_21 = FUNC_5((uint32_t *)&VAR_8->dtsp_state,
      130, 128);
#pragma unused(rval)

 FUNC_0(VAR_21 == 130);
 }

 VAR_9->dtb_offset = 0;
 VAR_9->dtb_xamot_drops += VAR_9->dtb_drops;
 VAR_9->dtb_drops = 0;
}
