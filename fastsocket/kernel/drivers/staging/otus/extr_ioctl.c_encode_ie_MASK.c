
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int FUNC_0 (int*,int const*,int) ;
 int FUNC_1 (int*,char*,int const) ;

u32 FUNC_2(void *VAR_0, u32 VAR_1, const u8 *VAR_2, u32 VAR_3,
  const u8 *VAR_4, u32 VAR_5)
{
 u8 *VAR_6;
 u32 VAR_7;

 if (VAR_1 < VAR_5)
  return 0;
 VAR_6 = VAR_0;
 FUNC_0(VAR_6, VAR_4, VAR_5);
 VAR_1 -= VAR_5;
 VAR_6 += VAR_5;
 for (VAR_7 = 0; VAR_7 < VAR_3 && VAR_1 > 2; VAR_7++)
  VAR_6 += FUNC_1(VAR_6, "%02x", VAR_2[VAR_7]);
 return (VAR_7 == VAR_3 ? VAR_6 - (u8 *)VAR_0:0);
}
