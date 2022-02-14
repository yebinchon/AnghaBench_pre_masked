
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int IsEnabled; int MainThread; int Event; int Lock; int * Server; int * Cedar; } ;
typedef int SERVER ;
typedef int CEDAR ;
typedef TYPE_1__ AZURE_CLIENT ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int) ;

AZURE_CLIENT *FUNC_4(CEDAR *VAR_1, SERVER *VAR_2)
{
 AZURE_CLIENT *VAR_3;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_3 = FUNC_3(sizeof(AZURE_CLIENT));

 VAR_3->Cedar = VAR_1;

 VAR_3->Server = VAR_2;

 VAR_3->Lock = FUNC_1();

 VAR_3->IsEnabled = 0;

 VAR_3->Event = FUNC_0();


 VAR_3->MainThread = FUNC_2(VAR_0, VAR_3);

 return VAR_3;
}
