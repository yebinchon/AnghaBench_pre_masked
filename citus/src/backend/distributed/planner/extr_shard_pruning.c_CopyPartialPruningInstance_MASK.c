
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int isPartial; int addedToPruningInstances; } ;
typedef TYPE_1__ PruningInstance ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int) ;
 TYPE_1__* FUNC_2 (int) ;

__attribute__((used)) static PruningInstance *
FUNC_3(PruningInstance *VAR_0)
{
 PruningInstance *VAR_1 = FUNC_2(sizeof(PruningInstance));

 FUNC_0(VAR_0->isPartial);






 FUNC_1(VAR_1, VAR_0, sizeof(PruningInstance));
 VAR_1->addedToPruningInstances = 0;
 VAR_1->isPartial = 0;

 return VAR_1;
}
