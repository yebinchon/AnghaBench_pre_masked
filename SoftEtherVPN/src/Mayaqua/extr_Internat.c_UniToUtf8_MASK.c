
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef size_t UINT ;
typedef int BYTE ;


 size_t FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 size_t FUNC_2 (int *) ;

UINT FUNC_3(BYTE *VAR_0, UINT VAR_1, wchar_t *VAR_2)
{
 UINT VAR_3, VAR_4, VAR_5, VAR_6;

 if (VAR_0 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }
 if (VAR_1 == 0)
 {
  VAR_1 = 0x3fffffff;
 }

 VAR_4 = FUNC_2(VAR_2);
 VAR_6 = 0;
 for (VAR_3 = 0;VAR_3 < VAR_4;VAR_3++)
 {
  BYTE VAR_7, VAR_8;
  wchar_t VAR_9 = VAR_2[VAR_3];

  if (FUNC_1())
  {
   if (sizeof(wchar_t) == 2)
   {
    VAR_7 = ((BYTE *)&VAR_9)[0];
    VAR_8 = ((BYTE *)&VAR_9)[1];
   }
   else
   {
    VAR_7 = ((BYTE *)&VAR_9)[2];
    VAR_8 = ((BYTE *)&VAR_9)[3];
   }
  }
  else
  {
   VAR_7 = ((BYTE *)&VAR_9)[1];
   VAR_8 = ((BYTE *)&VAR_9)[0];
  }

  VAR_5 = FUNC_0(VAR_2[VAR_3]);
  switch (VAR_5)
  {
  case 1:
   if (VAR_6 < VAR_1)
   {
    VAR_0[VAR_6++] = VAR_8;
   }
   break;
  case 2:
   if (VAR_6 < VAR_1)
   {
    VAR_0[VAR_6++] = 0xc0 | (((((VAR_7 & 0x07) << 2) & 0x1c)) | (((VAR_8 & 0xc0) >> 6) & 0x03));
   }
   if (VAR_6 < VAR_1)
   {
    VAR_0[VAR_6++] = 0x80 | (VAR_8 & 0x3f);
   }
   break;
  case 3:
   if (VAR_6 < VAR_1)
   {
    VAR_0[VAR_6++] = 0xe0 | (((VAR_7 & 0xf0) >> 4) & 0x0f);
   }
   if (VAR_6 < VAR_1)
   {
    VAR_0[VAR_6++] = 0x80 | (((VAR_7 & 0x0f) << 2) & 0x3c) | (((VAR_8 & 0xc0) >> 6) & 0x03);
   }
   if (VAR_6 < VAR_1)
   {
    VAR_0[VAR_6++] = 0x80 | (VAR_8 & 0x3f);
   }
   break;
  }
 }
 if (VAR_6 < VAR_1)
 {
  VAR_0[VAR_6] = 0;
 }
 return VAR_6;
}
