
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_4__ {int Halt; int WorkerList; int ErrorCode; int Print; int Param; int Thread; int ListenSocketV6; int ListenSocket; } ;
typedef TYPE_1__ TTS ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*) ;

UINT FUNC_8(TTS *VAR_2)
{
 UINT VAR_3;

 if (VAR_2 == ((void*)0))
 {
  return VAR_0;
 }

 FUNC_5(VAR_2->Param, VAR_2->Print, FUNC_7("TTS_STOP_INIT"));

 VAR_2->Halt = 1;
 FUNC_0(VAR_2->ListenSocket);
 FUNC_3(VAR_2->ListenSocket);
 FUNC_0(VAR_2->ListenSocketV6);
 FUNC_3(VAR_2->ListenSocketV6);


 FUNC_6(VAR_2->Thread, VAR_1);

 FUNC_4(VAR_2->Thread);

 FUNC_5(VAR_2->Param, VAR_2->Print, FUNC_7("TTS_STOP_FINISHED"));

 VAR_3 = VAR_2->ErrorCode;

 FUNC_2(VAR_2->WorkerList);

 FUNC_1(VAR_2);

 return VAR_3;
}
