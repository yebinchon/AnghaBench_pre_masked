
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int VH_OPTION ;
struct TYPE_6__ {int Online; int Cedar; int * Virtual; int Option; int * ClientAuth; int * ClientOption; int * SecureNAT; int HaltEvent; int HashedPassword; int lock; } ;
typedef int SNAT ;
typedef TYPE_1__ NAT ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 void* FUNC_2 (int ,int *,int *,int *,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,char*,int ) ;
 TYPE_1__* FUNC_5 (int) ;

NAT *FUNC_6(SNAT *VAR_0, VH_OPTION *VAR_1)
{
 NAT *VAR_2 = FUNC_5(sizeof(NAT));

 VAR_2->lock = FUNC_1();
 FUNC_4(VAR_2->HashedPassword, "", 0);
 VAR_2->HaltEvent = FUNC_0();



 VAR_2->SecureNAT = VAR_0;





 FUNC_3(VAR_2);
 VAR_2->Virtual = FUNC_2(VAR_2->Cedar, ((void*)0), ((void*)0), VAR_1, VAR_2);
 VAR_2->Online = 1;





 return VAR_2;
}
