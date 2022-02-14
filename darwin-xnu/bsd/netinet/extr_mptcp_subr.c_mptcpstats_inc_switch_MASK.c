
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mptsub {int dummy; } ;
struct mptses {TYPE_2__* mpte_itfstats; int mpte_subflow_switches; } ;
struct TYPE_4__ {int switches; } ;
struct TYPE_3__ {int tcps_mp_switches; } ;


 int FUNC_0 (TYPE_2__*,struct mptsub const*) ;
 TYPE_1__ VAR_0 ;

void
FUNC_1(struct mptses *VAR_1, const struct mptsub *VAR_2)
{
 int VAR_3;

 VAR_0.tcps_mp_switches++;
 VAR_1->mpte_subflow_switches++;

 VAR_3 = FUNC_0(VAR_1->mpte_itfstats, VAR_2);

 if (VAR_3 != -1)
  VAR_1->mpte_itfstats[VAR_3].switches++;
}
