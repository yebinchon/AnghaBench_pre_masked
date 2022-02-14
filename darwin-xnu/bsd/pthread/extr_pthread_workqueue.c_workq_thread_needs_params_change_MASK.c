
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_3__* workq_threadreq_t ;
struct TYPE_11__ {int trp_flags; scalar_t__ trp_pri; scalar_t__ trp_pol; int trp_value; } ;
typedef TYPE_4__ workq_threadreq_param_t ;
typedef int uint16_t ;
struct TYPE_8__ {int workloop_params; } ;
struct TYPE_9__ {TYPE_1__ uus_workq_park_data; } ;
struct uthread {TYPE_2__ uu_save; } ;
struct TYPE_10__ {int tr_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__ FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static inline bool
FUNC_1(workq_threadreq_t VAR_4, struct uthread *VAR_5)
{
 workq_threadreq_param_t VAR_6, VAR_7 = { };

 VAR_6.trp_value = VAR_5->uu_save.uus_workq_park_data.workloop_params;
 if (VAR_4->tr_flags & VAR_3) {
  VAR_7 = FUNC_0(VAR_4);
 }





 uint16_t VAR_8 = (VAR_6.trp_flags & ~VAR_0);
 uint16_t VAR_9 = (VAR_7.trp_flags & ~VAR_0);

 if (!VAR_9 && !VAR_8) {
  return 0;
 }

 if (VAR_9 != VAR_8) {
  return 1;
 }

 if ((VAR_9 & VAR_2) && VAR_7.trp_pri != VAR_6.trp_pri) {
  return 1;
 }

 if ((VAR_9 & VAR_1) && VAR_6.trp_pol != VAR_6.trp_pol) {
  return 1;
 }

 return 0;
}
