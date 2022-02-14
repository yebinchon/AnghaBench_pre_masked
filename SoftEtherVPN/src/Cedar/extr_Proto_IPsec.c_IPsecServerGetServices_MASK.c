
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int LockSettings; int Services; } ;
typedef int IPSEC_SERVICES ;
typedef TYPE_1__ IPSEC_SERVER ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(IPSEC_SERVER *VAR_0, IPSEC_SERVICES *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_2(VAR_0->LockSettings);
 {
  FUNC_1(VAR_0);

  FUNC_0(VAR_1, &VAR_0->Services, sizeof(IPSEC_SERVICES));
 }
 FUNC_3(VAR_0->LockSettings);
}
