
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stbtt_uint8 ;
typedef int stbtt_uint32 ;
typedef int stbtt_int32 ;


 int FUNC_0 (int *,int,char*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int,int *,int,int,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(stbtt_uint8 *VAR_0, stbtt_uint32 VAR_1, stbtt_uint8 *VAR_2, stbtt_int32 VAR_3)
{
   stbtt_int32 VAR_4 = (stbtt_int32)FUNC_3((char*)VAR_2);
   stbtt_uint32 VAR_5,VAR_6;
   if (!FUNC_1(VAR_0+VAR_1))
      return 0;


   if (VAR_3)
   {
      VAR_6 = FUNC_0(VAR_0, VAR_1, "head");
      if ((FUNC_4(VAR_0+VAR_6+44) & 7) != (VAR_3 & 7)) return 0;
   }

   VAR_5 = FUNC_0(VAR_0, VAR_1, "name");
   if (!VAR_5)
      return 0;

   if (VAR_3)
   {

      if (FUNC_2(VAR_0, VAR_5, VAR_2, VAR_4, 16, -1))
         return 1;
      if (FUNC_2(VAR_0, VAR_5, VAR_2, VAR_4, 1, -1))
         return 1;
      if (FUNC_2(VAR_0, VAR_5, VAR_2, VAR_4, 3, -1))
         return 1;
   }
   else
   {
      if (FUNC_2(VAR_0, VAR_5, VAR_2, VAR_4, 16, 17))
         return 1;
      if (FUNC_2(VAR_0, VAR_5, VAR_2, VAR_4, 1, 2))
         return 1;
      if (FUNC_2(VAR_0, VAR_5, VAR_2, VAR_4, 3, -1))
         return 1;
   }

   return 0;
}
