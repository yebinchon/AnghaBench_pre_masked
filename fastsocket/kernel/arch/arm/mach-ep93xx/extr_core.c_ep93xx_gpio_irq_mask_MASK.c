
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int* VAR_0 ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_1)
{
 int VAR_2 = FUNC_1(VAR_1);
 int VAR_3 = VAR_2 >> 3;

 VAR_0[VAR_3] &= ~(1 << (VAR_2 & 7));
 FUNC_0(VAR_3);
}
