
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ipd_en; int len_m8; } ;
union cvmx_ipd_ctl_status {int u64; TYPE_1__ s; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static inline void FUNC_4(void)
{
 union cvmx_ipd_ctl_status VAR_3;
 VAR_3.u64 = FUNC_2(VAR_0);
 if (VAR_3.s.ipd_en) {
  FUNC_1
      ("Warning: Enabling IPD when IPD already enabled.\n");
 }
 VAR_3.s.ipd_en = 1;




 FUNC_3(VAR_0, VAR_3.u64);
}
