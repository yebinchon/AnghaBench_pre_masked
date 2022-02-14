
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MMAL_STATUS_T ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (char const*,char**,int ) ;

MMAL_STATUS_T FUNC_1(unsigned int *VAR_2, const char *VAR_3)
{
   char *VAR_4;
   unsigned long VAR_5 = FUNC_0(VAR_3, &VAR_4, 0);
   if (VAR_4[0] == '\0')
   {
      *VAR_2 = VAR_5;
      return VAR_1;
   }
   else
   {
      return VAR_0;
   }
}
