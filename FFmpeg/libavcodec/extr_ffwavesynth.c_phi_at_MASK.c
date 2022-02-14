
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ws_interval {int ts_start; int phi0; int dphi0; int ddphi; } ;
typedef int int64_t ;



__attribute__((used)) static uint64_t FUNC_0(struct ws_interval *VAR_0, int64_t VAR_1)
{
    uint64_t VAR_2 = VAR_1 - VAR_0->ts_start;
    uint64_t VAR_3 = VAR_2 & 1 ?
                   VAR_2 * ((VAR_2 - 1) >> 1) : (VAR_2 >> 1) * (VAR_2 - 1);
    return VAR_0->phi0 + VAR_2 * VAR_0->dphi0 + VAR_3 * VAR_0->ddphi;
}
