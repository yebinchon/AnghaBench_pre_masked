
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;


 int FUNC_0 (int *,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (size_t) ;
 int FUNC_2 (int *,char const*,char const*,char**) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 size_t FUNC_4 (char const*) ;
 int FUNC_5 (char*,char const*,size_t) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_6( VC_CONTAINER_T *VAR_2,
      const char *VAR_3,
      const char *VAR_4,
      char **VAR_5)
{
   VC_CONTAINER_STATUS_T VAR_6 = VAR_1;






   if (!*VAR_3 || FUNC_3(VAR_3, "*") == 0)
   {
      size_t VAR_7 = FUNC_4(VAR_4);

      *VAR_5 = (char *)FUNC_1(VAR_7 + 1);
      if (!*VAR_5)
      {
         FUNC_0(VAR_2, "RTSP: Failed to allocate control URI");
         return VAR_0;
      }
      FUNC_5(*VAR_5, VAR_4, VAR_7);
   } else {
      VAR_6 = FUNC_2(VAR_2, VAR_4, VAR_3, VAR_5);
   }

   return VAR_6;
}
