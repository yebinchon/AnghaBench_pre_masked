
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct idmap_hashtable {TYPE_1__* h_entries; } ;
struct TYPE_2__ {struct TYPE_2__* ih_name; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(struct idmap_hashtable *VAR_1)
{
 int VAR_2;

 if (VAR_1->h_entries == ((void*)0))
  return;
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_0(VAR_1->h_entries[VAR_2].ih_name);
 FUNC_0(VAR_1->h_entries);
}
