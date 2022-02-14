
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* path_extension; char* path; } ;
typedef TYPE_1__ VC_URI_PARTS_T ;


 int FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(VC_URI_PARTS_T *VAR_0)
{
   char *VAR_1;

   if (!VAR_0)
      return;

   VAR_0->path_extension = ((void*)0);

   if (!VAR_0->path)
      return;


   for (VAR_1 = VAR_0->path + FUNC_0(VAR_0->path); *VAR_1 != '.'; VAR_1--)
      if (VAR_1 == VAR_0->path || *VAR_1 == '/' || *VAR_1 == '\\')
         return;

   VAR_0->path_extension = VAR_1 + 1;
}
