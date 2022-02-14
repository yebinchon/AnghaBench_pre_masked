
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int * name; int * value; } ;
typedef TYPE_1__ VC_URI_QUERY_T ;
struct TYPE_6__ {int num_queries; TYPE_1__* queries; } ;
typedef TYPE_2__ VC_URI_PARTS_T ;


 scalar_t__ FUNC_0 (char const*,int **) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int **) ;

bool FUNC_4( VC_URI_PARTS_T *VAR_0, const char *VAR_1, const char *VAR_2 )
{
   VC_URI_QUERY_T *VAR_3;
   uint32_t VAR_4;

   if (!VAR_0 || !VAR_1)
      return 0;

   VAR_4 = VAR_0->num_queries;
   if (VAR_0->queries)
      VAR_3 = (VC_URI_QUERY_T *)FUNC_2(VAR_0->queries, (VAR_4 + 1) * sizeof(VC_URI_QUERY_T));
   else
      VAR_3 = (VC_URI_QUERY_T *)FUNC_1(sizeof(VC_URI_QUERY_T));

   if (!VAR_3)
      return 0;


   VAR_0->queries = VAR_3;
   VAR_3[VAR_4].name = ((void*)0);
   VAR_3[VAR_4].value = ((void*)0);

   if (FUNC_0(VAR_1, &VAR_3[VAR_4].name))
   {
      if (FUNC_0(VAR_2, &VAR_3[VAR_4].value))
      {

         VAR_0->num_queries++;
         return 1;
      }

      FUNC_3(&VAR_3[VAR_4].name);
   }

   return 0;
}
