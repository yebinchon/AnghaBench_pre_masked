
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int date_str ;
struct TYPE_4__ {int Size; int Buf; } ;
typedef int SOCK ;
typedef int PACK ;
typedef int HTTP_HEADER ;
typedef TYPE_1__ BUF ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int,int ) ;
 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int * FUNC_5 (char*,char*,char*) ;
 int FUNC_6 (char*,char*) ;
 TYPE_1__* FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,int ,int ) ;
 int FUNC_9 () ;

bool FUNC_10(SOCK *VAR_3, PACK *VAR_4)
{
 BUF *VAR_5;
 bool VAR_6;
 HTTP_HEADER *VAR_7;
 char VAR_8[VAR_2];

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
 {
  return 0;
 }

 FUNC_1(VAR_4);

 VAR_5 = FUNC_7(VAR_4);
 if (VAR_5 == ((void*)0))
 {
  return 0;
 }

 VAR_7 = FUNC_5("HTTP/1.1", "200", "OK");

 FUNC_4(VAR_8, sizeof(VAR_8), FUNC_9());
 FUNC_0(VAR_7, FUNC_6("Date", VAR_8));
 FUNC_0(VAR_7, FUNC_6("Keep-Alive", VAR_1));
 FUNC_0(VAR_7, FUNC_6("Connection", "Keep-Alive"));
 FUNC_0(VAR_7, FUNC_6("Content-Type", VAR_0));

 VAR_6 = FUNC_8(VAR_3, VAR_7, VAR_5->Buf, VAR_5->Size);

 FUNC_3(VAR_7);
 FUNC_2(VAR_5);

 return VAR_6;
}
