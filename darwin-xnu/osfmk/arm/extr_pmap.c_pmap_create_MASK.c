
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int vm_map_size_t ;
typedef TYPE_1__* pmap_t ;
typedef int ledger_t ;
typedef int boolean_t ;
struct TYPE_6__ {int asid; int vasid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int,int,int ,int ,...) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (int ,int ,int ) ;

pmap_t
FUNC_6(
 ledger_t VAR_4,
 vm_map_size_t VAR_5,
 boolean_t VAR_6)
{
 pmap_t VAR_7;

 FUNC_1(1, FUNC_0(VAR_3) | VAR_1, VAR_5, VAR_6);

 FUNC_4(VAR_4);

 VAR_7 = FUNC_5(VAR_4, VAR_5, VAR_6);

 if (VAR_7 == VAR_2) {
  FUNC_3(VAR_4);
 }

 FUNC_1(1, FUNC_0(VAR_3) | VAR_0, FUNC_2(VAR_7), VAR_7->vasid, VAR_7->asid);

 return VAR_7;
}
