
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_3__ {scalar_t__* np_hist_bars; int np_hist5; int np_hist4; int np_hist3; int np_hist2; int np_hist1; } ;
typedef TYPE_1__ net_perf_t ;


 int FUNC_0 (scalar_t__,int *) ;

void
FUNC_1(net_perf_t *VAR_0, uint64_t VAR_1)
{
 if (VAR_1 <= VAR_0->np_hist_bars[0]) {
  FUNC_0(VAR_1, &VAR_0->np_hist1);
 } else if (VAR_0->np_hist_bars[0] < VAR_1 && VAR_1 <= VAR_0->np_hist_bars[1]) {
  FUNC_0(VAR_1, &VAR_0->np_hist2);
 } else if (VAR_0->np_hist_bars[1] < VAR_1 && VAR_1 <= VAR_0->np_hist_bars[2]) {
  FUNC_0(VAR_1, &VAR_0->np_hist3);
 } else if (VAR_0->np_hist_bars[2] < VAR_1 && VAR_1 <= VAR_0->np_hist_bars[3]) {
  FUNC_0(VAR_1, &VAR_0->np_hist4);
 } else if (VAR_0->np_hist_bars[3] < VAR_1) {
  FUNC_0(VAR_1, &VAR_0->np_hist5);
 }
}
