
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int device_name ;
struct TYPE_11__ {char* Name; } ;
typedef TYPE_2__ UNIX_VLAN ;
typedef int UINT ;
struct TYPE_14__ {int lock; TYPE_1__* ClientOption; } ;
struct TYPE_13__ {int AccountList; int UnixVLanList; } ;
struct TYPE_12__ {int NumTokens; char** Token; } ;
struct TYPE_10__ {char* DeviceName; } ;
typedef TYPE_3__ TOKEN_LIST ;
typedef TYPE_4__ CLIENT ;
typedef TYPE_5__ ACCOUNT ;


 int FUNC_0 (TYPE_4__*,char*) ;
 int FUNC_1 (TYPE_3__*) ;
 void* FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 TYPE_3__* FUNC_6 (int ,int ) ;
 int FUNC_7 (char*,int,char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_10(CLIENT *VAR_3)
{
 char VAR_4[VAR_0];

 if (VAR_3 == ((void*)0))
 {
  return;
 }
 {
  UNIX_VLAN *VAR_5;

  FUNC_5(VAR_3->UnixVLanList);

  if (FUNC_3(VAR_3->UnixVLanList) != 1)
  {
   FUNC_9(VAR_3->UnixVLanList);
   return;
  }
  VAR_5 = FUNC_2(VAR_3->UnixVLanList, 0);
  FUNC_7(VAR_4, sizeof(VAR_4), VAR_5->Name);

  FUNC_9(VAR_3->UnixVLanList);
 }


 {
  UINT VAR_6;
  FUNC_5(VAR_3->AccountList);
  {
   for (VAR_6 = 0;VAR_6 < FUNC_3(VAR_3->AccountList);VAR_6++)
   {
    ACCOUNT *VAR_7 = FUNC_2(VAR_3->AccountList, VAR_6);

    FUNC_4(VAR_7->lock);
    {
     if (FUNC_0(VAR_3, VAR_7->ClientOption->DeviceName) == 0)
     {
      FUNC_7(VAR_7->ClientOption->DeviceName, sizeof(VAR_7->ClientOption->DeviceName),
       VAR_4);
     }
    }
    FUNC_8(VAR_7->lock);
   }
  }
  FUNC_9(VAR_3->AccountList);
 }
}
