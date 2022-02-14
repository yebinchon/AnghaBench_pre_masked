
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* ledger_t ;
typedef int kern_return_t ;
struct TYPE_6__ {scalar_t__ l_template; int l_size; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int) ;

kern_return_t
FUNC_2(ledger_t VAR_1, ledger_t VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_1->l_template == VAR_2->l_template);

 for (VAR_3 = 0; VAR_3 < VAR_1->l_size; VAR_3++) {
  FUNC_1(VAR_1, VAR_2, VAR_3);
 }

 return (VAR_0);
}
