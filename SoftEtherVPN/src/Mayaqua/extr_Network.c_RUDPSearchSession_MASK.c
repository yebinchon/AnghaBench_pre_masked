
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* UINT ;
struct TYPE_8__ {void* YourPort; int YourIp; void* MyPort; int MyIp; } ;
struct TYPE_7__ {int SessionList; } ;
typedef TYPE_1__ RUDP_STACK ;
typedef TYPE_2__ RUDP_SESSION ;
typedef int IP ;


 int FUNC_0 (int *,int *,int) ;
 TYPE_2__* FUNC_1 (int ,TYPE_2__*) ;

RUDP_SESSION *FUNC_2(RUDP_STACK *VAR_0, IP *VAR_1, UINT VAR_2, IP *VAR_3, UINT VAR_4)
{
 RUDP_SESSION VAR_5;
 RUDP_SESSION *VAR_6;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return ((void*)0);
 }

 FUNC_0(&VAR_5.MyIp, VAR_1, sizeof(IP));
 VAR_5.MyPort = VAR_2;
 FUNC_0(&VAR_5.YourIp, VAR_3, sizeof(IP));
 VAR_5.YourPort = VAR_4;

 VAR_6 = FUNC_1(VAR_0->SessionList, &VAR_5);

 return VAR_6;
}
