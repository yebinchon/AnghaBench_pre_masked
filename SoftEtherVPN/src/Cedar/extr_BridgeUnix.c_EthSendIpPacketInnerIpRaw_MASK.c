
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int USHORT ;
typedef int UINT ;
struct TYPE_5__ {int num_item; } ;
struct TYPE_4__ {void* RawIpYourMacAddr; void* RawIpMyMacAddr; TYPE_2__* RawIpSendQueue; } ;
typedef TYPE_1__ ETH ;
typedef int BUF ;


 int FUNC_0 (TYPE_2__*,int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,void*,int) ;
 int FUNC_4 (int *,int ) ;

void FUNC_5(ETH *VAR_0, void *VAR_1, UINT VAR_2, USHORT VAR_3)
{
 BUF *VAR_4;
 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == 0)
 {
  return;
 }

 if (VAR_0->RawIpSendQueue->num_item >= 1024)
 {
  return;
 }

 VAR_4 = FUNC_1();
 FUNC_3(VAR_4, VAR_0->RawIpYourMacAddr, 6);
 FUNC_3(VAR_4, VAR_0->RawIpMyMacAddr, 6);
 FUNC_4(VAR_4, VAR_3);
 FUNC_3(VAR_4, VAR_1, VAR_2);
 FUNC_2(VAR_4);

 FUNC_0(VAR_0->RawIpSendQueue, VAR_4);
}
