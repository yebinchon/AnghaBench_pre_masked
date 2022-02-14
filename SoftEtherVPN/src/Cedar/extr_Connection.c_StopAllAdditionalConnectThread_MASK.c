
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_3__ {int ServerMode; int ConnectingThreads; int ConnectingSocks; } ;
typedef int THREAD ;
typedef int SOCK ;
typedef TYPE_1__ CONNECTION ;


 int FUNC_0 (char*,size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **) ;
 int VAR_0 ;
 size_t FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int ** FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,int ) ;

void FUNC_11(CONNECTION *VAR_1)
{
 UINT VAR_2, VAR_3;
 SOCK **VAR_4;
 THREAD **VAR_5;

 if (VAR_1 == ((void*)0) || VAR_1->ServerMode != 0)
 {
  return;
 }


 FUNC_5(VAR_1->ConnectingSocks);
 {
  VAR_3 = FUNC_4(VAR_1->ConnectingSocks);
  VAR_4 = FUNC_8(VAR_1->ConnectingSocks);
  FUNC_1(VAR_1->ConnectingSocks);
 }
 FUNC_9(VAR_1->ConnectingSocks);
 for (VAR_2 = 0;VAR_2 < VAR_3;VAR_2++)
 {
  FUNC_2(VAR_4[VAR_2]);
  FUNC_6(VAR_4[VAR_2]);
 }
 FUNC_3(VAR_4);


 FUNC_5(VAR_1->ConnectingThreads);
 {
  VAR_3 = FUNC_4(VAR_1->ConnectingThreads);
  FUNC_0("c->ConnectingThreads: %u\n", VAR_3);
  VAR_5 = FUNC_8(VAR_1->ConnectingThreads);
  FUNC_1(VAR_1->ConnectingThreads);
 }
 FUNC_9(VAR_1->ConnectingThreads);
 for (VAR_2 = 0;VAR_2 < VAR_3;VAR_2++)
 {
  FUNC_10(VAR_5[VAR_2], VAR_0);
  FUNC_7(VAR_5[VAR_2]);
 }
 FUNC_3(VAR_5);
}
