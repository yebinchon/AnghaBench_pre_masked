
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* kauth_cred_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_8__ {scalar_t__ cr_ref; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (TYPE_1__**) ;
 int FUNC_6 (TYPE_1__*) ;

void
FUNC_7(kauth_cred_t *VAR_3)
{
 boolean_t VAR_4;

 FUNC_2();
 VAR_4 = FUNC_5(VAR_3);
 FUNC_3();

 if (VAR_4 == VAR_2) {
  FUNC_4(*VAR_3 != VAR_1);



  FUNC_0(*VAR_3);

  (*VAR_3)->cr_ref = 0;
  FUNC_1(*VAR_3, sizeof(*(*VAR_3)), VAR_0);
  *VAR_3 = VAR_1;
 }
}
