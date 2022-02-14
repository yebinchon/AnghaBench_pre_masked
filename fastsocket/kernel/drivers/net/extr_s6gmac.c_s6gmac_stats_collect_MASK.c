
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct s6gmac_statinf {size_t net_index; int reg_off; scalar_t__ reg_size; } ;
struct s6gmac {scalar_t__ reg; int * stats; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct s6gmac *VAR_2,
  const struct s6gmac_statinf *VAR_3)
{
 int VAR_4;
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  if (VAR_3[VAR_4].reg_size) {
   VAR_2->stats[VAR_3[VAR_4].net_index] +=
    FUNC_0(VAR_2->reg + VAR_0
     + sizeof(u32) * VAR_3[VAR_4].reg_off);
  }
 }
}
