
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ fpga; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,unsigned int) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static inline void FUNC_2(void)
{
 unsigned VAR_2 = FUNC_0(VAR_1.fpga + 0x14);

 VAR_2 |= (1 << 7) + (VAR_0 << 8);
 FUNC_1(VAR_1.fpga + 0x14, VAR_2);
}
