
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ipd_en; } ;
union cvmx_ipd_ctl_status {int u64; TYPE_1__ s; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static inline void FUNC_2(void)
{
 union cvmx_ipd_ctl_status VAR_1;
 VAR_1.u64 = FUNC_0(VAR_0);
 VAR_1.s.ipd_en = 0;
 FUNC_1(VAR_0, VAR_1.u64);
}
