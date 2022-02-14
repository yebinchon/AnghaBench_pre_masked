
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BYTE ;


 char FUNC_0 (int) ;
 scalar_t__ VAR_0 ;

int FUNC_1(char *VAR_1, char *VAR_2, int VAR_3)
{
 BYTE *VAR_4;
 int VAR_5,VAR_6;
 VAR_4 = (BYTE *)VAR_2;
 VAR_6 = 0;
 VAR_5 = 0;
 if (!VAR_3)
 {
  return 0;
 }
 while (VAR_0)
 {
  if (VAR_5 >= VAR_3)
  {
   return VAR_6;
  }
  if (VAR_1)
  {
   VAR_1[VAR_6] = FUNC_0((VAR_4[VAR_5]) >> 2);
  }
  if (VAR_5 + 1 >= VAR_3)
  {
   if (VAR_1)
   {
    VAR_1[VAR_6 + 1] = FUNC_0((VAR_4[VAR_5] & 0x03) << 4);
    VAR_1[VAR_6 + 2] = '=';
    VAR_1[VAR_6 + 3] = '=';
   }
   return VAR_6 + 4;
  }
  if (VAR_1)
  {
   VAR_1[VAR_6 + 1] = FUNC_0(((VAR_4[VAR_5] & 0x03) << 4) + ((VAR_4[VAR_5 + 1] >> 4)));
  }
  if (VAR_5 + 2 >= VAR_3)
  {
   if (VAR_1)
   {
    VAR_1[VAR_6 + 2] = FUNC_0((VAR_4[VAR_5 + 1] & 0x0f) << 2);
    VAR_1[VAR_6 + 3] = '=';
   }
   return VAR_6 + 4;
  }
  if (VAR_1)
  {
   VAR_1[VAR_6 + 2] = FUNC_0(((VAR_4[VAR_5 + 1] & 0x0f) << 2) + ((VAR_4[VAR_5 + 2] >> 6)));
   VAR_1[VAR_6 + 3] = FUNC_0(VAR_4[VAR_5 + 2] & 0x3f);
  }
  VAR_5 += 3;
  VAR_6 += 4;
 }
}
