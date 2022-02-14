
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int VC_URI_PARTS_T ;


 int FUNC_0 (int *,char*,char*,...) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (char*,char const*) ;
 int FUNC_4 (int *,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(VC_URI_PARTS_T *VAR_0, const char *VAR_1)
{
   uint32_t VAR_2;
   char *VAR_3;

   VAR_2 = FUNC_4(VAR_0, ((void*)0), 0) + 1;
   VAR_3 = (char *)FUNC_2(VAR_2);
   if (!VAR_3)
   {
      FUNC_0(((void*)0), "*** Unexpected memory allocation failure: %d bytes", VAR_2);
      return 1;
   }

   FUNC_4(VAR_0, VAR_3, VAR_2);

   if (FUNC_3(VAR_3, VAR_1) != 0)
   {
      FUNC_0(((void*)0), "*** Built URI <%s>\nexpected  <%s>", VAR_3, VAR_1);
      FUNC_1(VAR_3);
      return 1;
   }

   FUNC_1(VAR_3);

   return 0;
}
