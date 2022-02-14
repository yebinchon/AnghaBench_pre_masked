
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (int *,int const*,size_t) ;
 int FUNC_1 (int *,int ,size_t) ;

size_t FUNC_2(u8 *VAR_0, size_t VAR_1,
    const u8 *VAR_2, size_t VAR_3,
    const u8 *VAR_4, size_t VAR_5)
{
 size_t VAR_6 = 0;

 FUNC_1(VAR_0, 0, VAR_1);

 if (VAR_2) {
  if (VAR_3 >= VAR_1) {
   FUNC_0(VAR_0, VAR_2, VAR_1);
   return VAR_1;
  }

  FUNC_0(VAR_0, VAR_2, VAR_3);
  VAR_6 += VAR_3;
 }

 if (VAR_4) {
  if (VAR_6 + VAR_5 >= VAR_1) {
   FUNC_0(VAR_0 + VAR_6, VAR_4, VAR_1 - VAR_6);
   return VAR_1;
  }

  FUNC_0(VAR_0 + VAR_6, VAR_4, VAR_5);
  VAR_6 += VAR_5;
 }

 return VAR_6;
}
