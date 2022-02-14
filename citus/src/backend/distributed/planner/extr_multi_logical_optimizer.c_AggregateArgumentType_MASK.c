
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ expr; } ;
typedef TYPE_1__ TargetEntry ;
struct TYPE_5__ {int * args; } ;
typedef int Oid ;
typedef int Node ;
typedef int List ;
typedef TYPE_2__ Aggref ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static Oid
FUNC_4(Aggref *VAR_0)
{
 List *VAR_1 = VAR_0->args;
 TargetEntry *VAR_2 = (TargetEntry *) FUNC_2(VAR_1);
 Oid VAR_3 = FUNC_1((Node *) VAR_2->expr);


 FUNC_0(FUNC_3(VAR_1) == 1);

 return VAR_3;
}
