
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tmp ;
struct TYPE_3__ {int * RemoteHostname; int RemoteIP; } ;
typedef TYPE_1__ SOCK ;


 int * FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int,int *) ;
 int FUNC_3 (char*,int,int *) ;
 scalar_t__ FUNC_4 (char*) ;
 int VAR_0 ;
 int FUNC_5 (char*,int) ;
 int VAR_1 ;

void FUNC_6(SOCK *VAR_2, bool VAR_3)
{
 char VAR_4[VAR_0];

 if (VAR_2 == ((void*)0))
 {
  return;
 }

 FUNC_5(VAR_4, sizeof(VAR_4));

 if (VAR_1 == 0 && VAR_3 == 0)
 {
  if (FUNC_2(VAR_4, sizeof(VAR_4), &VAR_2->RemoteIP) == 0 ||
   FUNC_4(VAR_4))
  {
   FUNC_3(VAR_4, sizeof(VAR_4), &VAR_2->RemoteIP);
  }
 }
 else
 {
  FUNC_3(VAR_4, sizeof(VAR_4), &VAR_2->RemoteIP);
 }

 if (VAR_2->RemoteHostname != ((void*)0))
 {
  FUNC_1(VAR_2->RemoteHostname);
 }

 VAR_2->RemoteHostname = FUNC_0(VAR_4);
}
