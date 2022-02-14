
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hw_perf_event_extra {int idx; int config; } ;
struct hw_perf_event {int config; struct hw_perf_event_extra extra_reg; } ;
struct perf_event {struct hw_perf_event hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (int,int ,int) ;
 scalar_t__ VAR_4 ;

u64 FUNC_3(struct perf_event *VAR_5, int VAR_6, bool VAR_7)
{
 struct hw_perf_event *VAR_8 = &VAR_5->hw;
 struct hw_perf_event_extra *VAR_9 = &VAR_8->extra_reg;
 int VAR_10, VAR_11 = FUNC_2(VAR_9->idx, 0, 8);
 u64 VAR_12 = VAR_9->config;


 VAR_10 = VAR_11 - VAR_0;
 if (VAR_4)
  VAR_12 &= FUNC_0(VAR_10);
 else
  VAR_12 &= FUNC_1(VAR_10);
 if (VAR_6 > VAR_11) {
  VAR_10 = VAR_6 - VAR_11;
  VAR_12 <<= 3 * VAR_10;
 } else {
  VAR_10 = VAR_11 - VAR_6;
  VAR_12 >>= 3 * VAR_10;
 }


 if (VAR_4)
  VAR_12 |= VAR_2 & VAR_9->config;
 else
  VAR_12 |= VAR_3 & VAR_9->config;
 VAR_12 |= VAR_2 & VAR_9->config;
 if (VAR_7) {

  if (VAR_6 > VAR_11)
   VAR_8->config += VAR_10 << VAR_1;
  else
   VAR_8->config -= VAR_10 << VAR_1;
  VAR_9->config = VAR_12;
  VAR_9->idx = ~0xff | VAR_6;
 }
 return VAR_12;
}
