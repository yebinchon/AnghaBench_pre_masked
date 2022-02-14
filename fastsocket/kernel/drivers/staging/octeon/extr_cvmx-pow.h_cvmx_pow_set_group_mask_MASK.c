
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int grp_msk; } ;
union cvmx_pow_pp_grp_mskx {int u64; TYPE_1__ s; } ;
typedef int uint64_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static inline void FUNC_3(uint64_t VAR_0, uint64_t VAR_1)
{
 union cvmx_pow_pp_grp_mskx VAR_2;

 VAR_2.u64 = FUNC_1(FUNC_0(VAR_0));
 VAR_2.s.grp_msk = VAR_1;
 FUNC_2(FUNC_0(VAR_0), VAR_2.u64);
}
