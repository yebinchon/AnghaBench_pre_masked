
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_5__ {size_t num_queries; TYPE_1__* queries; } ;
typedef TYPE_2__ VC_URI_PARTS_T ;
struct TYPE_4__ {char* name; char* value; } ;



void FUNC_0( const VC_URI_PARTS_T *VAR_0, uint32_t VAR_1, const char **VAR_2, const char **VAR_3 )
{
   const char *VAR_4 = ((void*)0);
   const char *VAR_5 = ((void*)0);

   if (VAR_0)
   {
      if (VAR_1 < VAR_0->num_queries)
      {
         VAR_4 = VAR_0->queries[VAR_1].name;
         VAR_5 = VAR_0->queries[VAR_1].value;
      }
   }

   if (VAR_2)
      *VAR_2 = VAR_4;
   if (VAR_3)
      *VAR_3 = VAR_5;
}
