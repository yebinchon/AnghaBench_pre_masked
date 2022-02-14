
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int IPv6; int HostName; int Ip; int Ok; int Ref; } ;
typedef int THREAD ;
typedef TYPE_1__ GETIP_THREAD_PARAM ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_0 ;

void FUNC_8(THREAD *VAR_1, void *VAR_2)
{
 GETIP_THREAD_PARAM *VAR_3;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 VAR_3 = (GETIP_THREAD_PARAM *)VAR_2;

 FUNC_0(VAR_3->Ref);

 FUNC_6(VAR_1);

 FUNC_1(VAR_1);


 if (VAR_3->IPv6 == 0)
 {

  VAR_3->Ok = FUNC_4(&VAR_3->Ip, VAR_3->HostName);
 }
 else
 {

  VAR_3->Ok = FUNC_5(&VAR_3->Ip, VAR_3->HostName);
 }

 FUNC_7(VAR_3);

 FUNC_3(VAR_1);

 FUNC_2(VAR_0);
}
