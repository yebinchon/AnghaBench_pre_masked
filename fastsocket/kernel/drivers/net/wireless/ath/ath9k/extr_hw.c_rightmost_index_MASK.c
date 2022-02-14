
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_gen_timer_table {int* gen_timer_index; } ;


 int VAR_0 ;

__attribute__((used)) static u32 FUNC_0(struct ath_gen_timer_table *VAR_1, u32 *VAR_2)
{
 u32 VAR_3;

 VAR_3 = *VAR_2;
 VAR_3 &= (0-VAR_3);
 *VAR_2 &= ~VAR_3;
 VAR_3 *= VAR_0;
 VAR_3 >>= 27;

 return VAR_1->gen_timer_index[VAR_3];
}
