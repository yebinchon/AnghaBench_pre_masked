
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* kauth_cred_t ;
struct TYPE_5__ {int cr_ref; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int,long*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*) ;

void
FUNC_5(kauth_cred_t VAR_0)
{
 int VAR_1;

 FUNC_0(VAR_0);

 VAR_1 = FUNC_1(1, (long*)&VAR_0->cr_ref);

 if (VAR_1 < 1)
  FUNC_4("kauth_cred_ref: trying to take a reference on a cred with no references");







 return;
}
