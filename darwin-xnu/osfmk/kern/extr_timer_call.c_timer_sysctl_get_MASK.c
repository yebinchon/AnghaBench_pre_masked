
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {int interval; int scans; int preempts; int latency; int latency_min; int latency_max; } ;
struct TYPE_6__ {int count; } ;
struct TYPE_7__ {int enqueues; int dequeues; int escalates; int scan_limit; int scan_interval; int scan_pauses; TYPE_1__ threshold; TYPE_2__ queue; } ;
typedef TYPE_3__ timer_longterm_t ;
 int VAR_0 ;







 int VAR_1 ;
 TYPE_3__ VAR_2 ;

uint64_t
FUNC_0(int VAR_3)
{
 timer_longterm_t *VAR_4 = &VAR_2;

 switch (VAR_3) {
 case 128:
  return (VAR_4->threshold.interval == VAR_1) ?
   0 : VAR_4->threshold.interval / VAR_0;
 case 132:
  return VAR_4->queue.count;
 case 139:
  return VAR_4->enqueues;
 case 140:
  return VAR_4->dequeues;
 case 138:
  return VAR_4->escalates;
 case 131:
  return VAR_4->threshold.scans;
 case 133:
  return VAR_4->threshold.preempts;
 case 137:
  return VAR_4->threshold.latency;
 case 135:
  return VAR_4->threshold.latency_min;
 case 136:
  return VAR_4->threshold.latency_max;
 case 129:
  return VAR_4->scan_limit;
 case 130:
  return VAR_4->scan_interval;
 case 134:
  return VAR_4->scan_pauses;
 default:
  return 0;
 }
}
