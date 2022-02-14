
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT64 ;
typedef void* UINT ;
struct TYPE_5__ {int NumTcp; scalar_t__ Type; int Double; int Raw; int* Cancel; int Thread; int * Print; void* Param; int ErrorCode; int * StartEvent; int Span; int Host; void* Port; int InitedEvent; } ;
typedef int TT_PRINT_PROC ;
typedef TYPE_1__ TTC ;
typedef int EVENT ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ,int,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (void*,int *,int ) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (int) ;
 int FUNC_6 (char*) ;

TTC *FUNC_7(char *VAR_3, UINT VAR_4, UINT VAR_5, UINT VAR_6, UINT64 VAR_7, bool VAR_8, bool VAR_9, TT_PRINT_PROC *VAR_10, void *VAR_11, EVENT *VAR_12, bool *VAR_13)
{
 TTC *VAR_14;

 VAR_14 = FUNC_5(sizeof(TTC));
 VAR_14->InitedEvent = FUNC_0();
 VAR_14->Port = VAR_4;
 FUNC_2(VAR_14->Host, sizeof(VAR_14->Host), VAR_3);
 VAR_14->NumTcp = VAR_5;
 VAR_14->Type = VAR_6;
 VAR_14->Span = VAR_7;
 VAR_14->Double = VAR_8;
 VAR_14->Raw = VAR_9;
 VAR_14->StartEvent = VAR_12;
 VAR_14->Cancel = VAR_13;

 if (VAR_14->Type == VAR_1 && VAR_14->NumTcp < 2)
 {
  VAR_14->NumTcp = 2;
 }

 VAR_14->Print = VAR_10;
 VAR_14->Param = VAR_11;
 VAR_14->ErrorCode = VAR_0;

 FUNC_3(VAR_14->Param, VAR_14->Print, FUNC_6("TTC_INIT"));

 VAR_14->Thread = FUNC_1(VAR_2, VAR_14);
 FUNC_4(VAR_14->Thread);

 return VAR_14;
}
