
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* mig_object_t ;
struct TYPE_6__ {TYPE_1__* pVtbl; } ;
struct TYPE_5__ {int (* Release ) (int *) ;} ;
typedef int IMIGObject ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

void
FUNC_2(
 mig_object_t VAR_1)
{
 FUNC_0(VAR_1 != VAR_0);
 VAR_1->pVtbl->Release((IMIGObject *)VAR_1);
}
