
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Halt; int Lock; int Cedar; int Event; int Thread; } ;
typedef TYPE_1__ DDNS_CLIENT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;

void FUNC_7(DDNS_CLIENT *VAR_1)
{

 if (VAR_1 == ((void*)0))
 {
  return;
 }


 VAR_1->Halt = 1;
 FUNC_5(VAR_1->Event);

 FUNC_6(VAR_1->Thread, VAR_0);
 FUNC_4(VAR_1->Thread);

 FUNC_3(VAR_1->Event);

 FUNC_2(VAR_1->Cedar);
 FUNC_0(VAR_1->Lock);

 FUNC_1(VAR_1);
}
