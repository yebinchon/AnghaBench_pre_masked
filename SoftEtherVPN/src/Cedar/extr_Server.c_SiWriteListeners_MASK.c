
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int name ;
typedef scalar_t__ UINT ;
struct TYPE_3__ {int ServerListenerList; } ;
typedef int SERVER_LISTENER ;
typedef TYPE_1__ SERVER ;
typedef int FOLDER ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (char*,int,char*,scalar_t__) ;
 int * FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ) ;

void FUNC_7(FOLDER *VAR_1, SERVER *VAR_2)
{

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 FUNC_4(VAR_2->ServerListenerList);
 {
  UINT VAR_3;
  for (VAR_3 = 0;VAR_3 < FUNC_3(VAR_2->ServerListenerList);VAR_3++)
  {
   SERVER_LISTENER *VAR_4 = FUNC_2(VAR_2->ServerListenerList, VAR_3);
   char VAR_5[VAR_0];
   FUNC_1(VAR_5, sizeof(VAR_5), "Listener%u", VAR_3);
   FUNC_5(FUNC_0(VAR_1, VAR_5), VAR_4);
  }
 }
 FUNC_6(VAR_2->ServerListenerList);
}
