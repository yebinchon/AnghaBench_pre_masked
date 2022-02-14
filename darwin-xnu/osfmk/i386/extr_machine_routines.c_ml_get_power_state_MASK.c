
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int boolean_t ;
struct TYPE_6__ {TYPE_1__* package; } ;
struct TYPE_8__ {TYPE_2__ lcpu; } ;
struct TYPE_7__ {scalar_t__ nLThreadsPerPackage; } ;
struct TYPE_5__ {scalar_t__ num_idle; } ;


 TYPE_4__* FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 TYPE_3__ VAR_0 ;

void FUNC_2(boolean_t *VAR_1, boolean_t *VAR_2) {
 *VAR_1 = (FUNC_1() != 0);




 *VAR_2 = (FUNC_0()->lcpu.package->num_idle == VAR_0.nLThreadsPerPackage);
}
