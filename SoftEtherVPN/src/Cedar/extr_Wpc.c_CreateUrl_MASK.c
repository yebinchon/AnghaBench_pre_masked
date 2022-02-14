
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Secure; int Target; int HeaderHostName; } ;
typedef TYPE_1__ URL_DATA ;
typedef int UINT ;


 int FUNC_0 (char*,int ,char*,char*,int ,int ) ;

void FUNC_1(char *VAR_0, UINT VAR_1, URL_DATA *VAR_2)
{
 char *VAR_3;

 if (VAR_0 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 if (VAR_2->Secure == 0)
 {
  VAR_3 = "http://";
 }
 else
 {
  VAR_3 = "https://";
 }

 FUNC_0(VAR_0, VAR_1, "%s%s%s", VAR_3, VAR_2->HeaderHostName, VAR_2->Target);
}
