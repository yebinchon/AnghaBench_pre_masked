
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* kauth_cred_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_10__ {int p_comm; } ;
struct TYPE_9__ {int cr_ref; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int,long*) ;
 TYPE_6__* FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (char*,int ,TYPE_1__*) ;

__attribute__((used)) static boolean_t
FUNC_8(kauth_cred_t *VAR_2)
{
 int VAR_3;
 boolean_t VAR_4 = VAR_0;

 FUNC_0();
 FUNC_1(*VAR_2);

 VAR_3 = FUNC_2(-1, (long*)&(*VAR_2)->cr_ref);
 if (VAR_3 < 3) {

  VAR_4 = FUNC_6(*VAR_2);
 }

 if (VAR_4 == VAR_0) {
  *VAR_2 = VAR_1;
 }

 return (VAR_4);
}
