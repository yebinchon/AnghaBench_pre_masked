
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* pmap_t ;
typedef int ledger_t ;
struct TYPE_5__ {int ledger; int asid; int vasid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int,...) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;

void
FUNC_5(
 pmap_t VAR_3)
{
 ledger_t VAR_4;

 FUNC_1(1, FUNC_0(VAR_2) | VAR_1, FUNC_2(VAR_3), VAR_3->vasid, VAR_3->asid);

 VAR_4 = VAR_3->ledger;

 FUNC_4(VAR_3);

 FUNC_3(VAR_4);

 FUNC_1(1, FUNC_0(VAR_2) | VAR_0);
}
