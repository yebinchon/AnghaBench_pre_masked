
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * columnList; } ;
typedef TYPE_1__ MultiProject ;
typedef int MultiNode ;
typedef int List ;


 int FUNC_0 (int) ;
 int * FUNC_1 (int *,int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static List *
FUNC_5(MultiNode *VAR_2)
{
 MultiProject *VAR_3 = ((void*)0);
 List *VAR_4 = VAR_0;
 List *VAR_5 = VAR_0;

 List *VAR_6 = FUNC_1(VAR_2, VAR_1);
 FUNC_0(FUNC_4(VAR_6) > 0);

 VAR_3 = (MultiProject *) FUNC_3(VAR_6);
 VAR_4 = VAR_3->columnList;
 VAR_5 = FUNC_2(VAR_4);

 FUNC_0(VAR_5 != VAR_0);
 return VAR_5;
}
