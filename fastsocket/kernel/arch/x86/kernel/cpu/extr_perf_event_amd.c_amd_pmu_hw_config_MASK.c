
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; int config; scalar_t__ exclude_guest; scalar_t__ exclude_host; } ;
struct TYPE_3__ {int config; } ;
struct perf_event {TYPE_2__ attr; TYPE_1__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct perf_event*) ;

__attribute__((used)) static int FUNC_1(struct perf_event *VAR_6)
{
 int VAR_7 = FUNC_0(VAR_6);

 if (VAR_7)
  return VAR_7;

 if (VAR_6->attr.exclude_host && VAR_6->attr.exclude_guest)





  VAR_6->hw.config &= ~(VAR_4 |
          VAR_3);
 else if (VAR_6->attr.exclude_host)
  VAR_6->hw.config |= VAR_1;
 else if (VAR_6->attr.exclude_guest)
  VAR_6->hw.config |= VAR_2;

 if (VAR_6->attr.type != VAR_5)
  return 0;

 VAR_6->hw.config |= VAR_6->attr.config & VAR_0;

 return 0;
}
