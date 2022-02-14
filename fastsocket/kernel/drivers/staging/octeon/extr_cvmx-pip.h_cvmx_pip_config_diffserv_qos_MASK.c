
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int qos; } ;
union cvmx_pip_qos_diffx {scalar_t__ u64; TYPE_1__ s; } ;
typedef int uint64_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(uint64_t VAR_0, uint64_t VAR_1)
{
 union cvmx_pip_qos_diffx VAR_2;
 VAR_2.u64 = 0;
 VAR_2.s.qos = VAR_1;
 FUNC_1(FUNC_0(VAR_0), VAR_2.u64);
}
