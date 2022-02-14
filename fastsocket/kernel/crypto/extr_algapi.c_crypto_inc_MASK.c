
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int __be32 ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,unsigned int) ;

void FUNC_3(u8 *VAR_0, unsigned int VAR_1)
{
 __be32 *VAR_2 = (__be32 *)(VAR_0 + VAR_1);
 u32 VAR_3;

 for (; VAR_1 >= 4; VAR_1 -= 4) {
  VAR_3 = FUNC_0(*--VAR_2) + 1;
  *VAR_2 = FUNC_1(VAR_3);
  if (VAR_3)
   return;
 }

 FUNC_2(VAR_0, VAR_1);
}
