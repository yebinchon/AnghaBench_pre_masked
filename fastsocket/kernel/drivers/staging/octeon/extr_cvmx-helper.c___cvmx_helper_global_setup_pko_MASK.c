
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tout_val; scalar_t__ tout_enb; } ;
union cvmx_iob_fau_timeout {scalar_t__ u64; TYPE_1__ s; } ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_1(void)
{




 union cvmx_iob_fau_timeout VAR_1;
 VAR_1.u64 = 0;
 VAR_1.s.tout_val = 0xfff;
 VAR_1.s.tout_enb = 0;
 FUNC_0(VAR_0, VAR_1.u64);
 return 0;
}
