
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_51__ TYPE_8__ ;
typedef struct TYPE_50__ TYPE_7__ ;
typedef struct TYPE_49__ TYPE_6__ ;
typedef struct TYPE_48__ TYPE_5__ ;
typedef struct TYPE_47__ TYPE_4__ ;
typedef struct TYPE_46__ TYPE_3__ ;
typedef struct TYPE_45__ TYPE_2__ ;
typedef struct TYPE_44__ TYPE_1__ ;


struct TYPE_46__ {int size; int data; TYPE_6__* header; } ;
typedef TYPE_3__ WU_WEBPAGE ;
typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_51__ {int Size; int Buf; } ;
struct TYPE_50__ {int IsJsonRpc; int WasSstp; scalar_t__ JsonRpcAuthed; void* Type; TYPE_4__* FirstSock; TYPE_2__* Cedar; void* Err; } ;
struct TYPE_49__ {int Target; int Version; int Method; } ;
struct TYPE_48__ {int DisableJsonRpcWebApi; int DisableSSTPServer; scalar_t__ UseWebUI; } ;
struct TYPE_44__ {int* addr; } ;
struct TYPE_47__ {TYPE_1__ RemoteIP; scalar_t__ IsReverseAcceptedSocket; int SecureMode; } ;
struct TYPE_45__ {int WebUI; TYPE_5__* Server; } ;
typedef TYPE_4__ SOCK ;
typedef TYPE_5__ SERVER ;
typedef TYPE_6__ HTTP_HEADER ;
typedef TYPE_7__ CONNECTION ;
typedef TYPE_8__ BUF ;


 int FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (TYPE_6__*,int ) ;
 int FUNC_2 (TYPE_7__*,TYPE_4__*,TYPE_6__*,int ) ;
 int FUNC_3 (TYPE_7__*,TYPE_4__*,TYPE_6__*,scalar_t__,int ) ;
 void* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ FUNC_4 (int *,int ,scalar_t__) ;
 int FUNC_5 (TYPE_4__*) ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_8__*) ;
 int FUNC_8 (TYPE_6__*) ;
 scalar_t__ FUNC_9 (TYPE_6__*) ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (TYPE_5__*,char*) ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 char* VAR_8 ;
 char* VAR_9 ;
 int VAR_10 ;
 int FUNC_12 (TYPE_4__*,int ,char*) ;
 int FUNC_13 (TYPE_4__*,int ) ;
 int FUNC_14 (TYPE_4__*,int ,int ,int ) ;
 int FUNC_15 (TYPE_7__*,TYPE_4__*,TYPE_6__*,int ) ;
 int FUNC_16 (TYPE_7__*,TYPE_4__*,TYPE_6__*,int ) ;
 int FUNC_17 (TYPE_7__*,TYPE_4__*,TYPE_6__*,scalar_t__) ;
 scalar_t__ VAR_11 ;
 int * FUNC_18 (scalar_t__) ;
 TYPE_6__* FUNC_19 (char*,char*,char*) ;
 int FUNC_20 (char*,char*) ;
 int FUNC_21 (TYPE_4__*,TYPE_6__*,int ,int ) ;
 TYPE_8__* FUNC_22 (char*) ;
 int FUNC_23 (TYPE_4__*,int *,scalar_t__,int ) ;
 TYPE_6__* FUNC_24 (TYPE_4__*) ;
 char* VAR_12 ;
 int VAR_13 ;
 int FUNC_25 () ;
 scalar_t__ FUNC_26 () ;
 scalar_t__ FUNC_27 (int ,char*) ;
 scalar_t__ FUNC_28 (int ,char*) ;
 scalar_t__ FUNC_29 (int ) ;
 int VAR_14 ;
 int FUNC_30 (TYPE_3__*) ;
 TYPE_3__* FUNC_31 (int ,int ) ;

