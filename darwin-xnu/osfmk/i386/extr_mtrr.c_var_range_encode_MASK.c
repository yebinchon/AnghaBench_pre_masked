
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_3__ {int base; int mask; } ;
typedef TYPE_1__ mtrr_var_range_t ;
typedef int addr64_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(mtrr_var_range_t * VAR_3, addr64_t VAR_4,
   uint64_t VAR_5, uint32_t VAR_6, int VAR_7)
{
 VAR_3->base = (VAR_4 & VAR_1) |
        (VAR_6 & (uint32_t)VAR_2);

 VAR_3->mask = FUNC_0(VAR_5) |
        (VAR_7 ? VAR_0 : 0);
}
