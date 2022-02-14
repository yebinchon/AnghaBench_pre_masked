
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef unsigned long u8 ;


 int FUNC_0 (int) ;

__attribute__((used)) static
unsigned long FUNC_1(u8 *VAR_0, size_t VAR_1, size_t VAR_2)
{
 unsigned long VAR_3 = 0;
 size_t VAR_4 = VAR_1 + VAR_2;

 FUNC_0(VAR_2 > sizeof(VAR_3));

 while (VAR_1 < VAR_4) {
  VAR_3 <<= 8;
  VAR_3 |= VAR_0[VAR_4 - 1];
  VAR_4--;
 }
 VAR_3 <<= 8 * (sizeof(VAR_3) - VAR_2);
 return VAR_3;
}
