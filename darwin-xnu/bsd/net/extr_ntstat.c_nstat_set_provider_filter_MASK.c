
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int32_t ;
typedef int nstat_provider_id_t ;
struct TYPE_7__ {int provider; int target_uuid; int target_pid; int events; int filter; } ;
typedef TYPE_2__ nstat_msg_add_all_srcs ;
struct TYPE_8__ {int ncs_watching; TYPE_1__* ncs_provider_filters; } ;
typedef TYPE_3__ nstat_control_state ;
typedef int errno_t ;
struct TYPE_6__ {int npf_uuid; int npf_pid; int npf_events; int npf_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static errno_t
FUNC_2(
 nstat_control_state *VAR_1,
 nstat_msg_add_all_srcs *VAR_2)
{
 nstat_provider_id_t VAR_3 = VAR_2->provider;

 u_int32_t VAR_4 = FUNC_0(&VAR_1->ncs_watching, (1 << VAR_3));

 if ((VAR_4 & (1 << VAR_3)) != 0)
  return VAR_0;

 VAR_1->ncs_watching |= (1 << VAR_3);
 VAR_1->ncs_provider_filters[VAR_3].npf_flags = VAR_2->filter;
 VAR_1->ncs_provider_filters[VAR_3].npf_events = VAR_2->events;
 VAR_1->ncs_provider_filters[VAR_3].npf_pid = VAR_2->target_pid;
 FUNC_1(VAR_1->ncs_provider_filters[VAR_3].npf_uuid, VAR_2->target_uuid);
 return 0;
}
