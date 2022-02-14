
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int date_str ;
struct TYPE_3__ {int Cedar; int * FirstSock; } ;
typedef int SOCK_EVENT ;
typedef int SOCK ;
typedef int HTTP_HEADER ;
typedef TYPE_1__ CONNECTION ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int,int ) ;
 int VAR_0 ;
 int FUNC_5 (int *,int *) ;
 int VAR_1 ;
 int * FUNC_6 (char*,char*,char*) ;
 int FUNC_7 (char*,char*) ;
 int * FUNC_8 () ;
 int FUNC_9 (int *,int *,int *,int ) ;
 int FUNC_10 (int ,int *,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 () ;

bool FUNC_14(CONNECTION *VAR_2)
{
 SOCK *VAR_3;
 HTTP_HEADER *VAR_4;
 char VAR_5[VAR_1];
 bool VAR_6;
 bool VAR_7 = 0;
 SOCK_EVENT *VAR_8;

 if (VAR_2 == ((void*)0))
 {
  return 0;
 }

 VAR_3 = VAR_2->FirstSock;

 FUNC_4(VAR_5, sizeof(VAR_5), FUNC_13());


 VAR_4 = FUNC_6("HTTP/1.1", "200", "OK");
 FUNC_0(VAR_4, FUNC_7("Content-Length", "18446744073709551615"));
 FUNC_0(VAR_4, FUNC_7("Server", "Microsoft-HTTPAPI/2.0"));
 FUNC_0(VAR_4, FUNC_7("Date", VAR_5));

 VAR_6 = FUNC_9(VAR_3, VAR_4, ((void*)0), 0);

 FUNC_3(VAR_4);

 if (VAR_6)
 {
  FUNC_12(VAR_3, VAR_0);

  VAR_8 = FUNC_8();

  FUNC_5(VAR_3, VAR_8);

  FUNC_1("ProcessSstpHttps Start.\n");
  VAR_7 = FUNC_10(VAR_2->Cedar, VAR_3, VAR_8);
  FUNC_1("ProcessSstpHttps End.\n");

  FUNC_11(VAR_8);
 }

 FUNC_2(VAR_3);

 return VAR_7;
}
