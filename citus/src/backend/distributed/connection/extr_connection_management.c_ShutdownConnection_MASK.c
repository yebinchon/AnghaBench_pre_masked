
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * pgConn; } ;
typedef TYPE_1__ MultiConnection ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;

void
FUNC_4(MultiConnection *VAR_2)
{




 if (FUNC_1(VAR_2->pgConn) == VAR_0 &&
  FUNC_2(VAR_2->pgConn) == VAR_1)
 {
  FUNC_3(VAR_2);
 }
 FUNC_0(VAR_2->pgConn);
 VAR_2->pgConn = ((void*)0);
}
