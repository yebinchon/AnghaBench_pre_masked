
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int tmp ;
typedef int ip_str ;
typedef int UINT ;
struct TYPE_12__ {int Size; int Buf; } ;
struct TYPE_11__ {int RemoteIP; } ;
typedef TYPE_1__ SOCK ;
typedef int HTTP_HEADER ;
typedef TYPE_2__ BUF ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (char*,int ,int) ;
 char* VAR_0 ;
 int FUNC_2 (void*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 char* VAR_1 ;
 char* FUNC_6 (int *) ;
 int FUNC_7 (char*,int,int *) ;
 scalar_t__ FUNC_8 (char*,int ) ;
 int VAR_2 ;
 int FUNC_9 (int,int) ;
 void* FUNC_10 (int) ;
 TYPE_2__* FUNC_11 () ;
 int * FUNC_12 (char*,char*,char*,int) ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 (TYPE_1__*,void*,int,int) ;
 int * FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_2__*,int ,int ) ;
 int FUNC_17 (TYPE_1__*,char*,int ,int) ;
 scalar_t__ FUNC_18 (char*,int ) ;
 int FUNC_19 (char*) ;
 int FUNC_20 (TYPE_2__*,void*,int) ;
 int FUNC_21 (char*,int) ;
 int VAR_3 ;
 int VAR_4 ;

bool FUNC_22(SOCK *VAR_5)
{
 HTTP_HEADER *VAR_6;
 char VAR_7[VAR_2];
 char *VAR_8;
 UINT VAR_9;
 BUF *VAR_10;
 void *VAR_11;
 UINT VAR_12 = 32768;
 bool VAR_13 = 0;

 if (VAR_5 == ((void*)0))
 {
  return 0;
 }

 FUNC_7(VAR_7, sizeof(VAR_7), &VAR_5->RemoteIP);


 VAR_6 = FUNC_12("GET", "/", "HTTP/1.1", 1);
 FUNC_0(VAR_6, FUNC_13("X-VPN", "1"));
 FUNC_0(VAR_6, FUNC_13("Host", VAR_7));
 FUNC_0(VAR_6, FUNC_13("Keep-Alive", VAR_1));
 FUNC_0(VAR_6, FUNC_13("Connection", "Keep-Alive"));
 FUNC_0(VAR_6, FUNC_13("Accept-Language", "ja"));
 FUNC_0(VAR_6, FUNC_13("User-Agent", VAR_0));
 FUNC_0(VAR_6, FUNC_13("Pragma", "no-cache"));
 FUNC_0(VAR_6, FUNC_13("Cache-Control", "no-cache"));



 VAR_8 = FUNC_6(VAR_6);
 FUNC_4(VAR_6);


 if (FUNC_17(VAR_5, VAR_8, FUNC_19(VAR_8), 1) == 0)
 {
  FUNC_2(VAR_8);
  return 0;
 }

 FUNC_2(VAR_8);


 VAR_6 = FUNC_15(VAR_5);
 if (VAR_6 == ((void*)0))
 {
  return 0;
 }


 VAR_9 = FUNC_5(VAR_6);
 FUNC_4(VAR_6);

 if (VAR_9 == 0 || VAR_9 >= (1024 * 1024))
 {
  return 0;
 }


 VAR_10 = FUNC_11();
 VAR_11 = FUNC_10(VAR_12);

 while (1)
 {
  UINT VAR_14 = FUNC_9(VAR_12, VAR_9 - VAR_10->Size);
  UINT VAR_15;

  if (VAR_14 == 0)
  {
   VAR_13 = 1;
   break;
  }

  VAR_15 = FUNC_14(VAR_5, VAR_11, VAR_14, 1);
  if (VAR_15 == 0)
  {

   break;
  }

  FUNC_20(VAR_10, VAR_11, VAR_15);
 }

 FUNC_16(VAR_10, 0, 0);
 FUNC_2(VAR_11);

 if (VAR_13)
 {

  char VAR_16[1024];

  FUNC_21(VAR_16, sizeof(VAR_16));

  FUNC_1(VAR_16, VAR_10->Buf, FUNC_9(VAR_10->Size, (sizeof(VAR_16) - 1)));

  VAR_13 = 0;

  if (FUNC_18(VAR_16, VAR_3))
  {
   VAR_13 = 1;
  }
  else if (FUNC_8(VAR_16, VAR_4))
  {
   VAR_13 = 1;
  }
 }

 FUNC_3(VAR_10);

 return VAR_13;
}
