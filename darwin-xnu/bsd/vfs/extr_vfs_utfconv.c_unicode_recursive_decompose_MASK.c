
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int unicode_mappings16 ;
typedef int u_int32_t ;
typedef int u_int16_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int const*,int ,int) ;

__attribute__((used)) static u_int32_t
FUNC_2(u_int16_t VAR_4, u_int16_t *VAR_5)
{
 u_int16_t VAR_6;
 u_int32_t VAR_7;
 u_int16_t VAR_8;
 u_int16_t VAR_9;
 const u_int16_t *VAR_10;
 u_int32_t VAR_11;

 VAR_6 = FUNC_1(
  (const unicode_mappings16 *)VAR_1,
  VAR_3, VAR_4);
 VAR_7 = FUNC_0(VAR_6);
 VAR_8 = VAR_6 & 0x0FFF;
 VAR_9 = VAR_8;
 VAR_10 = (VAR_7 == 1 ? &VAR_9 : VAR_2 + VAR_8);
 VAR_11 = 0;

 if (VAR_6 & VAR_0) {
     VAR_11 = FUNC_2((u_int16_t)*VAR_10, VAR_5);

     --VAR_7;
     if (!VAR_11)
      return 0;
     ++VAR_10;
     VAR_5 += VAR_11;
 }

 VAR_11 += VAR_7;

 while (VAR_7--)
  *(VAR_5++) = *(VAR_10++);

 return (VAR_11);
}
