
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct timeval {unsigned long long tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_3__ {int np_total_pkts; int np_total_usecs; } ;
typedef TYPE_1__ net_perf_t ;


 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (struct timeval*,struct timeval*,struct timeval*) ;

__attribute__((used)) static void
FUNC_2(net_perf_t *VAR_0, struct timeval *VAR_1, struct timeval *VAR_2, uint64_t VAR_3)
{
 struct timeval VAR_4;
 uint64_t VAR_5;
 FUNC_1(VAR_2, VAR_1, &VAR_4);
 VAR_5 = VAR_4.tv_sec * 1000000ULL + VAR_4.tv_usec;
 FUNC_0(VAR_5, &VAR_0->np_total_usecs);
 FUNC_0(VAR_3, &VAR_0->np_total_pkts);
}
