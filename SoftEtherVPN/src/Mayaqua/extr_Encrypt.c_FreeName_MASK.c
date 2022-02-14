
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* Local; struct TYPE_4__* State; struct TYPE_4__* Country; struct TYPE_4__* Unit; struct TYPE_4__* Organization; struct TYPE_4__* CommonName; } ;
typedef TYPE_1__ NAME ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(NAME *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }


 FUNC_0(VAR_0->CommonName);
 FUNC_0(VAR_0->Organization);
 FUNC_0(VAR_0->Unit);
 FUNC_0(VAR_0->Country);
 FUNC_0(VAR_0->State);
 FUNC_0(VAR_0->Local);


 FUNC_0(VAR_0);

 return;
}
