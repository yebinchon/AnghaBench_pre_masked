
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int tmp ;
struct TYPE_10__ {int SockEvent; } ;
typedef TYPE_1__ VH ;
typedef int UINT ;
struct TYPE_11__ {int ProxyDns; int UdpSendQueue; int DestIpProxy; } ;
typedef TYPE_2__ NAT_ENTRY ;
typedef int IP ;
typedef int BLOCK ;


 int FUNC_0 (void*,void*,int ) ;
 TYPE_2__* FUNC_1 (TYPE_1__*,int ,int ,int ,int ,int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;
 int VAR_0 ;
 void* FUNC_7 (int ) ;
 int VAR_1 ;
 int * FUNC_8 (void*,int ,int ) ;
 TYPE_2__* FUNC_9 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_11 (int ) ;

void FUNC_12(VH *VAR_2, UINT VAR_3, UINT VAR_4, UINT VAR_5, UINT VAR_6, void *VAR_7, UINT VAR_8, bool VAR_9)
{
 NAT_ENTRY *VAR_10, VAR_11;
 BLOCK *VAR_12;
 void *VAR_13;
 UINT VAR_14 = 0;

 if (VAR_7 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 if (VAR_9)
 {

  IP VAR_15;
  char VAR_16[VAR_0];
  if (FUNC_3(&VAR_15) == 0)
  {

   FUNC_2("Failed to GetDefaultDns()\n");
   return;
  }
  VAR_14 = FUNC_5(&VAR_15);
  FUNC_4(VAR_16, sizeof(VAR_16), &VAR_15);
  FUNC_2("Redirect to DNS Server %s\n", VAR_16);
 }


 FUNC_10(&VAR_11, VAR_1, VAR_3, VAR_4, VAR_5, VAR_6, 0, 0);
 VAR_10 = FUNC_9(VAR_2, &VAR_11);

 if (VAR_10 == ((void*)0))
 {

  VAR_10 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_9 ? VAR_14 : 0);
  if (VAR_10 == ((void*)0))
  {

   return;
  }

  if (VAR_9)
  {
   VAR_10->ProxyDns = 1;
   VAR_10->DestIpProxy = VAR_14;
  }
 }


 VAR_13 = FUNC_7(VAR_8);
 FUNC_0(VAR_13, VAR_7, VAR_8);
 VAR_12 = FUNC_8(VAR_13, VAR_8, 0);
 FUNC_6(VAR_10->UdpSendQueue, VAR_12);

 FUNC_11(VAR_2->SockEvent);
}
