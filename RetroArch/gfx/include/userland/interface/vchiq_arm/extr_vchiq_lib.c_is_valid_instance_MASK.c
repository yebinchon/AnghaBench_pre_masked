
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* VCHIQ_INSTANCE_T ;
struct TYPE_4__ {scalar_t__ initialised; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static __inline int
FUNC_0(VCHIQ_INSTANCE_T VAR_1)
{
   return (VAR_1 == &VAR_0) && (VAR_1->initialised > 0);
}
