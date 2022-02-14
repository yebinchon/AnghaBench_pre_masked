
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * ServerCert; int ClientAuth; struct TYPE_4__* ClientOption; int lock; } ;
typedef TYPE_1__ ACCOUNT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;

void FUNC_4(ACCOUNT *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }


 FUNC_1(VAR_0->lock);


 FUNC_2(VAR_0->ClientOption);


 FUNC_0(VAR_0->ClientAuth);

 if (VAR_0->ServerCert != ((void*)0))
 {
  FUNC_3(VAR_0->ServerCert);
 }

 FUNC_2(VAR_0);
}
