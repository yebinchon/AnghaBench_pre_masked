
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int Local; int State; int Country; int Unit; int Organization; int CommonName; } ;
typedef TYPE_1__ NAME ;


 TYPE_1__* FUNC_0 (int ,int ,int ,int ,int ,int ) ;

NAME *FUNC_1(NAME *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 return FUNC_0(VAR_0->CommonName, VAR_0->Organization, VAR_0->Unit,
  VAR_0->Country, VAR_0->State, VAR_0->Local);
}
