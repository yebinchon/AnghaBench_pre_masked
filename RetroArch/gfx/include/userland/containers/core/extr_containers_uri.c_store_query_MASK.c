
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {char* name; char* value; } ;
typedef TYPE_1__ VC_URI_QUERY_T ;
struct TYPE_5__ {int num_queries; TYPE_1__* queries; } ;
typedef TYPE_2__ VC_URI_PARTS_T ;


 char* FUNC_0 (char const*,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static bool FUNC_2( VC_URI_PARTS_T *VAR_0, const char *VAR_1,
      const char *VAR_2, const char *VAR_3)
{
   uint32_t VAR_4, VAR_5;

   if (VAR_2)
   {
      VAR_4 = VAR_2 - VAR_1;
      VAR_5 = VAR_3 - VAR_2 - 1;
   } else {
      VAR_4 = VAR_3 - VAR_1;
      VAR_5 = 0;
   }


   if (VAR_4)
   {
      char *VAR_6, *VAR_7 = ((void*)0);
      VC_URI_QUERY_T *VAR_8;

      if (VAR_2)
      {
         VAR_7 = FUNC_0(VAR_2 + 1, VAR_5);
         if (!VAR_7)
            return 0;
         VAR_2 = VAR_3;
      }

      VAR_6 = FUNC_0(VAR_1, VAR_4);
      if (!VAR_6)
      {
         if (VAR_7)
            FUNC_1(VAR_7);
         return 0;
      }


      VAR_8 = &VAR_0->queries[ VAR_0->num_queries++ ];
      VAR_8->name = VAR_6;
      VAR_8->value = VAR_7;
   }

   return 1;
}