bool FUNC_32(CONNECTION *VAR_15, char **VAR_16)
{
 HTTP_HEADER *VAR_17;
 UCHAR *VAR_18;
 UINT VAR_19;
 SOCK *VAR_20;
 UINT VAR_21 = 0, VAR_22 = 19;
 SERVER *VAR_23;
 char *VAR_24 = VAR_9;

 if (VAR_15 == ((void*)0))
 {
  return 0;
 }

 VAR_23 = VAR_15->Cedar->Server;

 VAR_20 = VAR_15->FirstSock;

 while (1)
 {
  bool VAR_25 = 0;

  VAR_21++;
  if (VAR_21 > VAR_22)
  {

   FUNC_5(VAR_20);
   VAR_15->Err = VAR_2;

   *VAR_16 = "HTTP_TOO_MANY_REQUEST";
   return 0;
  }

  VAR_17 = FUNC_24(VAR_20);
  if (VAR_17 == ((void*)0))
  {
   VAR_15->Err = VAR_2;
   if (VAR_15->IsJsonRpc)
   {
    VAR_15->Err = VAR_3;
   }
   return 0;
  }


  if (FUNC_28(VAR_17->Method, "POST") == 0)
  {

   VAR_19 = FUNC_9(VAR_17);

   if (VAR_23->DisableJsonRpcWebApi == 0)
   {
    if (FUNC_28(VAR_17->Target, "/api") == 0 || FUNC_28(VAR_17->Target, "/api/") == 0)
    {
     VAR_15->IsJsonRpc = 1;
     VAR_15->Type = VAR_0;

     FUNC_17(VAR_15, VAR_20, VAR_17, VAR_19);

     FUNC_8(VAR_17);

     if (VAR_15->JsonRpcAuthed)
     {
      VAR_21 = 0;
     }

     continue;
    }
    else if (FUNC_27(VAR_17->Target, "/admin"))
    {
     VAR_15->IsJsonRpc = 1;
     VAR_15->Type = VAR_0;

     FUNC_3(VAR_15, VAR_20, VAR_17, VAR_19, VAR_17->Target);

     FUNC_8(VAR_17);

     if (VAR_15->JsonRpcAuthed)
     {
      VAR_21 = 0;
     }

     continue;
    }
   }

   if ((VAR_19 > VAR_11 || VAR_19 < FUNC_26()) && (VAR_19 != FUNC_29(VAR_10)))
   {

    FUNC_12(VAR_20, VAR_17->Target, ((void*)0));
    FUNC_8(VAR_17);
    VAR_15->Err = VAR_2;
    *VAR_16 = "POST_Recv_TooLong";
    return 0;
   }
   VAR_18 = FUNC_18(VAR_19);
   if (FUNC_23(VAR_20, VAR_18, VAR_19, VAR_20->SecureMode) == 0)
   {

    FUNC_6(VAR_18);
    FUNC_8(VAR_17);
    VAR_15->Err = VAR_3;
    *VAR_16 = "POST_Recv_Failed";
    return 0;
   }

   if ((FUNC_28(VAR_17->Target, VAR_24) != 0) || VAR_25)
   {

    FUNC_13(VAR_20, VAR_17->Target);
    FUNC_6(VAR_18);
    FUNC_8(VAR_17);
    *VAR_16 = "POST_Target_Wrong";
   }
   else
   {

    if ((VAR_19 == FUNC_29(VAR_10) && (FUNC_4(VAR_18, VAR_10, VAR_19) == 0))
     || ((VAR_19 >= FUNC_26()) && FUNC_4(VAR_18, VAR_14, FUNC_26()) == 0))
    {

     FUNC_6(VAR_18);
     FUNC_8(VAR_17);
     return 1;
    }
    else
    {

     FUNC_12(VAR_20, VAR_17->Target, ((void*)0));
     FUNC_8(VAR_17);
     *VAR_16 = "POST_WaterMark_Error";
    }
   }
  }
  else if (FUNC_28(VAR_17->Method, "OPTIONS") == 0)
  {
   if (VAR_23->DisableJsonRpcWebApi == 0)
   {
    if (FUNC_28(VAR_17->Target, "/api") == 0 || FUNC_28(VAR_17->Target, "/api/") == 0 || FUNC_27(VAR_17->Target, "/admin"))
    {
     VAR_15->IsJsonRpc = 1;
     VAR_15->Type = VAR_0;

     FUNC_16(VAR_15, VAR_20, VAR_17, VAR_17->Target);

     FUNC_8(VAR_17);

     VAR_21 = 0;

     continue;
    }
   }
  }
  else if (FUNC_28(VAR_17->Method, "SSTP_DUPLEX_POST") == 0 && (VAR_23->DisableSSTPServer == 0 || VAR_20->IsReverseAcceptedSocket
   ) &&
   FUNC_11(VAR_23, "b_support_sstp") && FUNC_10() == 0)
  {

   VAR_15->WasSstp = 1;

   if (FUNC_28(VAR_17->Target, VAR_12) == 0)
   {
    bool VAR_26;

    VAR_15->Type = VAR_1;

    VAR_26 = FUNC_0(VAR_15);

    VAR_15->Err = VAR_3;
    FUNC_8(VAR_17);

    if (VAR_26)
    {
     *VAR_16 = "";
    }
    else
    {
     *VAR_16 = "SSTP_ABORT";
    }

    return 0;
   }
   else
   {

    FUNC_13(VAR_20, VAR_17->Target);
    *VAR_16 = "SSTP_URL_WRONG";
   }

   FUNC_8(VAR_17);
  }
  else
  {

   if (FUNC_28(VAR_17->Method, "GET") != 0 && FUNC_28(VAR_17->Method, "HEAD") != 0
     && FUNC_28(VAR_17->Method, "POST") != 0)
   {

    FUNC_14(VAR_20, VAR_17->Method, VAR_17->Target, VAR_17->Version);
    *VAR_16 = "HTTP_BAD_METHOD";
   }
   else
   {

    if (FUNC_28(VAR_17->Target, "/") == 0)
    {

     *VAR_16 = "HTTP_ROOT";

     {

      FUNC_12(VAR_15->FirstSock, VAR_17->Target, "");
     }
    }
    else
    {
     bool VAR_27 = 0;


     if (VAR_15->Cedar->Server != ((void*)0) && VAR_15->Cedar->Server->UseWebUI)
     {
      WU_WEBPAGE *VAR_28;


      VAR_28 = FUNC_31(VAR_17->Target, VAR_15->Cedar->WebUI);

      if (VAR_28 != ((void*)0))
      {
       FUNC_21(VAR_20, VAR_28->header, VAR_28->data, VAR_28->size);
       VAR_27 = 1;
       FUNC_30(VAR_28);
      }

     }

     if (VAR_15->FirstSock->RemoteIP.addr[0] == 127)
     {
      if (FUNC_28(VAR_17->Target, VAR_8) == 0)
      {

       FUNC_8(VAR_17);
       VAR_17 = FUNC_19("HTTP/1.1", "202", "OK");
       FUNC_1(VAR_17, FUNC_20("Content-Type", VAR_4));
       FUNC_1(VAR_17, FUNC_20("Connection", "Keep-Alive"));
       FUNC_1(VAR_17, FUNC_20("Keep-Alive", VAR_6));
       FUNC_21(VAR_20, VAR_17, VAR_13, FUNC_25());
       VAR_27 = 1;
      }
      else if (FUNC_27(VAR_17->Target, VAR_7))
      {
       BUF *VAR_29;


       VAR_29 = FUNC_22("|Pictures.mht");

       if (VAR_29 != ((void*)0))
       {
        FUNC_8(VAR_17);
        VAR_17 = FUNC_19("HTTP/1.1", "202", "OK");
        FUNC_1(VAR_17, FUNC_20("Content-Type", VAR_5));
        FUNC_1(VAR_17, FUNC_20("Connection", "Keep-Alive"));
        FUNC_1(VAR_17, FUNC_20("Keep-Alive", VAR_6));
        FUNC_21(VAR_20, VAR_17, VAR_29->Buf, VAR_29->Size);
        VAR_27 = 1;

        FUNC_7(VAR_29);
       }
      }
     }

     if (VAR_27 == 0)
     {
      if (VAR_23->DisableJsonRpcWebApi == 0)
      {
       if (FUNC_27(VAR_17->Target, "/api?") || FUNC_27(VAR_17->Target, "/api/") || FUNC_28(VAR_17->Target, "/api") == 0)
       {
        VAR_15->IsJsonRpc = 1;
        VAR_15->Type = VAR_0;

        FUNC_15(VAR_15, VAR_20, VAR_17, VAR_17->Target);

        if (VAR_15->JsonRpcAuthed)
        {
         VAR_21 = 0;
        }

        FUNC_8(VAR_17);

        continue;
       }
       else if (FUNC_27(VAR_17->Target, "/admin"))
       {
        VAR_15->IsJsonRpc = 1;
        VAR_15->Type = VAR_0;

        FUNC_2(VAR_15, VAR_20, VAR_17, VAR_17->Target);

        if (VAR_15->JsonRpcAuthed)
        {
         VAR_21 = 0;
        }

        FUNC_8(VAR_17);

        continue;
       }
      }
     }

     if (VAR_27 == 0)
     {

      FUNC_13(VAR_20, VAR_17->Target);

      *VAR_16 = "HTTP_NOT_FOUND";
     }
    }
   }
   FUNC_8(VAR_17);
  }
 }
}
