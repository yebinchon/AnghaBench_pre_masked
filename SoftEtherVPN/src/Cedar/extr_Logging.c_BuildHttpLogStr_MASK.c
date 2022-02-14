
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int url ;
struct TYPE_9__ {char* Buf; } ;
struct TYPE_8__ {int Path; int IsSsl; int Port; char* Method; char* Protocol; char* Referer; char* UserAgent; int Hostname; } ;
typedef TYPE_1__ HTTPLOG ;
typedef TYPE_2__ BUF ;


 int FUNC_0 (TYPE_2__*,char*,char*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*,int,char*,int ,...) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_0 ;
 TYPE_2__* FUNC_4 () ;
 scalar_t__ FUNC_5 (int,char*) ;
 int FUNC_6 (char*,int,int) ;
 int FUNC_7 (TYPE_2__*,char*,int) ;

char *FUNC_8(HTTPLOG *VAR_1)
{
 BUF *VAR_2;
 char VAR_3[VAR_0];
 char VAR_4 = 0;
 char *VAR_5;

 if (VAR_1 == ((void*)0))
 {
  return FUNC_1("");
 }

 VAR_2 = FUNC_4();

 if (FUNC_5(VAR_1->Path, "http://") || FUNC_5(VAR_1->Path, "https://"))
 {
  FUNC_6(VAR_3, sizeof(VAR_3), VAR_1->Path);
 }
 else
 {

  if (VAR_1->IsSsl == 0)
  {
   if (VAR_1->Port == 80)
   {
    FUNC_2(VAR_3, sizeof(VAR_3), "http://%s%s",
     VAR_1->Hostname, VAR_1->Path);
   }
   else
   {
    FUNC_2(VAR_3, sizeof(VAR_3), "http://%s:%u%s",
     VAR_1->Hostname, VAR_1->Port, VAR_1->Path);
   }
  }
  else
  {
   if (VAR_1->Port == 443)
   {
    FUNC_2(VAR_3, sizeof(VAR_3), "https://%s/",
     VAR_1->Hostname);
   }
   else
   {
    FUNC_2(VAR_3, sizeof(VAR_3), "https://%s:%u/",
     VAR_1->Hostname, VAR_1->Port);
   }
  }
 }

 FUNC_0(VAR_2, "HttpMethod", VAR_1->Method);
 FUNC_0(VAR_2, "HttpUrl", VAR_3);
 FUNC_0(VAR_2, "HttpProtocol", VAR_1->Protocol);
 FUNC_0(VAR_2, "HttpReferer", VAR_1->Referer);
 FUNC_0(VAR_2, "HttpUserAgent", VAR_1->UserAgent);

 FUNC_7(VAR_2, &VAR_4, 1);

 VAR_5 = FUNC_1(VAR_2->Buf);

 FUNC_3(VAR_2);

 return VAR_5;
}
