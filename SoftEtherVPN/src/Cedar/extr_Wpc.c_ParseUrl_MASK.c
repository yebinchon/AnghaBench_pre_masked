
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tmp ;
typedef int server_port ;
struct TYPE_4__ {char* Method; char* Referer; int Secure; char* Target; char* HostName; int Port; char* HeaderHostName; } ;
typedef TYPE_1__ URL_DATA ;
typedef scalar_t__ UINT ;


 int FUNC_0 (char*,int,char*,char*,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,char**,scalar_t__*,int) ;
 scalar_t__ FUNC_3 (char*,char*,int ,int) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,int,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 char* VAR_3 ;
 char* VAR_4 ;
 int FUNC_8 (TYPE_1__*,int) ;

bool FUNC_9(URL_DATA *VAR_5, char *VAR_6, bool VAR_7, char *VAR_8)
{
 char VAR_9[VAR_2 * 3];
 char VAR_10[VAR_1 + 16];
 char *VAR_11 = ((void*)0);
 char *VAR_12;
 UINT VAR_13;
 UINT VAR_14;

 if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0))
 {
  return 0;
 }

 FUNC_8(VAR_5, sizeof(URL_DATA));

 if (VAR_7)
 {
  FUNC_5(VAR_5->Method, sizeof(VAR_5->Method), VAR_4);
 }
 else
 {
  FUNC_5(VAR_5->Method, sizeof(VAR_5->Method), VAR_3);
 }

 if (VAR_8 != ((void*)0))
 {
  FUNC_5(VAR_5->Referer, sizeof(VAR_5->Referer), VAR_8);
 }

 FUNC_5(VAR_9, sizeof(VAR_9), VAR_6);
 FUNC_7(VAR_9);


 if (FUNC_4(VAR_9, "http://"))
 {
  VAR_5->Secure = 0;
  VAR_11 = &VAR_9[7];
 }
 else if (FUNC_4(VAR_9, "https://"))
 {
  VAR_5->Secure = 1;
  VAR_11 = &VAR_9[8];
 }
 else
 {
  if (FUNC_3(VAR_9, "://", 0, 0) != VAR_0)
  {
   return 0;
  }
  VAR_5->Secure = 0;
  VAR_11 = &VAR_9[0];
 }


 FUNC_5(VAR_10, sizeof(VAR_10), VAR_11);
 VAR_14 = FUNC_3(VAR_10, "/", 0, 0);
 if (VAR_14 != VAR_0)
 {
  VAR_10[VAR_14] = 0;
  VAR_11 += FUNC_6(VAR_10);
  FUNC_5(VAR_5->Target, sizeof(VAR_5->Target), VAR_11);
 }
 else
 {
  FUNC_5(VAR_5->Target, sizeof(VAR_5->Target), "/");
 }

 if (FUNC_2(VAR_10, &VAR_12, &VAR_13, VAR_5->Secure ? 443 : 80) == 0)
 {
  return 0;
 }

 FUNC_5(VAR_5->HostName, sizeof(VAR_5->HostName), VAR_12);
 VAR_5->Port = VAR_13;

 FUNC_1(VAR_12);

 if ((VAR_5->Secure && VAR_5->Port == 443) || (VAR_5->Secure == 0 && VAR_5->Port == 80))
 {
  FUNC_5(VAR_5->HeaderHostName, sizeof(VAR_5->HeaderHostName), VAR_5->HostName);
 }
 else
 {
  FUNC_0(VAR_5->HeaderHostName, sizeof(VAR_5->HeaderHostName),
   "%s:%u", VAR_5->HostName, VAR_5->Port);
 }

 return 1;
}
