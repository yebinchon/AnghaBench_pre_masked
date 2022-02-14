
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int const) ;

__attribute__((used)) static u16 FUNC_2(const u32 *VAR_0, size_t VAR_1)
{
 int VAR_2;
 u32 VAR_3;
 u16 VAR_4, VAR_5 = 0;

 for (; VAR_1; VAR_1--) {
  VAR_3 = FUNC_1(*VAR_0);
  VAR_0++;
  for (VAR_2 = 28; VAR_2 >= 0; VAR_2 -= 4 ) {
   VAR_4 = ((VAR_5 >> 12) ^ (VAR_3 >> VAR_2)) & 0xf;
   VAR_5 = (VAR_5 << 4) ^ (VAR_4 << 12) ^ (VAR_4 << 5) ^ (VAR_4);
  }
  VAR_5 &= 0xffff;
 }

 return FUNC_0(VAR_5);
}
