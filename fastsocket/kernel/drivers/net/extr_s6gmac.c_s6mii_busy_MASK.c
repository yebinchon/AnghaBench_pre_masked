
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s6gmac {scalar_t__ reg; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct s6gmac *VAR_2, int VAR_3)
{
 while (FUNC_0(VAR_2->reg + VAR_1)) {
  if (--VAR_3 == 0)
   return -VAR_0;
  FUNC_1(64);
 }
 return 0;
}
