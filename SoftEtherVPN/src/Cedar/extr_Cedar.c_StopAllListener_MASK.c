
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_3__ {int ListenerList; } ;
typedef int LISTENER ;
typedef TYPE_1__ CEDAR ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int **) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int ** FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

void FUNC_8(CEDAR *VAR_0)
{
 LISTENER **VAR_1;
 UINT VAR_2, VAR_3;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_3(VAR_0->ListenerList);
 {
  VAR_1 = FUNC_6(VAR_0->ListenerList);
  VAR_3 = FUNC_2(VAR_0->ListenerList);
  FUNC_0(VAR_0->ListenerList);
 }
 FUNC_7(VAR_0->ListenerList);

 for (VAR_2 = 0;VAR_2 < VAR_3;VAR_2++)
 {
  FUNC_5(VAR_1[VAR_2]);
  FUNC_4(VAR_1[VAR_2]);
 }
 FUNC_1(VAR_1);
}
