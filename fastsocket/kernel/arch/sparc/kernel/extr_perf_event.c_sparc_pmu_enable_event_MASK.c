
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct hw_perf_event {int config; } ;
struct cpu_hw_events {int pcr; } ;
struct TYPE_2__ {int (* write ) (int ) ;} ;


 int FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline void FUNC_2(struct cpu_hw_events *VAR_1, struct hw_perf_event *VAR_2, int VAR_3)
{
 u64 VAR_4, VAR_5 = FUNC_0(VAR_3);

 VAR_4 = VAR_1->pcr;
 VAR_4 &= ~VAR_5;
 VAR_4 |= VAR_2->config;
 VAR_1->pcr = VAR_4;

 VAR_0->write(VAR_1->pcr);
}
