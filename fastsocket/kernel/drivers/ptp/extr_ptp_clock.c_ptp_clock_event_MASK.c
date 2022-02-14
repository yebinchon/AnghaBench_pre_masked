
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pps_event_time {int dummy; } ;
struct ptp_clock_event {int type; struct pps_event_time pps_times; } ;
struct ptp_clock {int pps_source; int tsev_wq; int tsevq; } ;






 int VAR_0 ;
 int FUNC_0 (int *,struct ptp_clock_event*) ;
 int FUNC_1 (int ,struct pps_event_time*,int ,int *) ;
 int FUNC_2 (struct pps_event_time*) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct ptp_clock *VAR_1, struct ptp_clock_event *VAR_2)
{
 struct pps_event_time VAR_3;

 switch (VAR_2->type) {

 case 131:
  break;

 case 130:
  FUNC_0(&VAR_1->tsevq, VAR_2);
  FUNC_3(&VAR_1->tsev_wq);
  break;

 case 129:
  FUNC_2(&VAR_3);
  FUNC_1(VAR_1->pps_source, &VAR_3, VAR_0, ((void*)0));
  break;

 case 128:
  FUNC_1(VAR_1->pps_source, &VAR_2->pps_times,
     VAR_0, ((void*)0));
  break;
 }
}
