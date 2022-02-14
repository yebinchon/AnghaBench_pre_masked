
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* task_t ;
typedef scalar_t__ ledger_amount_t ;
struct TYPE_6__ {int ledger; TYPE_1__* map; } ;
struct TYPE_5__ {int has_corpse_footprint; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,scalar_t__) ;
 int FUNC_2 (int ,int,scalar_t__) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int,scalar_t__*) ;

void
FUNC_5(
 task_t VAR_0,
 task_t VAR_1,
 int VAR_2)
{
 ledger_amount_t VAR_3, VAR_4, VAR_5;

 FUNC_0(VAR_1->map->has_corpse_footprint);
 if (!VAR_1->map->has_corpse_footprint)
  return;


 FUNC_3(VAR_1->ledger,
      VAR_2);


 FUNC_4(VAR_0->ledger,
      VAR_2,
      &VAR_3);
 FUNC_4(VAR_1->ledger,
      VAR_2,
      &VAR_4);
 if (VAR_4 == VAR_3) {

 } else if (VAR_4 > VAR_3) {

  VAR_5 = VAR_4 - VAR_3;
  FUNC_2(VAR_1->ledger,
        VAR_2,
        VAR_5);
 } else {

  VAR_5 = VAR_3 - VAR_4;
  FUNC_1(VAR_1->ledger,
         VAR_2,
         VAR_5);
 }
}
