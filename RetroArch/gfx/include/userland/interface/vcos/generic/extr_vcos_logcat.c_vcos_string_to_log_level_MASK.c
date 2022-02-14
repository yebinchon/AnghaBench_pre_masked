
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VCOS_STATUS_T ;
typedef int VCOS_LOG_LEVEL_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

VCOS_STATUS_T FUNC_1( const char *VAR_7, VCOS_LOG_LEVEL_T *VAR_8 )
{
   if (FUNC_0(VAR_7,"error") == 0)
      *VAR_8 = VAR_1;
   else if (FUNC_0(VAR_7,"never") == 0)
      *VAR_8 = VAR_3;
   else if (FUNC_0(VAR_7,"warn") == 0)
      *VAR_8 = VAR_5;
   else if (FUNC_0(VAR_7,"warning") == 0)
      *VAR_8 = VAR_5;
   else if (FUNC_0(VAR_7,"info") == 0)
      *VAR_8 = VAR_2;
   else if (FUNC_0(VAR_7,"trace") == 0)
      *VAR_8 = VAR_4;
   else
      return VAR_0;

   return VAR_6;
}
