
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tmp ;
typedef int pin ;
typedef scalar_t__ UINT ;
struct TYPE_3__ {int DeviceName; int Id; } ;
typedef TYPE_1__ SECURE_DEVICE ;
typedef int SECURE ;
typedef int LIST ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int) ;
 int * FUNC_3 () ;
 TYPE_1__* FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,char*) ;
 int FUNC_7 (int *) ;
 int VAR_0 ;
 int * FUNC_8 (scalar_t__) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (char*) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (char*) ;
 int FUNC_15 (char*) ;

void FUNC_16()
{
 UINT VAR_1;
 LIST *VAR_2;
 FUNC_10("Secure Device Test Program\n"
  "Copyright (c) SoftEther Corporation. All Rights Reserved.\n\n");


 VAR_2 = FUNC_3();
 if (VAR_2 != ((void*)0))
 {
  UINT VAR_3;
  char VAR_4[VAR_0];
  FUNC_10("--- Secure Device List ---\n");
  for (VAR_1 = 0;VAR_1 < FUNC_5(VAR_2);VAR_1++)
  {
   SECURE_DEVICE *VAR_5 = FUNC_4(VAR_2, VAR_1);
   FUNC_10("%2u - %s\n", VAR_5->Id, VAR_5->DeviceName);
  }
  FUNC_10("\n");
  FUNC_10("Device ID >");
  FUNC_2(VAR_4, sizeof(VAR_4));
  VAR_3 = FUNC_14(VAR_4);
  if (VAR_3 == 0)
  {
   FUNC_10("Canceled.\n");
  }
  else
  {
   SECURE *VAR_6 = FUNC_8(VAR_3);
   FUNC_10("Opening Device...\n");
   if (VAR_6 == ((void*)0))
   {
    FUNC_10("OpenSec() Failed.\n");
   }
   else
   {
    FUNC_10("Opening Session...\n");
    if (FUNC_9(VAR_6, 0) == 0)
    {
     FUNC_10("OpenSecSession() Failed.\n");
    }
    else
    {
     while (1)
     {
      char VAR_7[VAR_0];
      FUNC_10("PIN Code >");
      FUNC_2(VAR_7, sizeof(VAR_7));
      FUNC_15(VAR_7);
      if (FUNC_12(VAR_7) == 0)
      {
       FUNC_10("Canceled.\n");
       break;
      }
      else
      {
       FUNC_10("Login...\n");
       if (FUNC_6(VAR_6, VAR_7))
       {
        FUNC_13(VAR_6);
        FUNC_10("Logout...\n");
        FUNC_7(VAR_6);
        break;
       }
       else
       {
        FUNC_10("Login Failed. Please Try Again.\n");
       }
      }
     }
     FUNC_10("Closing Session...\n");
     FUNC_1(VAR_6);
    }
    FUNC_10("Closing Device...\n");
    FUNC_0(VAR_6);
   }
  }
  FUNC_11(VAR_2);
 }
 else
 {
  FUNC_10("GetSecureDeviceList() Error.\n");
 }
}
