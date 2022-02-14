
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int count; int ** groups; int ** sorted_groups; } ;
typedef TYPE_1__ FDFSGroups ;
typedef int FDFSGroupInfo ;


 int FUNC_0 (int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(FDFSGroups *VAR_0, const bool VAR_1)
{
 FDFSGroupInfo **VAR_2;
 FDFSGroupInfo **VAR_3;
 int VAR_4;

 if (VAR_0->groups == ((void*)0))
 {
  VAR_4 = 0;
 }
 else
 {
  if (VAR_1)
  {
   VAR_4 = FUNC_2();
  }
  else
  {
   VAR_4 = 0;
  }

  VAR_3 = VAR_0->groups + VAR_0->count;
  for (VAR_2=VAR_0->groups; VAR_2<VAR_3; VAR_2++)
  {
   FUNC_1(*VAR_2);
  }

  if (VAR_0->sorted_groups != ((void*)0))
  {
   FUNC_0(VAR_0->sorted_groups);
   VAR_0->sorted_groups = ((void*)0);
  }

  FUNC_0(VAR_0->groups);
  VAR_0->groups = ((void*)0);
 }

 return VAR_4;
}
