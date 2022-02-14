
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* mig_object_t ;
typedef int kern_return_t ;
struct TYPE_4__ {int port; int const* pVtbl; } ;
typedef int IMIGObjectVtbl ;
typedef int IMIGObject ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;

kern_return_t
FUNC_0(
 mig_object_t VAR_4,
 const IMIGObject *VAR_5)
{
 if (VAR_4 == VAR_3)
  return VAR_0;
 VAR_4->pVtbl = (const IMIGObjectVtbl *)VAR_5;
 VAR_4->port = VAR_2;
 return VAR_1;
}
