
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MMAL_COMPONENT_MODULE_T {int dummy; } ;
typedef int MMAL_STATUS_T ;
typedef int MMAL_COMPONENT_T ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char const*,int (*) (char const*,int *),struct MMAL_COMPONENT_MODULE_T*,int **) ;

MMAL_STATUS_T FUNC_2(const char *VAR_0,
   MMAL_STATUS_T (*VAR_1)(const char *VAR_2, MMAL_COMPONENT_T *),
   struct MMAL_COMPONENT_MODULE_T *VAR_3,
   MMAL_COMPONENT_T **VAR_4)
{
   FUNC_0("%s", VAR_0);
   return FUNC_1(VAR_0, VAR_1, VAR_3, VAR_4);
}
