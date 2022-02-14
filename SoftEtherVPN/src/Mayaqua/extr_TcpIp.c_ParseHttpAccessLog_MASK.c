
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int value ;
typedef int name ;
typedef int h ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_17__ {char* Method; char* Path; char* Protocol; char* Hostname; char* Referer; char* UserAgent; int Port; } ;
struct TYPE_14__ {TYPE_1__* TCPHeader; } ;
struct TYPE_16__ {int PayloadSize; TYPE_2__ L4; int * Payload; } ;
struct TYPE_15__ {int NumTokens; char** Token; } ;
struct TYPE_13__ {int DstPort; } ;
typedef TYPE_3__ TOKEN_LIST ;
typedef TYPE_4__ PKT ;
typedef TYPE_5__ HTTPLOG ;
typedef int BUF ;


 char* FUNC_0 (int *) ;
 TYPE_5__* FUNC_1 (TYPE_5__*,int) ;
 scalar_t__ FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_7 (char*) ;
 int VAR_1 ;
 int * FUNC_8 () ;
 TYPE_3__* FUNC_9 (char*,char*) ;
 int FUNC_10 (char*,char*,int ) ;
 int FUNC_11 (int *,int ,int ) ;
 scalar_t__ FUNC_12 (char*,char*) ;
 int FUNC_13 (char*,int,char*) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (int *,int *,int) ;
 int FUNC_17 (TYPE_5__*,int) ;

HTTPLOG *FUNC_18(PKT *VAR_2)
{
 HTTPLOG VAR_3;
 UCHAR *VAR_4;
 UINT VAR_5;
 BUF *VAR_6;
 char *VAR_7;
 bool VAR_8 = 0;

 if (VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_4 = VAR_2->Payload;
 VAR_5 = VAR_2->PayloadSize;

 if (VAR_5 <= 5)
 {
  return ((void*)0);
 }


 if (FUNC_2(VAR_4, "GET ", 4) != 0 &&
  FUNC_2(VAR_4, "HEAD ", 5) != 0 &&
  FUNC_2(VAR_4, "POST ", 5) != 0)
 {
  return ((void*)0);
 }

 FUNC_17(&VAR_3, sizeof(VAR_3));

 VAR_3.Port = FUNC_3(VAR_2->L4.TCPHeader->DstPort);

 VAR_6 = FUNC_8();
 FUNC_16(VAR_6, VAR_4, VAR_5);
 FUNC_11(VAR_6, 0, 0);

 VAR_7 = FUNC_0(VAR_6);

 if (VAR_7 != ((void*)0))
 {
  TOKEN_LIST *VAR_9 = FUNC_9(VAR_7, " \t");
  if (VAR_9 != ((void*)0))
  {
   if (VAR_9->NumTokens == 3)
   {
    FUNC_13(VAR_3.Method, sizeof(VAR_3.Hostname), VAR_9->Token[0]);
    FUNC_15(VAR_3.Method);

    FUNC_13(VAR_3.Path, sizeof(VAR_3.Path), VAR_9->Token[1]);
    FUNC_15(VAR_3.Path);

    FUNC_13(VAR_3.Protocol, sizeof(VAR_3.Protocol), VAR_9->Token[2]);
    FUNC_15(VAR_3.Protocol);

    FUNC_14(VAR_3.Method);

    while (1)
    {
     char *VAR_10 = FUNC_0(VAR_6);
     UINT VAR_11;

     if (VAR_10 == ((void*)0))
     {
      break;
     }

     VAR_11 = FUNC_10(VAR_10, ":", 0);
     if (VAR_11 != VAR_0 && VAR_11 < (VAR_1 / 2))
     {
      char VAR_12[VAR_1];
      char VAR_13[VAR_1];

      FUNC_13(VAR_12, sizeof(VAR_12), VAR_10);
      VAR_12[VAR_11] = 0;
      FUNC_15(VAR_12);

      FUNC_13(VAR_13, sizeof(VAR_13), VAR_10 + VAR_11 + 1);
      FUNC_15(VAR_13);

      if (FUNC_12(VAR_12, "host") == 0)
      {
       FUNC_13(VAR_3.Hostname, sizeof(VAR_3.Hostname), VAR_13);
      }
      else if (FUNC_12(VAR_12, "referer") == 0)
      {
       FUNC_13(VAR_3.Referer, sizeof(VAR_3.Referer), VAR_13);
      }
      else if (FUNC_12(VAR_12, "user-agent") == 0)
      {
       FUNC_13(VAR_3.UserAgent, sizeof(VAR_3.UserAgent), VAR_13);
      }
     }

     FUNC_4(VAR_10);
    }

    if (FUNC_7(VAR_3.Hostname) == 0)
    {
     VAR_8 = 1;
    }
   }
   FUNC_6(VAR_9);
  }
 }

 FUNC_4(VAR_7);
 FUNC_5(VAR_6);

 if (VAR_8)
 {
  return FUNC_1(&VAR_3, sizeof(VAR_3));
 }
 else
 {
  return ((void*)0);
 }
}
