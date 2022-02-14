
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wchar_t ;
typedef scalar_t__ UINT ;
typedef int BYTE ;


 scalar_t__ FUNC_0 (int*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (char*) ;

UINT FUNC_3(wchar_t *VAR_0, UINT VAR_1, BYTE *VAR_2, UINT VAR_3)
{
 UINT VAR_4, VAR_5, VAR_6;

 if (VAR_0 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }
 if (VAR_1 == 0)
 {
  VAR_1 = 0x3fffffff;
 }
 if (VAR_3 == 0)
 {
  VAR_3 = FUNC_2((char *)VAR_2);
 }

 VAR_4 = 0;
 VAR_5 = 0;
 VAR_6 = 0;
 while (1)
 {
  UINT VAR_7;
  wchar_t VAR_8 = 0;
  BYTE VAR_9, VAR_10;

  VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_4);
  if (VAR_7 == 0)
  {
   break;
  }
  switch (VAR_7)
  {
  case 1:
   VAR_9 = 0;
   VAR_10 = VAR_2[VAR_4];
   break;
  case 2:
   VAR_9 = (((VAR_2[VAR_4] & 0x1c) >> 2) & 0x07);
   VAR_10 = (((VAR_2[VAR_4] & 0x03) << 6) & 0xc0) | (VAR_2[VAR_4 + 1] & 0x3f);
   break;
  case 3:
   VAR_9 = ((((VAR_2[VAR_4] & 0x0f) << 4) & 0xf0)) | (((VAR_2[VAR_4 + 1] & 0x3c) >> 2) & 0x0f);
   VAR_10 = (((VAR_2[VAR_4 + 1] & 0x03) << 6) & 0xc0) | (VAR_2[VAR_4 + 2] & 0x3f);
   break;
  }
  VAR_4 += VAR_7;

  if (FUNC_1())
  {
   if (sizeof(wchar_t) == 2)
   {
    ((BYTE *)&VAR_8)[0] = VAR_9;
    ((BYTE *)&VAR_8)[1] = VAR_10;
   }
   else
   {
    ((BYTE *)&VAR_8)[2] = VAR_9;
    ((BYTE *)&VAR_8)[3] = VAR_10;
   }
  }
  else
  {
   ((BYTE *)&VAR_8)[0] = VAR_10;
   ((BYTE *)&VAR_8)[1] = VAR_9;
  }

  if (VAR_5 < ((VAR_1 / sizeof(wchar_t)) - 1))
  {
   VAR_0[VAR_5++] = VAR_8;
   VAR_6++;
  }
  else
  {
   break;
  }
 }

 if (VAR_5 < (VAR_1 / sizeof(wchar_t)))
 {
  VAR_0[VAR_5++] = 0;
 }

 return VAR_6;
}
