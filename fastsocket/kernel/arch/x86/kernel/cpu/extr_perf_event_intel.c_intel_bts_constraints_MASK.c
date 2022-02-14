
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ freq; } ;
struct hw_perf_event {unsigned int config; int sample_period; } ;
struct perf_event {TYPE_1__ attr; struct hw_perf_event hw; } ;
struct event_constraint {int dummy; } ;
struct TYPE_4__ {unsigned int (* event_map ) (int ) ;} ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 struct event_constraint VAR_2 ;
 unsigned int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_2__ VAR_3 ;

__attribute__((used)) static struct event_constraint *
FUNC_2(struct perf_event *VAR_4)
{
 struct hw_perf_event *VAR_5 = &VAR_4->hw;
 unsigned int VAR_6, VAR_7;

 if (VAR_4->attr.freq)
  return ((void*)0);

 VAR_6 = VAR_5->config & VAR_0;
 VAR_7 = VAR_3.event_map(VAR_1);

 if (FUNC_1(VAR_6 == VAR_7 && VAR_5->sample_period == 1))
  return &VAR_2;

 return ((void*)0);
}
