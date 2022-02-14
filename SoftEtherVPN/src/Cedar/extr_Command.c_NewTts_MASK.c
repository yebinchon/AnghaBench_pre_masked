
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_5__ {int * Thread; int WorkerList; int * Print; void* Param; int Port; } ;
typedef int TT_PRINT_PROC ;
typedef TYPE_1__ TTS ;
typedef int THREAD ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (void*,int *,int ) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (int) ;
 int FUNC_5 (char*) ;

TTS *FUNC_6(UINT VAR_1, void *VAR_2, TT_PRINT_PROC *VAR_3)
{
 TTS *VAR_4;
 THREAD *VAR_5;

 VAR_4 = FUNC_4(sizeof(TTS));
 VAR_4->Port = VAR_1;
 VAR_4->Param = VAR_2;
 VAR_4->Print = VAR_3;

 FUNC_2(VAR_2, VAR_3, FUNC_5("TTS_INIT"));

 VAR_4->WorkerList = FUNC_0(((void*)0));


 VAR_5 = FUNC_1(VAR_0, VAR_4);
 FUNC_3(VAR_5);

 VAR_4->Thread = VAR_5;

 return VAR_4;
}
