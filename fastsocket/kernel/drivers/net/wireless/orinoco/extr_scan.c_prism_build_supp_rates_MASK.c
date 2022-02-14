
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(u8 *VAR_2, const u8 *VAR_3)
{
 int VAR_4;

 VAR_2[0] = VAR_1;
 for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {

  if (VAR_3[VAR_4] == 0x0)
   break;
  VAR_2[VAR_4 + 2] = VAR_3[VAR_4];
 }
 VAR_2[1] = VAR_4;



 if (VAR_4 == 8 && VAR_3[VAR_4] > 0) {
  VAR_2[10] = VAR_0;
  for (; VAR_4 < 10; VAR_4++) {

   if (VAR_3[VAR_4] == 0x0)
    break;
   VAR_2[VAR_4 + 2] = VAR_3[VAR_4];
  }
  VAR_2[11] = VAR_4 - 8;
 }

 return (VAR_4 < 8) ? VAR_4 + 2 : VAR_4 + 4;
}
