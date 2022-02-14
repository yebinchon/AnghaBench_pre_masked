
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int config; } ;
struct TYPE_5__ {scalar_t__ type; int config; scalar_t__ precise_ip; } ;
struct perf_event {TYPE_1__ hw; TYPE_2__ attr; } ;
struct TYPE_6__ {int version; int (* pebs_aliases ) (struct perf_event*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct perf_event*) ;
 TYPE_3__ VAR_5 ;
 int FUNC_3 (struct perf_event*) ;

__attribute__((used)) static int FUNC_4(struct perf_event *VAR_6)
{
 int VAR_7 = FUNC_3(VAR_6);

 if (VAR_7)
  return VAR_7;

 if (VAR_6->attr.precise_ip && VAR_5.pebs_aliases)
  VAR_5.pebs_aliases(VAR_6);

 if (VAR_6->attr.type != VAR_4)
  return 0;

 if (!(VAR_6->attr.config & VAR_0))
  return 0;

 if (VAR_5.version < 3)
  return -VAR_3;

 if (FUNC_1() && !FUNC_0(VAR_1))
  return -VAR_2;

 VAR_6->hw.config |= VAR_0;

 return 0;
}
