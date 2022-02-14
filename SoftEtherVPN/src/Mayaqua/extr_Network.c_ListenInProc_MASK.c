
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ListenMode; int Connected; int InProcAcceptEvent; int InProcAcceptQueue; int Type; } ;
typedef TYPE_1__ SOCK ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_1__* FUNC_2 () ;
 int VAR_0 ;

SOCK *FUNC_3()
{
 SOCK *VAR_1 = FUNC_2();

 VAR_1->Type = VAR_0;
 VAR_1->ListenMode = 1;
 VAR_1->InProcAcceptQueue = FUNC_1();
 VAR_1->InProcAcceptEvent = FUNC_0();
 VAR_1->Connected = 1;

 return VAR_1;
}
