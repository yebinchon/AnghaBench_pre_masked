
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VC_URI_PARTS_T ;


 int FUNC_0 (int *,char*) ;
 char VAR_0 ;
 int * VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int FUNC_4(VC_URI_PARTS_T *VAR_2)
{
   int VAR_3 = 0;
   char VAR_4[1];

   FUNC_3( VAR_2, VAR_1 );

   if (FUNC_2( VAR_2, ((void*)0), 0 ) != FUNC_1(VAR_1))
   {
      FUNC_0(((void*)0), "Retrieving URI length failed");
      VAR_3++;
   }

   VAR_4[0] = VAR_0;
   if (FUNC_2( VAR_2, VAR_4, 1 ) != FUNC_1(VAR_1))
   {
      FUNC_0(((void*)0), "Building URI to small buffer failed");
      VAR_3++;
   }
   if (VAR_4[0] != VAR_0)
   {
      FUNC_0(((void*)0), "Building URI to small buffer modified buffer");
      VAR_3++;
   }

   FUNC_3( VAR_2, ((void*)0) );

   return VAR_3;
}
