
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * dependencyList; int member_0; } ;
typedef TYPE_1__ ObjectAddressCollector ;
typedef int ObjectAddress ;
typedef int List ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int const*,int *,int *,int *,TYPE_1__*) ;

List *
FUNC_2(const ObjectAddress *VAR_3)
{
 ObjectAddressCollector VAR_4 = { 0 };

 FUNC_0(&VAR_4);

 FUNC_1(VAR_3,
       &VAR_1,
       &VAR_2,
       &VAR_0,
       &VAR_4);

 return VAR_4.dependencyList;
}
