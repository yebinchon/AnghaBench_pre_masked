
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* omx_prefix; char const* omx; } ;


 char* VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_1 ;

const char *FUNC_1(int VAR_2, const char **VAR_3)
{
   if (VAR_2 >= (int)FUNC_0(VAR_1) || VAR_2 < 0)
      VAR_2 = FUNC_0(VAR_1) - 1;

   if (VAR_3)
   {
      *VAR_3 = VAR_1[VAR_2].omx_prefix;
      if (!*VAR_3)
         *VAR_3 = VAR_0;
   }

   return VAR_1[VAR_2].omx;
}
