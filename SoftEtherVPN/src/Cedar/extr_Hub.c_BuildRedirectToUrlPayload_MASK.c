
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int tmp ;
typedef int secret ;
typedef int redirect_url2 ;
typedef int html ;
typedef int header ;
typedef int hash_str ;
typedef int hash ;
typedef size_t UINT ;
typedef int UCHAR ;
struct TYPE_14__ {int Size; int Buf; } ;
struct TYPE_13__ {TYPE_1__* Connection; int Name; int Username; } ;
struct TYPE_12__ {int wSecond; int wMinute; int wHour; int wDay; int wMonth; int wYear; } ;
struct TYPE_11__ {int ClientIp; } ;
typedef TYPE_2__ SYSTEMTIME ;
typedef TYPE_3__ SESSION ;
typedef int HUB ;
typedef TYPE_4__ BUF ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int *,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int,char*,char*,...) ;
 int FUNC_3 (TYPE_4__*) ;
 size_t VAR_1 ;
 scalar_t__ FUNC_4 (char*,int ) ;
 int FUNC_5 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__* FUNC_6 () ;
 int FUNC_7 (char*,int,char*,int ,char*,int) ;
 int VAR_4 ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (char*,int,char*) ;
 int FUNC_10 (char*,int,char*) ;
 size_t FUNC_11 (char*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (TYPE_4__*,char*,size_t) ;

BUF *FUNC_15(HUB *VAR_5, SESSION *VAR_6, char *VAR_7)
{
 char VAR_8[VAR_2 * 2 + 1 + VAR_3];
 char VAR_9[VAR_2 * 2 + 1 + VAR_3];
 char VAR_10[VAR_2 * 2];
 BUF *VAR_11;

 if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0) || VAR_7 == ((void*)0))
 {
  return ((void*)0);
 }

 FUNC_10(VAR_10, sizeof(VAR_10), VAR_7);
 FUNC_13(VAR_10);

 if (FUNC_4(VAR_10, VAR_0))
 {

  char VAR_12[VAR_3];
  char VAR_13[VAR_3];
  SYSTEMTIME VAR_14;
  UINT VAR_15, VAR_16, VAR_17;

  VAR_17 = VAR_1;

  FUNC_12(&VAR_14);
  FUNC_1(VAR_12, sizeof(VAR_12));

  VAR_16 = FUNC_11(VAR_10);

  for (VAR_15 = 0;VAR_15 < VAR_16;VAR_15++)
  {
   char VAR_18 = VAR_10[VAR_15];
   if (VAR_18 == '|')
   {
    VAR_17 = VAR_15;
   }
  }

  if (VAR_17 != VAR_1)
  {
   FUNC_10(VAR_12, sizeof(VAR_12), VAR_10 + VAR_17 + 1);
   VAR_10[VAR_17] = 0;
  }

  FUNC_2(VAR_13, sizeof(VAR_13), "%s|%s|%r|%04u%02u%02u%02u%02u%02u%s",
   VAR_6->Username, VAR_6->Name, &VAR_6->Connection->ClientIp,
   VAR_14.wYear, VAR_14.wMonth, VAR_14.wDay, VAR_14.wHour, VAR_14.wMinute, VAR_14.wSecond, (FUNC_5(VAR_12) ? "" : "|"));

  if (FUNC_5(VAR_12) == 0)
  {

   UCHAR VAR_19[VAR_4];
   char VAR_20[VAR_3];
   BUF *VAR_21 = FUNC_6();

   FUNC_14(VAR_21, VAR_13, FUNC_11(VAR_13));
   FUNC_14(VAR_21, VAR_12, FUNC_11(VAR_12));

   FUNC_8(VAR_19, VAR_21->Buf, VAR_21->Size);

   FUNC_0(VAR_20, sizeof(VAR_20), VAR_19, sizeof(VAR_19));

   FUNC_3(VAR_21);

   FUNC_9(VAR_13, sizeof(VAR_13), VAR_20);


   FUNC_7(VAR_10, sizeof(VAR_10), VAR_10,
    VAR_0, VAR_13, 0);
  }
 }

 FUNC_2(VAR_8, sizeof(VAR_8),
  "<html><head><title>Object moved</title></head><body>\r\n<h2>Object moved to <a href=\"%s\">here</a>.</h2>\r\n</body></html>\r\n\r\n",
  VAR_10);

 FUNC_2(VAR_9, sizeof(VAR_9),
  "HTTP/1.1 302 Found\r\nLocation: %s\r\nCache-Control: private\r\nContent-Type: text/html; charset=utf-8\r\nContent-Length: %u\r\n\r\n",
  VAR_10, FUNC_11(VAR_10));

 VAR_11 = FUNC_6();

 FUNC_14(VAR_11, VAR_9, FUNC_11(VAR_9));
 FUNC_14(VAR_11, VAR_8, FUNC_11(VAR_8));

 return VAR_11;
}
