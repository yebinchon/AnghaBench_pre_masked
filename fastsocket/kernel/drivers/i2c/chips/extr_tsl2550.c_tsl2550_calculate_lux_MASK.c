
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u16 ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;

__attribute__((used)) static int FUNC_0(u8 VAR_4, u8 VAR_5)
{
 unsigned int VAR_6;


 u16 VAR_7 = VAR_2[VAR_4];
 u16 VAR_8 = VAR_2[VAR_5];





 u8 VAR_9 = 128;


 if (VAR_8 <= VAR_7)
  if (VAR_7) {
   VAR_9 = VAR_8 * 128 / VAR_7;


   VAR_6 = ((VAR_7 - VAR_8) * VAR_3[VAR_9]) / 256;
  } else
   VAR_6 = 0;
 else
  return -VAR_0;


 return VAR_6 > VAR_1 ? VAR_1 : VAR_6;
}
