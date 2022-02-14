
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int UINT ;
typedef int UCHAR ;
struct TYPE_19__ {int* addr; } ;
struct TYPE_20__ {TYPE_2__ Gateway; } ;
struct TYPE_18__ {TYPE_2__ BroadcastAddress; TYPE_2__ DefaultGateway; int ClasslessRoute; int SubnetMask; TYPE_2__ ClientIPAddress; } ;
typedef TYPE_1__ IPC ;
typedef TYPE_2__ IP ;
typedef TYPE_3__ DHCP_CLASSLESS_ROUTE ;


 scalar_t__ FUNC_0 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*,int) ;
 TYPE_3__* FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,void*,int,TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*,void*,int,int*) ;
 int FUNC_5 (TYPE_2__*,TYPE_2__*,int *) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int) ;

void FUNC_8(IPC *VAR_0, void *VAR_1, UINT VAR_2)
{
 IP VAR_3, VAR_4;
 IP VAR_5;
 bool VAR_6 = 0;
 UCHAR VAR_7;
 DHCP_CLASSLESS_ROUTE *VAR_8 = ((void*)0);

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 < 20 || VAR_2 > 1500)
 {
  return;
 }

 VAR_7 = ((UCHAR *)VAR_1)[0];
 if (((VAR_7 >> 4) & 0x0f) != 4)
 {

  return;
 }


 FUNC_7(&VAR_3, *((UINT *)(((UCHAR *)VAR_1) + 12)));
 FUNC_7(&VAR_4, *((UINT *)(((UCHAR *)VAR_1) + 16)));


 if (FUNC_0(&VAR_3, &VAR_0->ClientIPAddress) != 0)
 {

  return;
 }

 if (FUNC_6(&VAR_4))
 {

  return;
 }

 if (FUNC_0(&VAR_4, &VAR_0->ClientIPAddress) == 0)
 {

  return;
 }


 FUNC_1(&VAR_5, &VAR_4, sizeof(IP));

 if (FUNC_5(&VAR_4, &VAR_0->ClientIPAddress, &VAR_0->SubnetMask) == 0)
 {
  VAR_8 = FUNC_2(&VAR_0->ClasslessRoute, &VAR_4);

  if (VAR_8 == ((void*)0))
  {
   FUNC_1(&VAR_5, &VAR_0->DefaultGateway, sizeof(IP));
  }
  else
  {
   FUNC_1(&VAR_5, &VAR_8->Gateway, sizeof(IP));
  }
 }

 if (FUNC_0(&VAR_0->BroadcastAddress, &VAR_4) == 0)
 {

  VAR_6 = 1;
 }

 if (VAR_4.addr[0] == 255 && VAR_4.addr[1] == 255 && VAR_4.addr[2] == 255 && VAR_4.addr[3] == 255)
 {

  VAR_6 = 1;
 }

 if (VAR_4.addr[0] >= 224 && VAR_4.addr[0] <= 239)
 {

  VAR_6 = 1;
 }

 if (VAR_6)
 {

  UCHAR VAR_9[6];
  UINT VAR_10;


  for (VAR_10 = 0;VAR_10 < 6;VAR_10++)
  {
   VAR_9[VAR_10] = 0xff;
  }


  FUNC_4(VAR_0, VAR_1, VAR_2, VAR_9);

  return;
 }

 if (FUNC_6(&VAR_5))
 {

  return;
 }


 FUNC_3(VAR_0, VAR_1, VAR_2, &VAR_5);
}
