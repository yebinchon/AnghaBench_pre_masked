
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int real_search_path ;
struct TYPE_5__ {size_t size; TYPE_1__* entries; } ;
typedef TYPE_2__ playlist_t ;
struct TYPE_4__ {int path; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 scalar_t__ FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 (char*,char const*,int) ;

bool FUNC_4(playlist_t *VAR_1,
      const char *VAR_2,
      const char *VAR_3)
{
   size_t VAR_4;
   char VAR_5[VAR_0];

   VAR_5[0] = '\0';

   if (!VAR_1 || FUNC_2(VAR_2))
      return 0;


   FUNC_3(VAR_5, VAR_2, sizeof(VAR_5));
   FUNC_0(VAR_5, sizeof(VAR_5), 1);

   for (VAR_4 = 0; VAR_4 < VAR_1->size; VAR_4++)
      if (FUNC_1(VAR_5, VAR_1->entries[VAR_4].path))
         return 1;

   return 0;
}
