
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_4__ {int SizeOfHeader; int SockEvent; int Lock; int Ref; int Queue; int Event; } ;
typedef TYPE_1__ TUBE ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 TYPE_1__* FUNC_5 (int) ;

TUBE *FUNC_6(UINT VAR_0)
{
 TUBE *VAR_1 = FUNC_5(sizeof(TUBE));

 VAR_1->Event = FUNC_0();
 VAR_1->Queue = FUNC_2();
 VAR_1->Ref = FUNC_3();
 VAR_1->Lock = FUNC_1();
 VAR_1->SockEvent = FUNC_4();

 VAR_1->SizeOfHeader = VAR_0;

 return VAR_1;
}
