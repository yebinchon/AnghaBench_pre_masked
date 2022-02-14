
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* ledger_template_t ;
typedef int kern_return_t ;
struct TYPE_7__ {int lt_cnt; TYPE_1__* lt_entries; } ;
struct TYPE_6__ {int et_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

kern_return_t
FUNC_2(ledger_template_t VAR_3, int VAR_4)
{
 FUNC_0(VAR_3);

 if ((VAR_4 < 0) || (VAR_4 >= VAR_3->lt_cnt)) {
  FUNC_1(VAR_3);
  return (VAR_0);
 }

 VAR_3->lt_entries[VAR_4].et_flags |= VAR_2;

 FUNC_1(VAR_3);

 return (VAR_1);
}
