
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int Event; int RecordQueue; } ;
struct TYPE_6__ {void* Data; int * ParseProc; int Tick; } ;
typedef int RECORD_PARSE_PROC ;
typedef TYPE_1__ RECORD ;
typedef TYPE_2__ LOG ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (int) ;

void FUNC_6(LOG *VAR_0, void *VAR_1, RECORD_PARSE_PROC *VAR_2)
{
 RECORD *VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 VAR_3 = FUNC_5(sizeof(RECORD));
 VAR_3->Tick = FUNC_3();
 VAR_3->ParseProc = VAR_2;
 VAR_3->Data = VAR_1;

 FUNC_1(VAR_0->RecordQueue);
 {
  FUNC_0(VAR_0->RecordQueue, VAR_3);
 }
 FUNC_4(VAR_0->RecordQueue);

 FUNC_2(VAR_0->Event);
}
