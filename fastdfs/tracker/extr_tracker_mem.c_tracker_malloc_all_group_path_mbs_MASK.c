
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ store_path_count; } ;
struct TYPE_5__ {int alloc_size; TYPE_2__** groups; } ;
typedef TYPE_1__ FDFSGroups ;
typedef TYPE_2__ FDFSGroupInfo ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_1(FDFSGroups *VAR_0)
{
 FDFSGroupInfo **VAR_1;
 FDFSGroupInfo **VAR_2;
 int VAR_3;

 VAR_2 = VAR_0->groups + VAR_0->alloc_size;
 for (VAR_1=VAR_0->groups; VAR_1<VAR_2; VAR_1++)
 {
  if ((*VAR_1)->store_path_count == 0)
  {
   continue;
  }

  if ((VAR_3=FUNC_0(*VAR_1)) != 0)
  {
   return VAR_3;
  }
 }

 return 0;
}
