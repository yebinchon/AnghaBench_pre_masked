
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int dtrace_vstate_t ;
struct TYPE_8__ {int dtms_access; TYPE_1__* dtms_difo; } ;
typedef TYPE_2__ dtrace_mstate_t ;
struct TYPE_10__ {size_t cpu_id; } ;
struct TYPE_9__ {scalar_t__ cpuc_dtrace_illval; } ;
struct TYPE_7__ {size_t dtdo_strlen; scalar_t__ dtdo_strtab; } ;


 TYPE_6__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__,size_t,uintptr_t,size_t) ;
 int FUNC_2 (size_t*,scalar_t__,scalar_t__,size_t) ;
 TYPE_5__* VAR_3 ;
 scalar_t__ FUNC_3 (scalar_t__,size_t,size_t*,TYPE_2__*,int *) ;

__attribute__((used)) static int
FUNC_4(uint64_t VAR_4, size_t VAR_5, size_t *VAR_6,
 dtrace_mstate_t *VAR_7, dtrace_vstate_t *VAR_8)
{
 volatile uint64_t *VAR_9 = &VAR_3[VAR_0->cpu_id].cpuc_dtrace_illval;





 if ((VAR_7->dtms_access & VAR_2) != 0) {
  FUNC_2(VAR_6, VAR_4, VAR_4, VAR_5);
  return (1);
 }




 if (FUNC_3(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8))
  return (1);




 if (FUNC_1(VAR_4, VAR_5, (uintptr_t)VAR_7->dtms_difo->dtdo_strtab,
     VAR_7->dtms_difo->dtdo_strlen)) {
  FUNC_2(VAR_6, VAR_4,
   VAR_7->dtms_difo->dtdo_strtab,
   VAR_7->dtms_difo->dtdo_strlen);
  return (1);
 }

 FUNC_0(VAR_1);
 *VAR_9 = VAR_4;
 return (0);
}
