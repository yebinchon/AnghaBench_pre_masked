
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* UnicastBytes; void* UnicastCount; void* BroadcastBytes; void* BroadcastCount; } ;
typedef TYPE_1__ TRAFFIC_ENTRY ;
typedef int FOLDER ;


 int * FUNC_0 (int *,char*) ;
 void* FUNC_1 (int *,char*) ;
 int FUNC_2 (TYPE_1__*,int) ;

void FUNC_3(FOLDER *VAR_0, char *VAR_1, TRAFFIC_ENTRY *VAR_2)
{
 FOLDER *VAR_3;

 if (VAR_2 != ((void*)0))
 {
  FUNC_2(VAR_2, sizeof(TRAFFIC_ENTRY));
 }
 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (VAR_3 == ((void*)0))
 {
  return;
 }

 VAR_2->BroadcastCount = FUNC_1(VAR_3, "BroadcastCount");
 VAR_2->BroadcastBytes = FUNC_1(VAR_3, "BroadcastBytes");
 VAR_2->UnicastCount = FUNC_1(VAR_3, "UnicastCount");
 VAR_2->UnicastBytes = FUNC_1(VAR_3, "UnicastBytes");
}
