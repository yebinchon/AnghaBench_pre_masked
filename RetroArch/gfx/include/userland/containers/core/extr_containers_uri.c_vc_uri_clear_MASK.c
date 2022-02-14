
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_5__ {int value; int name; } ;
typedef TYPE_1__ VC_URI_QUERY_T ;
struct TYPE_6__ {size_t num_queries; TYPE_1__* queries; int fragment; int path; int port; int host; int userinfo; int scheme; } ;
typedef TYPE_2__ VC_URI_PARTS_T ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;

void FUNC_2( VC_URI_PARTS_T *VAR_0 )
{
   if (!VAR_0)
      return;

   FUNC_1(&VAR_0->scheme);
   FUNC_1(&VAR_0->userinfo);
   FUNC_1(&VAR_0->host);
   FUNC_1(&VAR_0->port);
   FUNC_1(&VAR_0->path);
   FUNC_1(&VAR_0->fragment);

   if (VAR_0->queries)
   {
      VC_URI_QUERY_T *VAR_1 = VAR_0->queries;
      uint32_t VAR_2 = VAR_0->num_queries;

      while (VAR_2--)
      {
         FUNC_1(&VAR_1[VAR_2].name);
         FUNC_1(&VAR_1[VAR_2].value);
      }

      FUNC_0(VAR_1);
      VAR_0->queries = ((void*)0);
      VAR_0->num_queries = 0;
   }
}
