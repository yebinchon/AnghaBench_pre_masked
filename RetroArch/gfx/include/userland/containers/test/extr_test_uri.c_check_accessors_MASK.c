
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VC_URI_PARTS_T ;


 int FUNC_0 (int *,char*) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 scalar_t__ FUNC_1 (int *,char const*) ;
 scalar_t__ FUNC_2 (int *,int *,int *) ;
 char* FUNC_3 (int *) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 char* FUNC_6 (int *) ;
 char* FUNC_7 (int *) ;
 int FUNC_8 (int *,int,char const**,char const**) ;
 char* FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,int *) ;
 scalar_t__ FUNC_11 (int *,int *) ;
 scalar_t__ FUNC_12 (int *,int *) ;
 scalar_t__ FUNC_13 (int *,int *) ;
 scalar_t__ FUNC_14 (int *,int *) ;
 scalar_t__ FUNC_15 (int *,int *) ;
 char* FUNC_16 (int *) ;

__attribute__((used)) static int FUNC_17(VC_URI_PARTS_T *VAR_3)
{
   int VAR_4 = 0;
   const char *VAR_5;

   if (FUNC_14( VAR_3, VAR_1 ))
   {
      VAR_5 = FUNC_9(VAR_3);
      if (!VAR_5 || FUNC_1(VAR_1, VAR_5))
         VAR_4++;
      if (!FUNC_14( VAR_3, ((void*)0) ))
         VAR_4++;
      if (FUNC_9(VAR_3))
         VAR_4++;
   } else
      VAR_4++;

   if (FUNC_15( VAR_3, VAR_1 ))
   {
      VAR_5 = FUNC_16(VAR_3);
      if (!VAR_5 || FUNC_1(VAR_1, VAR_5))
         VAR_4++;
      if (!FUNC_15( VAR_3, ((void*)0) ))
         VAR_4++;
      if (FUNC_16(VAR_3))
         VAR_4++;
   } else
      VAR_4++;

   if (FUNC_11( VAR_3, VAR_1 ))
   {
      VAR_5 = FUNC_4(VAR_3);
      if (!VAR_5 || FUNC_1(VAR_1, VAR_5))
         VAR_4++;
      if (!FUNC_11( VAR_3, ((void*)0) ))
         VAR_4++;
      if (FUNC_4(VAR_3))
         VAR_4++;
   } else
      VAR_4++;

   if (FUNC_13( VAR_3, VAR_1 ))
   {
      VAR_5 = FUNC_7(VAR_3);
      if (!VAR_5 || FUNC_1(VAR_1, VAR_5))
         VAR_4++;
      if (!FUNC_13( VAR_3, ((void*)0) ))
         VAR_4++;
      if (FUNC_7(VAR_3))
         VAR_4++;
   } else
      VAR_4++;

   if (FUNC_12( VAR_3, VAR_1 ))
   {
      VAR_5 = FUNC_6(VAR_3);
      if (!VAR_5 || FUNC_1(VAR_1, VAR_5))
         VAR_4++;
      if (!FUNC_12( VAR_3, ((void*)0) ))
         VAR_4++;
      if (FUNC_6(VAR_3))
         VAR_4++;
   } else
      VAR_4++;

   if (FUNC_10( VAR_3, VAR_1 ))
   {
      VAR_5 = FUNC_3(VAR_3);
      if (!VAR_5 || FUNC_1(VAR_1, VAR_5))
         VAR_4++;
      if (!FUNC_10( VAR_3, ((void*)0) ))
         VAR_4++;
      if (FUNC_3(VAR_3))
         VAR_4++;
   } else
      VAR_4++;

   if (FUNC_2( VAR_3, ((void*)0), ((void*)0) ))
      VAR_4++;
   if (FUNC_2( VAR_3, ((void*)0), VAR_2 ))
      VAR_4++;
   if (!FUNC_2( VAR_3, VAR_1, ((void*)0) ))
      VAR_4++;
   if (!FUNC_2( VAR_3, VAR_0, VAR_2 ))
      VAR_4++;

   if (FUNC_5(VAR_3) == 2)
   {
      const char *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);

      FUNC_8(VAR_3, 0, &VAR_6, &VAR_7);
      if (!VAR_6 || FUNC_1(VAR_1, VAR_6))
         VAR_4++;
      if (VAR_7)
         VAR_4++;

      FUNC_8(VAR_3, 1, &VAR_6, &VAR_7);
      if (!VAR_6 || FUNC_1(VAR_0, VAR_6))
         VAR_4++;
      if (!VAR_7 || FUNC_1(VAR_2, VAR_7))
         VAR_4++;
   } else
      VAR_4++;

   if (VAR_4)
      FUNC_0(((void*)0), "Accessors failed");

   return VAR_4;
}
