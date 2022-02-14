
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct s6gmac {scalar_t__ reg; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct s6gmac*,int *,scalar_t__) ;
 scalar_t__ FUNC_2 (struct s6gmac*,int) ;
 int ** VAR_0 ;
 int FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static inline void FUNC_4(struct s6gmac *VAR_1, int VAR_2)
{
 u32 VAR_3;
 VAR_3 = FUNC_2(VAR_1, VAR_2);
 if (VAR_3) {
  FUNC_3(VAR_3, VAR_1->reg + FUNC_0(VAR_2));
  FUNC_1(VAR_1, &VAR_0[VAR_2][0], VAR_3);
 }
}
