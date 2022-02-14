
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (char*,int,int,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char const*,char*,int*,int*,char*) ;
 int VAR_4 ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static int FUNC_4(const char* VAR_5, uint32_t *VAR_6,
      uint32_t *VAR_7, uint32_t *VAR_8)
{
   char VAR_9[8];
   uint32_t VAR_10, VAR_11, VAR_12;


   if (FUNC_2(VAR_5, "%4ux%4u:%7s", &VAR_10, &VAR_11, VAR_9) != 3)
   {
      FUNC_1(VAR_4, "Error, malformed or unsupported video format: %s\n", VAR_5);
      return -1;
   }

   if (!FUNC_3(VAR_9, "h263", 4))
   {
      VAR_12 = VAR_0;

      if (!((VAR_10 == 128 && VAR_11 == 96) ||
            (VAR_10 == 176 && VAR_11 == 144) ||
            (VAR_10 == 352 && VAR_11 == 288) ||
            (VAR_10 == 704 && VAR_11 == 576) ||
            (VAR_10 == 1408 && VAR_11 == 1152)))
      {
         FUNC_1(VAR_4,
               "Error, only 128x96, 176x144, 352x288, 704x576 and 1408x1152 are supported for H263\n");
         return -1;
      }
   }
   else if (!FUNC_3(VAR_9, "mp4v", 4))
      VAR_12 = VAR_3;
   else if (!FUNC_3(VAR_9, "h264", 4))
      VAR_12 = VAR_1;
   else if (!FUNC_3(VAR_9, "jpeg", 4))
      VAR_12 = VAR_2;
   else
   {
      FUNC_1(VAR_4, "Error, unknown video encoding: %s\n", VAR_9);
      return -1;
   }

   if (VAR_6)
      *VAR_6 = VAR_10;
   if (VAR_7)
      *VAR_7 = VAR_11;
   if (VAR_8)
      *VAR_8 = VAR_12;
   FUNC_0("Video format: w:%d h:%d codec:%4.4s", VAR_10, VAR_11, (const char *)&VAR_12);

   return 0;
}
