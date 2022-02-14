
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int containsVar; int varArgument; int badCoalesce; } ;
typedef TYPE_1__ WalkerState ;
typedef int Node ;


 int FUNC_0 (int *,TYPE_1__*) ;

__attribute__((used)) static bool
FUNC_1(Node *VAR_0, bool *VAR_1, bool *VAR_2)
{
 bool VAR_3;
 WalkerState VAR_4;
 VAR_4.containsVar = VAR_4.varArgument = VAR_4.badCoalesce = 0;

 VAR_3 = FUNC_0(VAR_0, &VAR_4);

 *VAR_1 |= VAR_4.varArgument;
 *VAR_2 |= VAR_4.badCoalesce;
 return VAR_3;
}
