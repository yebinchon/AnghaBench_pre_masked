
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dependencySet; } ;
typedef TYPE_1__ ObjectAddressCollector ;
typedef int ObjectAddress ;


 int VAR_0 ;
 int FUNC_0 (int ,int const*,int ,int*) ;

__attribute__((used)) static bool
FUNC_1(const ObjectAddress *VAR_1,
       ObjectAddressCollector *VAR_2)
{
 bool VAR_3 = 0;


 FUNC_0(VAR_2->dependencySet, VAR_1, VAR_0, &VAR_3);

 return VAR_3;
}
