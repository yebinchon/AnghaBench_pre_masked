
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connectdata {int data; } ;
typedef int buf ;
typedef int Curl_addrinfo ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ,char*,char*,char*,int) ;

__attribute__((used)) static void
FUNC_2(struct connectdata *VAR_0,
                 Curl_addrinfo *VAR_1,
                 char *VAR_2,
                 int VAR_3)
{
  char VAR_4[256];
  FUNC_0(VAR_1, VAR_4, sizeof(VAR_4));
  FUNC_1(VAR_0->data, "Connecting to %s (%s) port %d\n", VAR_2, VAR_4, VAR_3);
}
