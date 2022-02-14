
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (void*,void*,int ,void*,int) ;
 int FUNC_1 (void*,void*,void*,char*,scalar_t__,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,int ,scalar_t__) ;
 int FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (char*) ;

int FUNC_7(void *VAR_3, void *VAR_4, char **VAR_5)
{
   char *VAR_6 = ((void*)0);
   int VAR_7 = -1;
   void *VAR_8 = FUNC_3(VAR_1);

   if (!VAR_8)
      return -3;

   VAR_6 = (char*) FUNC_3(VAR_0);

   if (!VAR_6)
   {
      FUNC_2(VAR_8);
      return -4;
   }

   FUNC_4(VAR_8, 0, VAR_1);
   FUNC_4(VAR_6, 0, VAR_0);


   if (FUNC_0(VAR_3, VAR_4, VAR_2, VAR_8, -1) == 0)
   {
      VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_8, VAR_6, VAR_0, -1);

      if ((VAR_7 == 0) && VAR_5)
      {
         *VAR_5 = (char*)FUNC_3(FUNC_6(VAR_6) + 1);
         if (*VAR_5)
            FUNC_5(*VAR_5, VAR_6);
      }
   }

   FUNC_2(VAR_6);
   FUNC_2(VAR_8);
   return VAR_7;
}
