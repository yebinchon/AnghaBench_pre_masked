
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* UINT ;
struct TYPE_8__ {int ref; } ;
struct TYPE_7__ {int* EnablePtr; void* Port; void* Protocol; int * Listener; int Lock; TYPE_2__* Cedar; } ;
typedef TYPE_1__ DYNAMIC_LISTENER ;
typedef TYPE_2__ CEDAR ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 () ;
 TYPE_1__* FUNC_3 (int) ;

DYNAMIC_LISTENER *FUNC_4(CEDAR *VAR_0, bool *VAR_1, UINT VAR_2, UINT VAR_3)
{
 DYNAMIC_LISTENER *VAR_4;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_4 = FUNC_3(sizeof(DYNAMIC_LISTENER));

 VAR_4->Cedar = VAR_0;
 FUNC_0(VAR_4->Cedar->ref);

 VAR_4->Lock = FUNC_2();

 VAR_4->EnablePtr = VAR_1;

 VAR_4->Listener = ((void*)0);

 VAR_4->Protocol = VAR_2;
 VAR_4->Port = VAR_3;

 FUNC_1(VAR_4);

 return VAR_4;
}
