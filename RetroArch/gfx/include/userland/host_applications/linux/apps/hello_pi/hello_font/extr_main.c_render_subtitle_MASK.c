
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ int32_t ;
typedef int GRAPHICS_RESOURCE_HANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,int,int) ;
 int FUNC_1 (int ,int*,int*) ;
 scalar_t__ FUNC_2 (int ,int,int const,int ,int ,int ,int ,char const*,int,int const) ;
 scalar_t__ FUNC_3 (int ,char const*,int,int*,int*,int const) ;
 int FUNC_4 (char const*) ;
 char* FUNC_5 (char const*,int,char) ;

int32_t FUNC_6(GRAPHICS_RESOURCE_HANDLE VAR_2, const char *VAR_3, const int VAR_4, const uint32_t VAR_5, const uint32_t VAR_6)
{
   uint32_t VAR_7 = FUNC_4(VAR_3)-VAR_4;
   uint32_t VAR_8=0, VAR_9=0;
   const char *VAR_10 = VAR_3;
   int32_t VAR_11=0;
   int VAR_12 = 0;
   uint32_t VAR_13, VAR_14;

   FUNC_1(VAR_2, &VAR_13, &VAR_14);

   if (VAR_7==0)
      return 0;
   while (VAR_10[0]) {
      VAR_11 = FUNC_3(VAR_2, VAR_10, VAR_7-(VAR_10-VAR_3), &VAR_8, &VAR_9, VAR_5);
      if (VAR_11 != 0) return VAR_11;
      if (VAR_8 > VAR_13) {
         const char *VAR_15 = FUNC_5(VAR_10, VAR_7-(VAR_10-VAR_3), ' ');
         if (!VAR_15) {
            VAR_12 = VAR_10+1-VAR_3;
            VAR_10 = VAR_10+1;
         } else {
            VAR_12 = VAR_15-VAR_3;
            VAR_10 = VAR_15+1;
         }
      } else {
         break;
      }
   }

   if (VAR_8) {
      VAR_11 = FUNC_2(VAR_2, (VAR_13 - VAR_8)>>1, VAR_6-VAR_9,
                                     VAR_1,
                                     VAR_0,
                                     FUNC_0(0xff,0xff,0xff,0xff),
                                     FUNC_0(0,0,0,0x80),
                                     VAR_10, VAR_7-(VAR_10-VAR_3), VAR_5);
      if (VAR_11!=0) return VAR_11;
   }
   return FUNC_6(VAR_2, VAR_3, VAR_4+VAR_7-VAR_12, VAR_5, VAR_6 - VAR_9);
}
