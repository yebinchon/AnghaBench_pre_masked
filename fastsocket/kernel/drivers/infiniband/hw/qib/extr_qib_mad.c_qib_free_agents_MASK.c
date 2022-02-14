
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct qib_ibport {TYPE_1__* sm_ah; struct ib_mad_agent* send_agent; } ;
struct qib_ibdev {int dummy; } ;
struct qib_devdata {int num_pports; TYPE_3__* pport; } ;
struct ib_mad_agent {int dummy; } ;
struct TYPE_8__ {scalar_t__ data; } ;
struct TYPE_6__ {TYPE_4__ timer; } ;
struct TYPE_7__ {TYPE_2__ cong_stats; struct qib_ibport ibport_data; } ;
struct TYPE_5__ {int ibah; } ;


 struct qib_devdata* FUNC_0 (struct qib_ibdev*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ib_mad_agent*) ;

void FUNC_4(struct qib_ibdev *VAR_0)
{
 struct qib_devdata *VAR_1 = FUNC_0(VAR_0);
 struct ib_mad_agent *VAR_2;
 struct qib_ibport *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->num_pports; VAR_4++) {
  VAR_3 = &VAR_1->pport[VAR_4].ibport_data;
  if (VAR_3->send_agent) {
   VAR_2 = VAR_3->send_agent;
   VAR_3->send_agent = ((void*)0);
   FUNC_3(VAR_2);
  }
  if (VAR_3->sm_ah) {
   FUNC_2(&VAR_3->sm_ah->ibah);
   VAR_3->sm_ah = ((void*)0);
  }
  if (VAR_1->pport[VAR_4].cong_stats.timer.data)
   FUNC_1(&VAR_1->pport[VAR_4].cong_stats.timer);
 }
}
