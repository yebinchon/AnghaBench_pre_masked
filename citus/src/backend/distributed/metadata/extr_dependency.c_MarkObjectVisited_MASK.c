
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int visitedObjects; } ;
typedef TYPE_1__ ObjectAddressCollector ;
typedef int ObjectAddress ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int const*,int ,int*) ;

__attribute__((used)) static void
FUNC_1(ObjectAddressCollector *VAR_1, const ObjectAddress *VAR_2)
{
 ObjectAddress *VAR_3 = ((void*)0);
 bool VAR_4 = 0;


 VAR_3 = (ObjectAddress *) FUNC_0(VAR_1->visitedObjects, VAR_2,
           VAR_0, &VAR_4);

 if (!VAR_4)
 {

  *VAR_3 = *VAR_2;
 }
}
