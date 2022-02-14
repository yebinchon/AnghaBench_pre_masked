
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* ledger_t ;
typedef int kern_return_t ;
struct TYPE_7__ {TYPE_1__* l_entries; } ;
struct TYPE_6__ {int le_flags; } ;


 int FUNC_0 (TYPE_2__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (int *,int ) ;

kern_return_t
FUNC_4(ledger_t VAR_3, int VAR_4)
{
 if (!FUNC_0(VAR_3, VAR_4))
  return (VAR_0);

 FUNC_1(FUNC_2(VAR_3, VAR_4) != ((void*)0));

 FUNC_3(&VAR_3->l_entries[VAR_4].le_flags, VAR_2);
 return (VAR_1);
}
