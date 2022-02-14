
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int VC_URI_QUERY_T ;
struct TYPE_4__ {int * queries; } ;
typedef TYPE_1__ VC_URI_PARTS_T ;


 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (TYPE_1__*,char const*,char const*,char const*) ;

__attribute__((used)) static bool FUNC_2( VC_URI_PARTS_T *VAR_0, const char *VAR_1, uint32_t VAR_2 )
{
   uint32_t VAR_3;
   uint32_t VAR_4;
   VC_URI_QUERY_T *VAR_5;
   const char *VAR_6 = VAR_1;
   const char *VAR_7 = ((void*)0);
   char VAR_8;

   if (!VAR_2)
      return 1;


   VAR_4 = 1;
   for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
   {
      VAR_8 = VAR_1[VAR_3];

      if (VAR_8 == '&' || VAR_8 ==';')
         VAR_4++;
   }

   VAR_5 = (VC_URI_QUERY_T *)FUNC_0(VAR_4 * sizeof(VC_URI_QUERY_T));
   if (!VAR_5)
      return 0;

   VAR_0->queries = VAR_5;


   for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
   {
      VAR_8 = *VAR_1;


      if (VAR_8 == '=' && !VAR_7)
         VAR_7 = VAR_1;


      if (VAR_8 == '&' || VAR_8 ==';')
      {
         if (!FUNC_1(VAR_0, VAR_6, VAR_7, VAR_1))
            return 0;

         VAR_7 = ((void*)0);
         VAR_6 = VAR_1 + 1;
      }

      VAR_1++;
   }

   return FUNC_1(VAR_0, VAR_6, VAR_7, VAR_1);
}
