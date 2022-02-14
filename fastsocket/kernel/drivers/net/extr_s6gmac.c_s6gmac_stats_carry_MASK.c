
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct s6gmac_statinf {size_t net_index; int reg_size; } ;
struct s6gmac {int* carry; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct s6gmac *VAR_0,
  const struct s6gmac_statinf *VAR_1, u32 VAR_2)
{
 int VAR_3;
 while (VAR_2) {
  VAR_3 = FUNC_0(VAR_2) - 1;
  VAR_2 &= ~(1 << VAR_3);
  VAR_0->carry[VAR_1[VAR_3].net_index] += (1 << VAR_1[VAR_3].reg_size);
 }
}
