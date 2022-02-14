
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int data; int addr; } ;
union cvmx_pescx_cfg_rd {TYPE_1__ s; scalar_t__ u64; } ;
typedef int uint32_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static uint32_t FUNC_3(int VAR_0, uint32_t VAR_1)
{
 union cvmx_pescx_cfg_rd VAR_2;
 VAR_2.u64 = 0;
 VAR_2.s.addr = VAR_1;
 FUNC_2(FUNC_0(VAR_0), VAR_2.u64);
 VAR_2.u64 = FUNC_1(FUNC_0(VAR_0));
 return VAR_2.s.data;
}
