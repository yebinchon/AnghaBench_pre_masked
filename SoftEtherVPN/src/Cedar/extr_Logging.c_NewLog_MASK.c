
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_5__ {int Thread; void* FlushEvent; void* Event; int RecordQueue; int SwitchType; void* Prefix; void* DirName; int lock; } ;
typedef TYPE_1__ LOG ;


 void* FUNC_0 (char*) ;
 int VAR_0 ;
 void* FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (int ) ;
 TYPE_1__* FUNC_6 (int) ;

LOG *FUNC_7(char *VAR_1, char *VAR_2, UINT VAR_3)
{
 LOG *VAR_4;

 VAR_4 = FUNC_6(sizeof(LOG));
 VAR_4->lock = FUNC_2();
 VAR_4->DirName = FUNC_0(VAR_1 == ((void*)0) ? "" : VAR_1);
 VAR_4->Prefix = FUNC_0(VAR_2 == ((void*)0) ? "log" : VAR_2);
 VAR_4->SwitchType = VAR_3;
 VAR_4->RecordQueue = FUNC_3();
 VAR_4->Event = FUNC_1();
 VAR_4->FlushEvent = FUNC_1();

 VAR_4->Thread = FUNC_4(VAR_0, VAR_4);

 FUNC_5(VAR_4->Thread);

 return VAR_4;
}
