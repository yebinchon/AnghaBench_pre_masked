
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* ledger_t ;
typedef int kern_return_t ;
struct TYPE_8__ {TYPE_1__* l_template; int l_refs; } ;
struct TYPE_7__ {scalar_t__ lt_zone; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (scalar_t__,TYPE_2__*) ;

kern_return_t
FUNC_5(ledger_t VAR_2)
{
 int VAR_3;

 if (!FUNC_1(VAR_2))
  return (VAR_0);

 VAR_3 = FUNC_2(&VAR_2->l_refs);
 FUNC_0(VAR_3 >= 1);


 if (VAR_3 == 1) {
  if (VAR_2->l_template->lt_zone) {
   FUNC_4(VAR_2->l_template->lt_zone, VAR_2);
  } else {
   FUNC_3(VAR_2);
  }
 }

 return (VAR_1);
}
