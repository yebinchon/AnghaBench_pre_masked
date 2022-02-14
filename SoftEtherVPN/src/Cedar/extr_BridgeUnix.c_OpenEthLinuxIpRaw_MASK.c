
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int pipe_read; int pipe_write; int SpecialFlag; int pipe_special_read2; int pipe_special_read3; } ;
struct TYPE_10__ {int socket; } ;
struct TYPE_9__ {int IsRawIpMode; int* RawIpMyMacAddr; int RawIP_TmpBufferSize; int RawIP_TmpBuffer; int RawIpSendQueue; int YourIP; int MyIP; TYPE_3__* RawIcmp; TYPE_6__* Cancel; TYPE_3__* RawUdp; TYPE_3__* RawTcp; void* Title; void* Name; } ;
typedef TYPE_1__ ETH ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 TYPE_6__* FUNC_6 () ;
 int FUNC_7 () ;
 void* FUNC_8 (int ,int *) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (int *,int,int,int,int) ;
 int FUNC_11 (TYPE_3__*,int) ;
 int FUNC_12 (int,int) ;
 int FUNC_13 (int,int) ;
 TYPE_1__* FUNC_14 (int) ;

ETH *FUNC_15()
{
 ETH *VAR_4;

 if (FUNC_3() == 0)
 {
  return ((void*)0);
 }

 VAR_4 = FUNC_14(sizeof(ETH));

 VAR_4->IsRawIpMode = 1;

 VAR_4->RawTcp = FUNC_8(FUNC_4(VAR_2), ((void*)0));
 VAR_4->RawUdp = FUNC_8(FUNC_4(VAR_3), ((void*)0));
 VAR_4->RawIcmp = FUNC_8(FUNC_4(VAR_1), ((void*)0));

 if (VAR_4->RawTcp == ((void*)0) || VAR_4->RawUdp == ((void*)0) || VAR_4->RawIcmp == ((void*)0))
 {
  FUNC_9(VAR_4->RawTcp);
  FUNC_9(VAR_4->RawUdp);
  FUNC_9(VAR_4->RawIcmp);

  FUNC_2(VAR_4);
  return ((void*)0);
 }

 FUNC_0(VAR_4->RawTcp);
 FUNC_0(VAR_4->RawUdp);
 FUNC_0(VAR_4->RawIcmp);

 FUNC_11(VAR_4->RawTcp, 1);
 FUNC_11(VAR_4->RawUdp, 1);
 FUNC_11(VAR_4->RawIcmp, 1);

 VAR_4->Name = FUNC_1(VAR_0);
 VAR_4->Title = FUNC_1(VAR_0);
 VAR_4->Cancel = FUNC_6();

 FUNC_12(VAR_4->Cancel->pipe_read, VAR_4->Cancel->pipe_write);
 VAR_4->Cancel->pipe_read = VAR_4->Cancel->pipe_write = -1;

 FUNC_13(VAR_4->RawTcp->socket, 1);
 FUNC_13(VAR_4->RawUdp->socket, 1);
 FUNC_13(VAR_4->RawIcmp->socket, 1);

 VAR_4->Cancel->SpecialFlag = 1;
 VAR_4->Cancel->pipe_read = VAR_4->RawTcp->socket;
 VAR_4->Cancel->pipe_special_read2 = VAR_4->RawUdp->socket;
 VAR_4->Cancel->pipe_special_read3 = VAR_4->RawIcmp->socket;

 VAR_4->RawIpMyMacAddr[2] = 0x01;
 VAR_4->RawIpMyMacAddr[5] = 0x01;

 FUNC_10(&VAR_4->MyIP, 10, 171, 7, 253);
 FUNC_10(&VAR_4->YourIP, 10, 171, 7, 254);

 VAR_4->RawIpSendQueue = FUNC_7();

 VAR_4->RawIP_TmpBufferSize = 67000;
 VAR_4->RawIP_TmpBuffer = FUNC_5(VAR_4->RawIP_TmpBufferSize);

 return VAR_4;
}
