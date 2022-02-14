
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VC_URI_PARTS_T ;


 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(VC_URI_PARTS_T *VAR_0)
{
   int VAR_1 = 0;

   if (FUNC_1( VAR_0, ((void*)0) ))
   {
      FUNC_0(((void*)0), "Parsing NULL URI failed");
      VAR_1++;
   }

   return VAR_1;
}
