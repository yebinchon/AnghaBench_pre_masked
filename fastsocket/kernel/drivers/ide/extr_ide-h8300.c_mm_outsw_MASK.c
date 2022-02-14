
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;


 int FUNC_0 (unsigned short) ;

__attribute__((used)) static void FUNC_1(unsigned long VAR_0, void *VAR_1, u32 VAR_2)
{
 unsigned short *VAR_3 = (unsigned short *)VAR_1;
 for (; VAR_2 > 0; VAR_2--, VAR_3++)
  *(volatile u16 *)VAR_0 = FUNC_0(*VAR_3);
}
