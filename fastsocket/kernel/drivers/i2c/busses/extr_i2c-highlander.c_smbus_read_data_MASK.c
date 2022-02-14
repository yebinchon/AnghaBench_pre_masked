
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
typedef int __be16 ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(u16 *VAR_0, u8 *VAR_1, int VAR_2)
{
 for (; VAR_2 > 1; VAR_2 -= 2) {
  *(__be16 *)VAR_1 = FUNC_0(VAR_0++);
  VAR_1 += 2;
 }

 if (VAR_2)
  *VAR_1 = *VAR_0 >> 8;
}
