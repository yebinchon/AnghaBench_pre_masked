
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ Port; int Cedar; int Listener; void* AdminSockList; void* AdminThreadList; } ;
typedef TYPE_1__ EL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,scalar_t__,int ,TYPE_1__*) ;

void FUNC_2(EL *VAR_3)
{

 if (VAR_3 == ((void*)0))
 {
  return;
 }

 VAR_3->AdminThreadList = FUNC_0(((void*)0));
 VAR_3->AdminSockList = FUNC_0(((void*)0));

 VAR_3->Listener = FUNC_1(VAR_3->Cedar, VAR_2, VAR_3->Port == 0 ? VAR_0 : VAR_3->Port,
  VAR_1, VAR_3);
}
