
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VC_URI_PARTS_T ;


 int FUNC_0 (int *,char*,char const*) ;
 int FUNC_1 (int *,char*,char const*) ;
 int FUNC_2 (int *,char const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char const*) ;

__attribute__((used)) static int FUNC_5(VC_URI_PARTS_T *VAR_0, const char *VAR_1, const char *VAR_2)
{
   bool VAR_3;

   FUNC_1(((void*)0), "URI: <%s>", VAR_1);

   VAR_3 = FUNC_4( VAR_0, VAR_1 );
   if (!VAR_3)
   {
      FUNC_0(((void*)0), "*** Expected <%s> to parse, but it didn't", VAR_1);
      return 1;
   }

   FUNC_3(VAR_0);

   return FUNC_2(VAR_0, VAR_2 ? VAR_2 : VAR_1);
}
