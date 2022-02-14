
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int group_name; } ;
struct TYPE_5__ {int count; TYPE_2__** sorted_groups; } ;
typedef TYPE_1__ FDFSGroups ;
typedef TYPE_2__ FDFSGroupInfo ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(FDFSGroups *VAR_0, FDFSGroupInfo *VAR_1)

{
 FDFSGroupInfo **VAR_2;
 FDFSGroupInfo **VAR_3;

 VAR_3 = VAR_0->sorted_groups + VAR_0->count;
 for (VAR_2=VAR_3; VAR_2 > VAR_0->sorted_groups; VAR_2--)
 {
  if (FUNC_0(VAR_1->group_name, (*(VAR_2-1))->group_name) > 0)

  {
   *VAR_2 = VAR_1;
   return;
  }
  else
  {
   *VAR_2 = *(VAR_2-1);
  }
 }

 *VAR_2 = VAR_1;
}
