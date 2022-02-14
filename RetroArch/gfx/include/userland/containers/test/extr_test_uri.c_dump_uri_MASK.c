
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int VC_URI_PARTS_T ;


 int FUNC_0 (int *,char*,char const*,...) ;
 char* FUNC_1 (int *) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (int *) ;
 char* FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,char const**,char const**) ;
 char* FUNC_7 (int *) ;
 char* FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(VC_URI_PARTS_T *VAR_0)
{
   const char *VAR_1;
   uint32_t VAR_2, VAR_3;

   VAR_1 = FUNC_7(VAR_0);
   if (VAR_1)
      FUNC_0(((void*)0), "Scheme: <%s>", VAR_1);

   VAR_1 = FUNC_8(VAR_0);
   if (VAR_1)
      FUNC_0(((void*)0), "Userinfo: <%s>", VAR_1);

   VAR_1 = FUNC_2(VAR_0);
   if (VAR_1)
      FUNC_0(((void*)0), "Host: <%s>", VAR_1);

   VAR_1 = FUNC_5(VAR_0);
   if (VAR_1)
      FUNC_0(((void*)0), "Port: <%s>", VAR_1);

   VAR_1 = FUNC_4(VAR_0);
   if (VAR_1)
      FUNC_0(((void*)0), "Path: <%s>", VAR_1);

   VAR_2 = FUNC_3(VAR_0);
   for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
   {
      const char *VAR_4;

      FUNC_6(VAR_0, VAR_3, &VAR_1, &VAR_4);
      if (VAR_1)
      {
         if (VAR_4)
            FUNC_0(((void*)0), "Query %d: <%s>=<%s>", VAR_3, VAR_1, VAR_4);
         else
            FUNC_0(((void*)0), "Query %d: <%s>", VAR_3, VAR_1);
      }
   }

   VAR_1 = FUNC_1(VAR_0);
   if (VAR_1)
      FUNC_0(((void*)0), "Fragment: <%s>", VAR_1);
}
