
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ext_lower ;
typedef enum rarch_content_type { ____Placeholder_rarch_content_type } rarch_content_type ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int ,int) ;
 scalar_t__ FUNC_5 (char const*,char*) ;

enum rarch_content_type FUNC_6(const char *VAR_5)
{
   char VAR_6[128];

   VAR_6[0] = '\0';

   FUNC_4(VAR_6, FUNC_2(VAR_5), sizeof(VAR_6));

   FUNC_3(VAR_6);


   if (
      FUNC_5(VAR_5, "udp://") ||
      FUNC_5(VAR_5, "http://") ||
      FUNC_5(VAR_5, "https://")||
      FUNC_5(VAR_5, "tcp://") ||
      FUNC_5(VAR_5, "rtmp://") ||
      FUNC_5(VAR_5, "rtp://")
   )
      return VAR_2;

   switch (FUNC_1(FUNC_0(VAR_6)))
   {
      case 141:
      default:
         break;
   }

   return VAR_4;
}
