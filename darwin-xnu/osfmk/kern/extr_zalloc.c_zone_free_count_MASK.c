
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* zone_t ;
typedef scalar_t__ integer_t ;
struct TYPE_5__ {scalar_t__ countfree; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

integer_t
FUNC_3(zone_t VAR_0)
{
 integer_t VAR_1;

 FUNC_1(VAR_0);
 VAR_1 = VAR_0->countfree;
 FUNC_2(VAR_0);

 FUNC_0(VAR_1 >= 0);

 return(VAR_1);
}
