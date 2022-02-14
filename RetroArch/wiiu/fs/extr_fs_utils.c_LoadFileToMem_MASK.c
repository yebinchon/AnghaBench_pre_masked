
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int,int ,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (char const*,int ) ;
 int FUNC_5 (int,int *,scalar_t__) ;

int FUNC_6(const char *VAR_3, u8 **VAR_4, u32 *VAR_5)
{
   u8 *VAR_6;
   u32 VAR_7;
   int VAR_8;
   u32 VAR_9 = 0x4000;
   u32 VAR_10 = 0;
   int VAR_11 = 0;


   *VAR_4 = ((void*)0);

   if (VAR_5)
      *VAR_5 = 0;

   VAR_8 = FUNC_4(VAR_3, VAR_0);
   if (VAR_8 < 0)
      return -1;

   VAR_7 = FUNC_2(VAR_8, 0, VAR_1);
   FUNC_2(VAR_8, 0, VAR_2);

   VAR_6 = (u8 *) FUNC_3(VAR_7);
   if (VAR_6 == ((void*)0))
   {
      FUNC_0(VAR_8);
      return -2;
   }

   while(VAR_10 < VAR_7)
   {
      if (VAR_10 + VAR_9 > VAR_7)
         VAR_9 = VAR_7 - VAR_10;
      VAR_11 = FUNC_5(VAR_8, VAR_6 + VAR_10, VAR_9);
      if (VAR_11 <= 0)
         break;
      VAR_10 += VAR_11;
   }

   FUNC_0(VAR_8);

   if (VAR_10 != VAR_7)
   {
      FUNC_1(VAR_6);
      return -3;
   }

   *VAR_4 = VAR_6;


   if (VAR_5)
      *VAR_5 = VAR_7;

   return VAR_7;
}
