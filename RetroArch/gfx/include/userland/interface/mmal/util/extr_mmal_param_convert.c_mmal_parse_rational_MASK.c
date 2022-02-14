
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {long num; long den; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_1__ MMAL_RATIONAL_T ;


 int VAR_0 ;
 int VAR_1 ;
 long FUNC_0 (char const*,char**,int ) ;

MMAL_STATUS_T FUNC_1(MMAL_RATIONAL_T *VAR_2, const char *VAR_3)
{
   MMAL_STATUS_T VAR_4;
   char *VAR_5;
   long VAR_6, VAR_7 = 1;
   VAR_6 = FUNC_0(VAR_3, &VAR_5, 0);
   if (VAR_5[0] == '\0')
   {

      VAR_4 = VAR_1;
   }
   else if (VAR_5[0] == '/')
   {
      VAR_7 = FUNC_0(VAR_5+1, &VAR_5, 0);
      if (VAR_5[0] == '\0')
         VAR_4 = VAR_1;
      else
         VAR_4 = VAR_0;
   }
   else
   {
      VAR_4 = VAR_0;
   }
   VAR_2->num = VAR_6;
   VAR_2->den = VAR_7;
   return VAR_4;
}
