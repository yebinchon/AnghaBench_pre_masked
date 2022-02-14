
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; } ;
struct perf_event {TYPE_1__ hw; } ;


 int VAR_0 ;
 int FUNC_0 (struct perf_event*) ;

__attribute__((used)) static void FUNC_1(struct perf_event *VAR_1)
{
 if (VAR_1->hw.state & VAR_0)
  return;

 FUNC_0(VAR_1);
}
