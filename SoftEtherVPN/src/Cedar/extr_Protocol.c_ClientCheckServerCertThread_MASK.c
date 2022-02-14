
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int Session; } ;
struct TYPE_3__ {int UserSelected; int Expired; int ServerX; TYPE_2__* Connection; int (* CheckCertProc ) (int ,TYPE_2__*,int ,int *) ;int Ok; } ;
typedef int THREAD ;
typedef TYPE_1__ CHECK_CERT_THREAD_PROC ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,TYPE_2__*,int ,int *) ;

void FUNC_2(THREAD *VAR_0, void *VAR_1)
{
 CHECK_CERT_THREAD_PROC *VAR_2 = (CHECK_CERT_THREAD_PROC *)VAR_1;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }


 FUNC_0(VAR_0);


 VAR_2->Ok = VAR_2->CheckCertProc(VAR_2->Connection->Session, VAR_2->Connection, VAR_2->ServerX, &VAR_2->Expired);
 VAR_2->UserSelected = 1;
}
