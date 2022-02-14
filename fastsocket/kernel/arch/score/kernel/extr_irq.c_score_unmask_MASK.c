
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_3)
{
 unsigned int VAR_4 = 63 - VAR_3;

 if (VAR_4 < 32)
  FUNC_1((FUNC_0(VAR_2 + VAR_1) & ~(1 << VAR_4)), VAR_2 + VAR_1);

 else
  FUNC_1((FUNC_0(VAR_2 + VAR_0) & ~(1 << (VAR_4 - 32))), VAR_2 + VAR_0);

}
