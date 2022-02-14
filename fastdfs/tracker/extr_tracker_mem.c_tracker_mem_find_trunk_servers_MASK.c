
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int count; TYPE_1__** groups; } ;
struct TYPE_4__ {int * pTrunkServer; } ;
typedef TYPE_1__ FDFSGroupInfo ;


 TYPE_3__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int) ;

void FUNC_3()
{
 FDFSGroupInfo **VAR_5;
 FDFSGroupInfo **VAR_6;

 if (!(VAR_1 && VAR_2))
 {
  return;
 }

 FUNC_0(&VAR_4);
 VAR_6 = VAR_0.groups + VAR_0.count;
 for (VAR_5=VAR_0.groups; VAR_5<VAR_6; VAR_5++)
 {
  if ((*VAR_5)->pTrunkServer == ((void*)0))
  {
   FUNC_2(*VAR_5, 1);
  }
 }
 VAR_3++;
 FUNC_1(&VAR_4);
}
