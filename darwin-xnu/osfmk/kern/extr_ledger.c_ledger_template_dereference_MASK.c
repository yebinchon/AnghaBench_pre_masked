
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* ledger_template_t ;
struct TYPE_6__ {scalar_t__ lt_refs; } ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

void
FUNC_3(ledger_template_t VAR_0)
{
 FUNC_1(VAR_0);
 VAR_0->lt_refs--;
 FUNC_2(VAR_0);

 if (VAR_0->lt_refs == 0)
  FUNC_0(VAR_0, sizeof (*VAR_0));
}
