
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int locks; TYPE_1__* interface; } ;
typedef TYPE_2__ isdn_driver_t ;
struct TYPE_4__ {int owner; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline void
FUNC_1(isdn_driver_t *VAR_0)
{
 FUNC_0(VAR_0->interface->owner);
 VAR_0->locks++;
}
