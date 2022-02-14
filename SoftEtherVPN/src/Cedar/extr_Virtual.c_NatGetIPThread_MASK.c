
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ref; int Hostname; int Ip; int Ok; } ;
typedef int THREAD ;
typedef TYPE_1__ NAT_DNS_QUERY ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int ) ;

void FUNC_5(THREAD *VAR_0, void *VAR_1)
{
 NAT_DNS_QUERY *VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 VAR_2 = (NAT_DNS_QUERY *)VAR_1;
 FUNC_0(VAR_0);

 VAR_2->Ok = FUNC_3(&VAR_2->Ip, VAR_2->Hostname);

 FUNC_1(VAR_0);

 if (FUNC_4(VAR_2->ref) == 0)
 {
  FUNC_2(VAR_2);
 }
}
