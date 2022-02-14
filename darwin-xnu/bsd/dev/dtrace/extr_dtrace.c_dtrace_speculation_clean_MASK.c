
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int dtrace_xcall_t ;
struct TYPE_5__ {TYPE_2__* dts_speculations; scalar_t__ dts_nspeculations; } ;
typedef TYPE_1__ dtrace_state_t ;
struct TYPE_6__ {int dtsp_cleaning; scalar_t__ dtsp_state; } ;
typedef TYPE_2__ dtrace_speculation_t ;
typedef scalar_t__ dtrace_speculation_state_t ;
typedef size_t dtrace_specid_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(dtrace_state_t *VAR_5)
{
 int VAR_6 = 0;
 uint32_t VAR_7;
 dtrace_specid_t VAR_8;

 for (VAR_8 = 0; VAR_8 < (dtrace_specid_t)VAR_5->dts_nspeculations; VAR_8++) {
  dtrace_speculation_t *VAR_9 = &VAR_5->dts_speculations[VAR_8];

  FUNC_0(!VAR_9->dtsp_cleaning);

  if (VAR_9->dtsp_state != VAR_1 &&
      VAR_9->dtsp_state != VAR_0)
   continue;

  VAR_6++;
  VAR_9->dtsp_cleaning = 1;
 }

 if (!VAR_6)
  return;

 FUNC_2(VAR_3,
     (dtrace_xcall_t)VAR_4, VAR_5);






 for (VAR_8 = 0; VAR_8 < (dtrace_specid_t)VAR_5->dts_nspeculations; VAR_8++) {
  dtrace_speculation_t *VAR_10 = &VAR_5->dts_speculations[VAR_8];
  dtrace_speculation_state_t VAR_11, VAR_12;

  if (!VAR_10->dtsp_cleaning)
   continue;

  VAR_11 = VAR_10->dtsp_state;
  FUNC_0(VAR_11 == VAR_1 ||
      VAR_11 == VAR_0);

  VAR_12 = VAR_2;

  VAR_7 = FUNC_1((uint32_t *)&VAR_10->dtsp_state, VAR_11, VAR_12);
  FUNC_0(VAR_7 == VAR_11);
  VAR_10->dtsp_cleaning = 0;
 }
}
