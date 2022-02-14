
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* data; void* addr; } ;
union cvmx_pescx_cfg_wr {scalar_t__ u64; TYPE_1__ s; } ;
typedef void* uint32_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(int VAR_0, uint32_t VAR_1,
     uint32_t VAR_2)
{
 union cvmx_pescx_cfg_wr VAR_3;
 VAR_3.u64 = 0;
 VAR_3.s.addr = VAR_1;
 VAR_3.s.data = VAR_2;
 FUNC_1(FUNC_0(VAR_0), VAR_3.u64);
}
