
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ip_str ;
typedef size_t UINT ;
typedef int UCHAR ;
struct TYPE_4__ {int RemoteIP; } ;
typedef TYPE_1__ SOCK ;
typedef int HTTP_HEADER ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char*,int,int *) ;
 int * FUNC_5 (size_t) ;
 int * FUNC_6 (char*,int ,char*) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (TYPE_1__*,int *,int *,size_t) ;
 int FUNC_9 (int *,size_t) ;
 int FUNC_10 () ;
 size_t FUNC_11 () ;
 int VAR_3 ;

bool FUNC_12(SOCK *VAR_4)
{
 HTTP_HEADER *VAR_5;
 UINT VAR_6, VAR_7;
 UCHAR *VAR_8;
 char VAR_9[128];

 if (VAR_4 == ((void*)0))
 {
  return 0;
 }

 FUNC_4(VAR_9, sizeof(VAR_9), &VAR_4->RemoteIP);

 VAR_5 = FUNC_6("POST", VAR_2, "HTTP/1.1");
 FUNC_0(VAR_5, FUNC_7("Host", VAR_9));
 FUNC_0(VAR_5, FUNC_7("Content-Type", VAR_0));
 FUNC_0(VAR_5, FUNC_7("Connection", "Keep-Alive"));




 VAR_7 = FUNC_10() % (VAR_1 * 2);
 VAR_6 = FUNC_11() + VAR_7;
 VAR_8 = FUNC_5(VAR_6);
 FUNC_1(VAR_8, VAR_3, FUNC_11());
 FUNC_9(&VAR_8[FUNC_11()], VAR_7);


 if (FUNC_8(VAR_4, VAR_5, VAR_8, VAR_6) == 0)
 {
  FUNC_2(VAR_8);
  FUNC_3(VAR_5);
  return 0;
 }

 FUNC_2(VAR_8);
 FUNC_3(VAR_5);

 return 1;
}
