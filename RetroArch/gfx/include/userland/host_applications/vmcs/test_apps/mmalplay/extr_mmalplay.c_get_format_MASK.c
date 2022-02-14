
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int fcc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char,char,char,char) ;
 int FUNC_1 (size_t,int) ;
 int FUNC_2 (char const*,char*,size_t) ;
 int FUNC_3 (char*,char const*,int ) ;
 int FUNC_4 (char*,char*,unsigned int*,unsigned int*) ;
 char* FUNC_5 (char const*,char) ;
 size_t FUNC_6 (char const*) ;

__attribute__((used)) static int FUNC_7(const char *VAR_4, uint32_t *VAR_5, unsigned int *VAR_6, unsigned int *VAR_7)
{
   char *VAR_8, VAR_9[4] = {' ', ' ', ' ', ' '};
   unsigned int VAR_10, VAR_11;
   size_t VAR_12;

   *VAR_6 = *VAR_7 = 0;
   *VAR_5 = VAR_2;


   VAR_8 = FUNC_5(VAR_4, ':');
   VAR_12 = VAR_8 ? (size_t)(VAR_8 - VAR_4) : FUNC_6(VAR_4);
   FUNC_3(VAR_9, VAR_4, FUNC_1(VAR_12, sizeof(VAR_9)));

   if (VAR_12 == sizeof("yuv420")-1 && !FUNC_2(VAR_4, "yuv420", VAR_12))
      *VAR_5 = VAR_0;
   else if (VAR_12 == sizeof("yuvuv")-1 && !FUNC_2(VAR_4, "yuvuv", VAR_12))
      *VAR_5 = VAR_3;
   else if (VAR_12 == sizeof("opaque")-1 && !FUNC_2(VAR_4, "opaque", VAR_12))
      *VAR_5 = VAR_1;
   else if (VAR_12 > 0 && VAR_12 <= 4)
      *VAR_5 = FUNC_0(VAR_9[0], VAR_9[1], VAR_9[2], VAR_9[3]);
   else
      return 1;

   if (!VAR_8)
      return 0;



   if (FUNC_4(VAR_8+1, "%ux%u", &VAR_10, &VAR_11) != 2)
      return 1;

   *VAR_6 = VAR_10;
   *VAR_7 = VAR_11;
   return 0;
}
