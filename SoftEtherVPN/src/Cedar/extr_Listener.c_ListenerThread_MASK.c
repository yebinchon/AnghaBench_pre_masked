
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int Protocol; TYPE_1__* Thread; int ref; } ;
struct TYPE_8__ {int ref; } ;
typedef TYPE_1__ THREAD ;
typedef TYPE_2__ LISTENER ;


 int FUNC_0 (int ) ;







 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*) ;

void FUNC_5(THREAD *VAR_0, void *VAR_1)
{
 LISTENER *VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }


 VAR_2 = (LISTENER *)VAR_1;
 FUNC_0(VAR_2->ref);
 VAR_2->Thread = VAR_0;
 FUNC_0(VAR_0->ref);
 FUNC_3(VAR_0);


 switch (VAR_2->Protocol)
 {
 case 129:
 case 132:
 case 130:
 case 134:
 case 133:
 case 131:

  FUNC_1(VAR_2);
  break;

 case 128:

  FUNC_2(VAR_2);
  break;
 }


 FUNC_4(VAR_2);
}
