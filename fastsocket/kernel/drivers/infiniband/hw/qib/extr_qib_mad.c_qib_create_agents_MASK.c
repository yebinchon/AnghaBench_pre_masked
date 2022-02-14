
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct qib_ibport {struct ib_mad_agent* send_agent; } ;
struct qib_ibdev {int ibdev; } ;
struct qib_devdata {int num_pports; TYPE_2__* pport; } ;
struct ib_mad_agent {int dummy; } ;
struct TYPE_7__ {unsigned long data; scalar_t__ expires; int function; } ;
struct TYPE_5__ {TYPE_3__ timer; scalar_t__ counter; } ;
struct TYPE_6__ {struct qib_ibport ibport_data; TYPE_1__ cong_stats; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ib_mad_agent*) ;
 int FUNC_1 (struct ib_mad_agent*) ;
 int FUNC_2 (TYPE_3__*) ;
 struct qib_devdata* FUNC_3 (struct qib_ibdev*) ;
 struct ib_mad_agent* FUNC_4 (int *,int,int ,int *,int ,int ,int *,int *) ;
 int FUNC_5 (struct ib_mad_agent*) ;
 int FUNC_6 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_7(struct qib_ibdev *VAR_3)
{
 struct qib_devdata *VAR_4 = FUNC_3(VAR_3);
 struct ib_mad_agent *VAR_5;
 struct qib_ibport *VAR_6;
 int VAR_7;
 int VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_4->num_pports; VAR_7++) {
  VAR_6 = &VAR_4->pport[VAR_7].ibport_data;
  VAR_5 = FUNC_4(&VAR_3->ibdev, VAR_7 + 1, VAR_0,
           ((void*)0), 0, VAR_1,
           ((void*)0), ((void*)0));
  if (FUNC_0(VAR_5)) {
   VAR_8 = FUNC_1(VAR_5);
   goto err;
  }


  VAR_4->pport[VAR_7].cong_stats.counter = 0;
  FUNC_6(&VAR_4->pport[VAR_7].cong_stats.timer);
  VAR_4->pport[VAR_7].cong_stats.timer.function = VAR_2;
  VAR_4->pport[VAR_7].cong_stats.timer.data =
   (unsigned long)(&VAR_4->pport[VAR_7]);
  VAR_4->pport[VAR_7].cong_stats.timer.expires = 0;
  FUNC_2(&VAR_4->pport[VAR_7].cong_stats.timer);

  VAR_6->send_agent = VAR_5;
 }

 return 0;

err:
 for (VAR_7 = 0; VAR_7 < VAR_4->num_pports; VAR_7++) {
  VAR_6 = &VAR_4->pport[VAR_7].ibport_data;
  if (VAR_6->send_agent) {
   VAR_5 = VAR_6->send_agent;
   VAR_6->send_agent = ((void*)0);
   FUNC_5(VAR_5);
  }
 }

 return VAR_8;
}
