
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int IsEnabled; int DDnsTriggerInt; } ;
typedef TYPE_1__ AZURE_CLIENT ;


 int FUNC_0 (TYPE_1__*,int *) ;

void FUNC_1(AZURE_CLIENT *VAR_0, bool VAR_1)
{
 bool VAR_2;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 VAR_2 = VAR_0->IsEnabled;

 VAR_0->IsEnabled = VAR_1;

 if (VAR_0->IsEnabled && (VAR_0->IsEnabled != VAR_2))
 {
  VAR_0->DDnsTriggerInt++;
 }

 FUNC_0(VAR_0, ((void*)0));
}
