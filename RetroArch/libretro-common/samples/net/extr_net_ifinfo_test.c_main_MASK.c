
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {unsigned int size; TYPE_1__* entries; } ;
typedef TYPE_2__ net_ifinfo_t ;
struct TYPE_5__ {char* name; char* host; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char*,char*,char*) ;

int FUNC_3(int VAR_0, const char *VAR_1[])
{
   unsigned VAR_2 = 0;
   net_ifinfo_t VAR_3;

   if (!FUNC_1(&VAR_3))
      return -1;

   for (VAR_2 = 0; VAR_2 < VAR_3.size; VAR_2++)
   {
      FUNC_2("%s:%s\n", VAR_3.entries[VAR_2].name, VAR_3.entries[VAR_2].host);
   }

   FUNC_0(&VAR_3);

   return 0;
}
