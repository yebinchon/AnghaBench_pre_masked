
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct hw_perf_event {int dummy; } ;
struct cpu_hw_events {int pcr; } ;
struct TYPE_2__ {int (* write ) (int ) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline void FUNC_3(struct cpu_hw_events *VAR_1, struct hw_perf_event *VAR_2, int VAR_3)
{
 u64 VAR_4 = FUNC_0(VAR_3);
 u64 VAR_5 = FUNC_1(VAR_3);
 u64 VAR_6;

 VAR_6 = VAR_1->pcr;
 VAR_6 &= ~VAR_4;
 VAR_6 |= VAR_5;
 VAR_1->pcr = VAR_6;

 VAR_0->write(VAR_1->pcr);
}
