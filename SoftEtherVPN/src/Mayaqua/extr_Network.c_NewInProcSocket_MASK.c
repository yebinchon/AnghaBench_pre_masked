
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int Connected; int InProcRecvFifo; TYPE_1__* RecvTube; TYPE_1__* SendTube; int Type; } ;
struct TYPE_7__ {int Ref; } ;
typedef TYPE_1__ TUBE ;
typedef TYPE_2__ SOCK ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 TYPE_2__* FUNC_2 () ;
 int VAR_0 ;

SOCK *FUNC_3(TUBE *VAR_1, TUBE *VAR_2)
{
 SOCK *VAR_3;

 if (VAR_2 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_3 = FUNC_2();

 VAR_3->Type = VAR_0;

 VAR_3->SendTube = VAR_1;
 VAR_3->RecvTube = VAR_2;

 FUNC_0(VAR_1->Ref);
 FUNC_0(VAR_2->Ref);

 VAR_3->InProcRecvFifo = FUNC_1();

 VAR_3->Connected = 1;

 return VAR_3;
}
