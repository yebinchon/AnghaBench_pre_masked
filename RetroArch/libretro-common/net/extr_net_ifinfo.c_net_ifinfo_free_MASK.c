
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_ifinfo_entry {scalar_t__* host; scalar_t__* name; } ;
struct TYPE_3__ {unsigned int size; scalar_t__* entries; } ;
typedef TYPE_1__ net_ifinfo_t ;


 int FUNC_0 (scalar_t__*) ;

void FUNC_1(net_ifinfo_t *VAR_0)
{
   unsigned VAR_1;

   if (!VAR_0)
      return;

   for (VAR_1 = 0; VAR_1 < VAR_0->size; VAR_1++)
   {
      struct net_ifinfo_entry *VAR_2 =
         (struct net_ifinfo_entry*)&VAR_0->entries[VAR_1];

      if (*VAR_2->name)
         FUNC_0(VAR_2->name);
      if (*VAR_2->host)
         FUNC_0(VAR_2->host);

      VAR_2->name = ((void*)0);
      VAR_2->host = ((void*)0);
   }
   FUNC_0(VAR_0->entries);
}
