
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (unsigned int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int,scalar_t__) ;
 unsigned int FUNC_2 (unsigned int) ;

__attribute__((used)) static void FUNC_3(unsigned int VAR_1)
{
 unsigned int VAR_2 = FUNC_2(VAR_1);
 unsigned int VAR_3 = FUNC_0(VAR_2 / 32);

 FUNC_1(1 << (VAR_2 % 32), VAR_3 + VAR_0);
}
