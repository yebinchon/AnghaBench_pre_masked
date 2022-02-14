
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_4__ {int Cedar; int Event; int Thread; int lock; int * Sock; } ;
typedef TYPE_1__ LISTENER ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

void FUNC_6(LISTENER *VAR_0)
{
 UINT VAR_1 = 0;

 if (VAR_0 == ((void*)0))
 {
  return;
 }


 if (VAR_0->Sock != ((void*)0))
 {
  FUNC_4(VAR_0->Sock);
 }

 FUNC_0(VAR_0->lock);
 FUNC_5(VAR_0->Thread);
 FUNC_3(VAR_0->Event);

 FUNC_2(VAR_0->Cedar);

 FUNC_1(VAR_0);
}
