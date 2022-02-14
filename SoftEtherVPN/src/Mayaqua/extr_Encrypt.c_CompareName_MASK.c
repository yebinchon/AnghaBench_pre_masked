
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Local; int State; int Country; int Unit; int Organization; int CommonName; } ;
typedef TYPE_1__ NAME ;


 scalar_t__ FUNC_0 (int ,int ) ;

bool FUNC_1(NAME *VAR_0, NAME *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }


 if (FUNC_0(VAR_0->CommonName, VAR_1->CommonName) == 0 &&
  FUNC_0(VAR_0->Organization, VAR_1->Organization) == 0 &&
  FUNC_0(VAR_0->Unit, VAR_1->Unit) == 0 &&
  FUNC_0(VAR_0->Country, VAR_1->Country) == 0 &&
  FUNC_0(VAR_0->State, VAR_1->State) == 0 &&
  FUNC_0(VAR_0->Local, VAR_1->Local) == 0)
 {
  return 1;
 }

 return 0;
}
