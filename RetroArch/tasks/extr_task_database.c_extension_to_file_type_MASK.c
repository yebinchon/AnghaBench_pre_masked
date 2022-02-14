
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum msg_file_type { ____Placeholder_msg_file_type } msg_file_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static enum msg_file_type FUNC_1(const char *VAR_8)
{
   if (
         FUNC_0(VAR_8, "7z") ||
         FUNC_0(VAR_8, "7Z") ||
         FUNC_0(VAR_8, "zip") ||
         FUNC_0(VAR_8, "ZIP") ||
         FUNC_0(VAR_8, "apk") ||
         FUNC_0(VAR_8, "APK")
      )
      return VAR_1;
   if (
         FUNC_0(VAR_8, "cue") ||
         FUNC_0(VAR_8, "CUE")
      )
      return VAR_2;
   if (
         FUNC_0(VAR_8, "gdi") ||
         FUNC_0(VAR_8, "GDI")
      )
      return VAR_3;
   if (
         FUNC_0(VAR_8, "iso") ||
         FUNC_0(VAR_8, "ISO")
      )
      return VAR_4;
   if (
         FUNC_0(VAR_8, "chd") ||
         FUNC_0(VAR_8, "CHD")
      )
      return VAR_0;
   if (
         FUNC_0(VAR_8, "wbfs") ||
         FUNC_0(VAR_8, "WBFS")
      )
      return VAR_7;
   if (
         FUNC_0(VAR_8, "lutro") ||
         FUNC_0(VAR_8, "LUTRO")
      )
      return VAR_5;
   return VAR_6;
}
