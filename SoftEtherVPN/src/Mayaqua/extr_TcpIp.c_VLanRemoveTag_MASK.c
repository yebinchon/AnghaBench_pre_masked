
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int USHORT ;
typedef int UINT ;
typedef scalar_t__ UCHAR ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__*) ;

bool FUNC_2(void **VAR_1, UINT *VAR_2, UINT VAR_3, UINT VAR_4)
{
 UCHAR *VAR_5;
 UINT VAR_6;
 USHORT VAR_7;
 UCHAR *VAR_8;

 if (VAR_1 == ((void*)0) || *VAR_1 == ((void*)0) || VAR_2 == ((void*)0) ||
  *VAR_2 < 14)
 {
  return 0;
 }

 if (VAR_4 == 0)
 {
  VAR_4 = VAR_0;
 }

 VAR_7 = FUNC_0((USHORT)VAR_4);
 VAR_8 = (UCHAR *)(&VAR_7);

 VAR_5 = (UCHAR *)(*VAR_1);
 VAR_6 = *VAR_2;

 if (VAR_5[12] == VAR_8[0] && VAR_5[13] == VAR_8[1])
 {
  if (VAR_6 >= 18)
  {
   USHORT VAR_9;

   VAR_9 = FUNC_1(&VAR_5[14]);
   VAR_9 = VAR_9 & 0xFFF;

   if (VAR_3 == 0 || (VAR_9 == VAR_3))
   {
    UINT VAR_10 = VAR_6 - 4;
    UINT VAR_11;

    for (VAR_11 = 12;VAR_11 < VAR_10;VAR_11++)
    {
     VAR_5[VAR_11] = VAR_5[VAR_11 + 4];
    }

    *VAR_2 = VAR_10;

    return 1;
   }
  }
 }

 return 0;
}
