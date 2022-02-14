
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int UnicastBytes; int UnicastCount; int BroadcastBytes; int BroadcastCount; } ;
typedef TYPE_1__ TRAFFIC_ENTRY ;
typedef int FOLDER ;


 int FUNC_0 (int *,char*,int ) ;
 int * FUNC_1 (int *,char*) ;

void FUNC_2(FOLDER *VAR_0, char *VAR_1, TRAFFIC_ENTRY *VAR_2)
{
 FOLDER *VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 VAR_3 = FUNC_1(VAR_0, VAR_1);
 FUNC_0(VAR_3, "BroadcastCount", VAR_2->BroadcastCount);
 FUNC_0(VAR_3, "BroadcastBytes", VAR_2->BroadcastBytes);
 FUNC_0(VAR_3, "UnicastCount", VAR_2->UnicastCount);
 FUNC_0(VAR_3, "UnicastBytes", VAR_2->UnicastBytes);
}
