
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef void* UINT ;
struct TYPE_7__ {int Connected; int ServerMode; void* RemotePort; int RemoteIP; void* LocalPort; int LocalIP; } ;
typedef int TUBE ;
typedef int SOCK_EVENT ;
typedef TYPE_1__ SOCK ;
typedef int IP ;


 int FUNC_0 (int *,int *,int) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int *,int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int **,int **,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int,int ,int ,int) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (int *,int *) ;

void FUNC_10(SOCK **VAR_1, SOCK **VAR_2, IP *VAR_3, UINT VAR_4, IP *VAR_5, UINT VAR_6)
{
 IP VAR_7;
 TUBE *VAR_8, *VAR_9;
 SOCK *VAR_10, *VAR_11;
 SOCK_EVENT *VAR_12, *VAR_13;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 FUNC_7(&VAR_7, 127, 0, 0, 1);
 if (VAR_3 == ((void*)0))
 {
  VAR_3 = &VAR_7;
 }
 if (VAR_5 == ((void*)0))
 {
  VAR_5 = &VAR_7;
 }


 FUNC_3(&VAR_8, &VAR_9, 0);


 VAR_12 = FUNC_2();
 VAR_13 = FUNC_2();

 FUNC_9(VAR_8, VAR_12);
 FUNC_9(VAR_9, VAR_13);

 VAR_10 = FUNC_1(VAR_8, VAR_9);
 VAR_11 = FUNC_1(VAR_9, VAR_8);

 FUNC_0(&VAR_10->LocalIP, VAR_3, sizeof(IP));
 VAR_10->LocalPort = VAR_4;
 FUNC_0(&VAR_10->RemoteIP, VAR_5, sizeof(IP));
 VAR_10->RemotePort = VAR_6;

 FUNC_0(&VAR_11->LocalIP, VAR_5, sizeof(IP));
 VAR_11->LocalPort = VAR_6;
 FUNC_0(&VAR_11->RemoteIP, VAR_3, sizeof(IP));
 VAR_11->RemotePort = VAR_4;

 VAR_10->Connected = 1;
 VAR_10->ServerMode = 0;

 VAR_11->Connected = 1;
 VAR_11->ServerMode = 1;

 FUNC_8(VAR_10, VAR_0);
 FUNC_8(VAR_11, VAR_0);

 FUNC_4(VAR_10);
 FUNC_4(VAR_11);

 FUNC_5(VAR_12);
 FUNC_5(VAR_13);

 FUNC_6(VAR_8);
 FUNC_6(VAR_9);

 *VAR_1 = VAR_10;
 *VAR_2 = VAR_11;
}
