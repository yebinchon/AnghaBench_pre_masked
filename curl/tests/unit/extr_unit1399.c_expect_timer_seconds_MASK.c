
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int t_starttransfer; int t_pretransfer; int t_appconnect; int t_connect; int t_nslookup; } ;
struct Curl_easy {TYPE_1__ progress; } ;
typedef int msg ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,int,char*,int) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(struct Curl_easy *VAR_0, int VAR_1)
{
  char VAR_2[64];
  FUNC_1(VAR_2, sizeof(VAR_2), "about %d seconds should have passed", VAR_1);
  FUNC_0(FUNC_2(VAR_0->progress.t_nslookup, VAR_1), VAR_2);
  FUNC_0(FUNC_2(VAR_0->progress.t_connect, VAR_1), VAR_2);
  FUNC_0(FUNC_2(VAR_0->progress.t_appconnect, VAR_1), VAR_2);
  FUNC_0(FUNC_2(VAR_0->progress.t_pretransfer, VAR_1),
              VAR_2);
  FUNC_0(FUNC_2(VAR_0->progress.t_starttransfer, VAR_1),
              VAR_2);
}
