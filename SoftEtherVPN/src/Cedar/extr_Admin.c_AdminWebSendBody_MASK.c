
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int date_str ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_11__ {int Method; } ;
struct TYPE_10__ {char* Data; } ;
typedef int SOCK ;
typedef TYPE_1__ HTTP_VALUE ;
typedef TYPE_2__ HTTP_HEADER ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char*,int,int ) ;
 TYPE_1__* FUNC_3 (TYPE_2__*,char*) ;
 int VAR_0 ;
 TYPE_2__* FUNC_4 (char*,char*,char*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (int *,TYPE_2__*,int *,int ) ;
 scalar_t__ FUNC_7 (int ,char*) ;
 int FUNC_8 () ;
 int FUNC_9 (char*,int ) ;

bool FUNC_10(SOCK *VAR_1, UINT VAR_2, char *VAR_3, UCHAR *VAR_4, UINT VAR_5, char *VAR_6, char *VAR_7, char *VAR_8,
       HTTP_HEADER *VAR_9)
{
 HTTP_HEADER *VAR_10;
 char VAR_11[VAR_0];
 char VAR_12[16];
 bool VAR_13 = 0;
 HTTP_VALUE *VAR_14;
 if (VAR_1 == ((void*)0) || VAR_3 == ((void*)0) || (VAR_5 != 0 && VAR_4 == ((void*)0)) || VAR_9 == ((void*)0))
 {
  return 0;
 }
 if (VAR_6 == ((void*)0))
 {
  VAR_6 = "text/html; charset=utf-8";
 }

 FUNC_9(VAR_12, VAR_2);
 FUNC_2(VAR_11, sizeof(VAR_11), FUNC_8());

 VAR_10 = FUNC_4("HTTP/1.1", VAR_12, VAR_3);

 if (FUNC_7(VAR_9->Method, "OPTIONS") == 0)
 {
  FUNC_0(VAR_10, FUNC_5("Allow", "OPTIONS, GET, POST"));
 }

 FUNC_0(VAR_10, FUNC_5("Cache-Control", "no-cache"));
 FUNC_0(VAR_10, FUNC_5("Content-Type", VAR_6));
 FUNC_0(VAR_10, FUNC_5("Date", VAR_11));
 FUNC_0(VAR_10, FUNC_5("Connection", "Keep-Alive"));
 FUNC_0(VAR_10, FUNC_5("Access-Control-Allow-Methods", "OPTIONS,GET,POST"));
 FUNC_0(VAR_10, FUNC_5("Access-Control-Allow-Headers", "X-VPNADMIN-HUBNAME,X-VPNADMIN-PASSWORD"));
 FUNC_0(VAR_10, FUNC_5("Access-Control-Allow-Credentials", "true"));

 VAR_14 = FUNC_3(VAR_9, "Origin");
 if (VAR_14 != ((void*)0))
 {
  FUNC_0(VAR_10, FUNC_5("Access-Control-Allow-Origin", VAR_14->Data));
 }

 if (VAR_7 != ((void*)0) && VAR_8 != ((void*)0))
 {
  FUNC_0(VAR_10, FUNC_5(VAR_7, VAR_8));
 }

 VAR_13 = FUNC_6(VAR_1, VAR_10, VAR_4, VAR_5);

 FUNC_1(VAR_10);

 return VAR_13;
}
