
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VC_CONTAINER_T ;


 int FUNC_0 (int *,char*,...) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (char const*,char*,unsigned int*,unsigned int*,unsigned int*) ;

__attribute__((used)) static bool FUNC_2( VC_CONTAINER_T *VAR_4,
      const char *VAR_5)
{
   unsigned int VAR_6, VAR_7, VAR_8;


   if (FUNC_1(VAR_5, "RTSP/%u.%u %u", &VAR_6, &VAR_7, &VAR_8) != 3)
   {
      FUNC_0(VAR_4, "RTSP: Invalid response status line:\n%s", VAR_5);
      return 0;
   }

   if (VAR_6 != VAR_0 || VAR_7 != VAR_1)
   {
      FUNC_0(VAR_4, "RTSP: Unexpected response RTSP version: %u.%u", VAR_6, VAR_7);
      return 0;
   }

   if (VAR_8 < VAR_3 || VAR_8 >= VAR_2)
   {
      FUNC_0(VAR_4, "RTSP: Response status unsuccessful:\n%s", VAR_5);
      return 0;
   }

   return 1;
}
