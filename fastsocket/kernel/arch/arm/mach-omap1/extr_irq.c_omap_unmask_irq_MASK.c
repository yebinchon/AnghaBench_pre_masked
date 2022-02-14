
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ base_reg; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(unsigned int VAR_2)
{
 int VAR_3 = FUNC_0(VAR_2);
 u32 VAR_4;

 VAR_4 = FUNC_2(VAR_1[VAR_3].base_reg + VAR_0);
 VAR_4 &= ~(1 << FUNC_1(VAR_2));
 FUNC_3(VAR_4, VAR_1[VAR_3].base_reg + VAR_0);
}
