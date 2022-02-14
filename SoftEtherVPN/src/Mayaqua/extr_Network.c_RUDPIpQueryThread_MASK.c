
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int current_hostname ;
typedef scalar_t__ UINT64 ;
typedef scalar_t__ UINT ;
struct TYPE_2__ {int Halt; int HaltEvent; int My_Private_IP; int Lock; int SockEvent; int NatT_TranId; scalar_t__ NatT_RegisterFailNum; scalar_t__ NatT_GetTokenFailNum; scalar_t__ NatT_RegisterNextTick; scalar_t__ NatT_GetTokenNextTick; int NatT_IP; int CurrentRegisterHostname; } ;
typedef int THREAD ;
typedef TYPE_1__ RUDP_STACK ;
typedef int IP ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (char*,char*,...) ;
 int FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 (int *,char*) ;
 scalar_t__ FUNC_7 (int *,int) ;
 scalar_t__ FUNC_8 (void*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__) ;
 void* FUNC_12 () ;
 int VAR_1 ;
 int FUNC_13 () ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (char*,int ) ;
 int FUNC_16 (char*,int,int ) ;
 scalar_t__ FUNC_17 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (char*,int) ;

void FUNC_21(THREAD *VAR_8, void *VAR_9)
{
 RUDP_STACK *VAR_10;
 UINT64 VAR_11 = 0;
 UINT64 VAR_12 = 0;
 UINT VAR_13 = 0;
 void *VAR_14 = ((void*)0);
 char VAR_15[VAR_0];
 bool VAR_16 = 0;
 UINT VAR_17 = 0;

 if (VAR_8 == ((void*)0) || VAR_9 == ((void*)0))
 {
  return;
 }

 VAR_10 = (RUDP_STACK *)VAR_9;

 VAR_13 = FUNC_5();

 VAR_14 = FUNC_12();
 FUNC_8(VAR_14);

 FUNC_20(VAR_15, sizeof(VAR_15));

 while (VAR_10->Halt == 0)
 {
  UINT VAR_18 = FUNC_5();
  UINT64 VAR_19 = FUNC_17();
  bool VAR_20 = 0;

  if (VAR_18 != VAR_13)
  {
   VAR_16 = 0;
  }

  if ((VAR_18 != VAR_13) || (FUNC_8(VAR_14)))
  {
   if (VAR_16 == 0)
   {


    VAR_11 = 0;
    VAR_12 = 0;
    VAR_20 = 1;

    VAR_13 = VAR_18;

    VAR_16 = 1;
   }
  }
  else
  {
   VAR_16 = 0;
  }

  FUNC_10(VAR_10->Lock);
  {
   if (FUNC_15(VAR_15, VAR_10->CurrentRegisterHostname) != 0)
   {

    VAR_11 = 0;
    FUNC_16(VAR_15, sizeof(VAR_15), VAR_10->CurrentRegisterHostname);
   }
  }
  FUNC_18(VAR_10->Lock);


  if (VAR_11 == 0 || VAR_19 >= VAR_11)
  {
   IP VAR_21;

   if (FUNC_6(&VAR_21, VAR_15) && FUNC_9(&VAR_21) == 0)
   {
    FUNC_10(VAR_10->Lock);
    {

     if (FUNC_0(&VAR_10->NatT_IP, &VAR_21) != 0)
     {

      VAR_20 = 1;
      FUNC_1(&VAR_10->NatT_IP, &VAR_21, sizeof(IP));
     }
    }
    FUNC_18(VAR_10->Lock);
   }

   if (FUNC_9(&VAR_10->NatT_IP))
   {
    VAR_17++;

    VAR_11 = VAR_19 + FUNC_11((UINT64)VAR_2 * (UINT64)VAR_17, (UINT64)VAR_4);
   }
   else
   {
    VAR_11 = VAR_19 + (UINT64)VAR_3;
   }

   if (VAR_20)
   {
    FUNC_2("NAT-T: NAT-T Server IP (%s): %r\n", VAR_15, &VAR_10->NatT_IP);

    VAR_10->NatT_GetTokenNextTick = 0;
    VAR_10->NatT_RegisterNextTick = 0;
    VAR_10->NatT_GetTokenFailNum = 0;
    VAR_10->NatT_RegisterFailNum = 0;

    VAR_10->NatT_TranId = FUNC_13();

    FUNC_14(VAR_10->SockEvent);
   }
  }


  if (VAR_12 == 0 || VAR_19 >= VAR_12)
  {
   IP VAR_22;

   if (FUNC_7(&VAR_22, 0))
   {
    FUNC_10(VAR_10->Lock);
    {
     FUNC_1(&VAR_10->My_Private_IP, &VAR_22, sizeof(IP));
    }
    FUNC_18(VAR_10->Lock);
   }

   if (FUNC_9(&VAR_10->My_Private_IP))
   {
    VAR_12 = VAR_19 + (UINT64)VAR_5;
   }
   else
   {
    VAR_12 = VAR_19 + (UINT64)FUNC_4(VAR_7, VAR_6);
   }

   FUNC_2("NAT-T: My Private IP: %r\n", &VAR_10->My_Private_IP);
  }

  if (VAR_10->Halt)
  {
   break;
  }

  FUNC_19(VAR_10->HaltEvent, VAR_1);
 }

 FUNC_3(VAR_14);
}
