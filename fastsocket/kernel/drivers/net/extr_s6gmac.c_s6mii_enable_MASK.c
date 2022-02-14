
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s6gmac {scalar_t__ reg; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct s6gmac *VAR_6)
{
 FUNC_1(FUNC_0(VAR_6->reg + VAR_0) &
  ~(1 << VAR_1),
  VAR_6->reg + VAR_0);
 FUNC_1((FUNC_0(VAR_6->reg + VAR_2)
  & ~(VAR_5 << VAR_3))
  | (VAR_4 << VAR_3),
  VAR_6->reg + VAR_2);
}
