
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ip_str ;
typedef int date_str ;
struct TYPE_8__ {int Size; int Buf; } ;
struct TYPE_7__ {int RemoteIP; } ;
typedef TYPE_1__ SOCK ;
typedef int PACK ;
typedef int HTTP_HEADER ;
typedef TYPE_2__ BUF ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int,int ) ;
 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (char*,int,int *) ;
 int VAR_3 ;
 int * FUNC_6 (char*,int ,char*) ;
 int FUNC_7 (char*,char*) ;
 TYPE_2__* FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*,int *,int ,int ) ;
 int FUNC_10 () ;

bool FUNC_11(SOCK *VAR_4, PACK *VAR_5)
{
 BUF *VAR_6;
 bool VAR_7;
 HTTP_HEADER *VAR_8;
 char VAR_9[VAR_3];
 char VAR_10[VAR_3];


 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
 {
  return 0;
 }

 FUNC_5(VAR_10, sizeof(VAR_10), &VAR_4->RemoteIP);

 FUNC_1(VAR_5);

 VAR_6 = FUNC_8(VAR_5);
 if (VAR_6 == ((void*)0))
 {
  return 0;
 }

 VAR_8 = FUNC_6("POST", VAR_2, "HTTP/1.1");

 FUNC_4(VAR_9, sizeof(VAR_9), FUNC_10());
 FUNC_0(VAR_8, FUNC_7("Date", VAR_9));
 FUNC_0(VAR_8, FUNC_7("Host", VAR_10));
 FUNC_0(VAR_8, FUNC_7("Keep-Alive", VAR_1));
 FUNC_0(VAR_8, FUNC_7("Connection", "Keep-Alive"));
 FUNC_0(VAR_8, FUNC_7("Content-Type", VAR_0));

 VAR_7 = FUNC_9(VAR_4, VAR_8, VAR_6->Buf, VAR_6->Size);

 FUNC_3(VAR_8);
 FUNC_2(VAR_6);

 return VAR_7;
}
