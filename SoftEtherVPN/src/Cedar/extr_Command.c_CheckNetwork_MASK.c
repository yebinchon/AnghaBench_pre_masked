
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int c ;
typedef int UINT ;
struct TYPE_14__ {TYPE_1__* ListenSocket; } ;
struct TYPE_13__ {int LocalPort; } ;
typedef int THREAD ;
typedef int SOCK_EVENT ;
typedef TYPE_1__ SOCK ;
typedef TYPE_2__ CHECK_NETWORK_1 ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (char*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__**) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int * FUNC_4 () ;
 int * FUNC_5 (int ,TYPE_2__*) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (TYPE_1__*,int*,int,int) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int VAR_2 ;
 int FUNC_11 (TYPE_1__*,int *,int *) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (TYPE_2__*,int) ;
 TYPE_1__** FUNC_16 (int) ;

bool FUNC_17()
{
 CHECK_NETWORK_1 VAR_3;
 THREAD *VAR_4;
 SOCK *VAR_5;
 UINT VAR_6;
 UINT VAR_7, VAR_8;
 bool VAR_9 = 1;
 SOCK **VAR_10;
 SOCK_EVENT *VAR_11 = FUNC_4();

 FUNC_15(&VAR_3, sizeof(VAR_3));
 VAR_4 = FUNC_5(VAR_0, &VAR_3);
 FUNC_14(VAR_4);

 VAR_5 = VAR_3.ListenSocket;

 VAR_6 = VAR_5->LocalPort;

 VAR_8 = 8;
 VAR_10 = FUNC_16(sizeof(SOCK *) * VAR_8);
 for (VAR_7 = 0;VAR_7 < VAR_8;VAR_7++)
 {
  VAR_10[VAR_7] = FUNC_0("localhost", VAR_6);
  if (VAR_10[VAR_7] == ((void*)0))
  {
   FUNC_6("Connect Failed. (%u)\n", VAR_7);
   VAR_9 = 0;
   VAR_8 = VAR_7;
   break;
  }
  if (FUNC_11(VAR_10[VAR_7], ((void*)0), ((void*)0)) == 0)
  {
   FUNC_8(VAR_10[VAR_7]);
   FUNC_6("Connect Failed. (%u)\n", VAR_7);
   VAR_9 = 0;
   VAR_8 = VAR_7;
   break;
  }

  FUNC_3(VAR_10[VAR_7], VAR_11);
 }

 if (VAR_9)
 {
  while (1)
  {
   UINT VAR_12;
   bool VAR_13 = 0;
   bool VAR_14 = 1;

   for (VAR_12 = 0;VAR_12 < VAR_8;VAR_12++)
   {
    UINT VAR_15;
    UINT VAR_16;

    VAR_15 = 0;
    VAR_16 = FUNC_7(VAR_10[VAR_12], &VAR_15, sizeof(UINT), 1);
    if (VAR_16 == 0)
    {
     FUNC_6("Recv Failed (Disconnected).\n", VAR_16);
     VAR_13 = 1;
     VAR_9 = 0;
    }
    if (VAR_16 != VAR_2)
    {
     VAR_14 = 0;
    }

    if (VAR_15 >= 128)
    {
     VAR_13 = 1;
    }
   }

   if (VAR_13)
   {
    break;
   }

   if (VAR_14)
   {
    FUNC_12(VAR_11, VAR_1);
   }
  }
 }

 for (VAR_7 = 0;VAR_7 < VAR_8;VAR_7++)
 {
  FUNC_1(VAR_10[VAR_7]);
  FUNC_8(VAR_10[VAR_7]);
 }
 FUNC_2(VAR_10);

 FUNC_1(VAR_5);

 FUNC_13(VAR_4, VAR_1);
 FUNC_10(VAR_4);

 FUNC_8(VAR_5);

 FUNC_9(VAR_11);

 return VAR_9;
}
