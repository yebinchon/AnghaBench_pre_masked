
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;






 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static u32 *FUNC_3(u32 *VAR_0, int *VAR_1, int *VAR_2)
{
 u32 VAR_3;
 int VAR_4, VAR_5, VAR_6;

 *VAR_1 = 0;
 *VAR_2 = 0;

 VAR_5 = 6;
 VAR_3 = *VAR_0;
 VAR_6 = 0;

 while (1) {
  VAR_4 = (VAR_3 >> VAR_5) & 0x03;
  switch (VAR_4) {
  case 131:
   (*VAR_2)++;
  case 128:
  case 130:
   (*VAR_1)++;
  case 129:
   break;
  }

  VAR_5 -= 2;
  if (VAR_5 == 0) {
   if (!FUNC_2(VAR_3))
    return VAR_0 + 1;

   VAR_5 = 16;
   VAR_0++;
   VAR_3 = *VAR_0;
   if (!FUNC_0(VAR_3) ||
       VAR_6 != FUNC_1(VAR_3))
    return ((void*)0);

   VAR_6++;
  }
 }
}
