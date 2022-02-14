
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_8__ {int ref; } ;
struct TYPE_7__ {int ref; TYPE_2__* release_event; } ;
typedef TYPE_1__ THREAD ;
typedef TYPE_2__ EVENT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;

void FUNC_5(THREAD *VAR_0)
{
 UINT VAR_1;
 EVENT *VAR_2;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 VAR_2 = VAR_0->release_event;
 if (VAR_2 != ((void*)0))
 {
  FUNC_0(VAR_2->ref);
 }

 VAR_1 = FUNC_2(VAR_0->ref);
 FUNC_4(VAR_2);

 FUNC_3(VAR_2);

 if (VAR_1 == 0)
 {
  FUNC_1(VAR_0);
 }
}
