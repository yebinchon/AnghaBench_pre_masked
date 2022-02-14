
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int* np_hist_bars; } ;
typedef TYPE_1__ net_perf_t ;


 int VAR_0 ;
 int FUNC_0 (int**,int) ;

__attribute__((used)) static void
FUNC_1(net_perf_t *VAR_1, uint64_t VAR_2)
{
 FUNC_0(&VAR_1->np_hist_bars, sizeof(VAR_1->np_hist_bars));

 for (int VAR_3 = 1, VAR_4 = 0; VAR_3 <= 64 && VAR_4 < VAR_0; VAR_3++) {
  if (VAR_2 & 0x1) {
   VAR_1->np_hist_bars[VAR_4] = VAR_3;
   VAR_4++;
  }
  VAR_2 >>= 1;
 }
}
