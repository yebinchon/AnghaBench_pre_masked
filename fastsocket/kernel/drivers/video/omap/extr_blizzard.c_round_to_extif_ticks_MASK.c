
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int extif_clk_period; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static inline unsigned long FUNC_0(unsigned long VAR_1, int VAR_2)
{
 int VAR_3 = VAR_0.extif_clk_period * VAR_2;
 return (VAR_1 + VAR_3 - 1) / VAR_3 * VAR_3;
}
