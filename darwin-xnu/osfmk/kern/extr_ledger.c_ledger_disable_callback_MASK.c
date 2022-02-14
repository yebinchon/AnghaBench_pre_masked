
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* ledger_t ;
typedef int kern_return_t ;
struct TYPE_6__ {TYPE_1__* l_entries; } ;
struct TYPE_5__ {int le_flags; int le_warn_level; } ;


 int FUNC_0 (TYPE_2__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;

kern_return_t
FUNC_2(ledger_t VAR_4, int VAR_5)
{
 if (!FUNC_0(VAR_4, VAR_5))
  return (VAR_0);







 VAR_4->l_entries[VAR_5].le_warn_level = VAR_3;
 FUNC_1(&VAR_4->l_entries[VAR_5].le_flags, VAR_2);
 return (VAR_1);
}
