
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ magnitude; scalar_t__ offset; scalar_t__ phase; scalar_t__ period; } ;
struct TYPE_3__ {TYPE_2__ periodic; } ;
struct ff_effect {TYPE_1__ u; } ;



__attribute__((used)) static int FUNC_0(struct ff_effect *VAR_0,
        struct ff_effect *VAR_1)
{
 return VAR_0->u.periodic.magnitude != VAR_1->u.periodic.magnitude ||
        VAR_0->u.periodic.offset != VAR_1->u.periodic.offset ||
        VAR_0->u.periodic.phase != VAR_1->u.periodic.phase ||
        VAR_0->u.periodic.period != VAR_1->u.periodic.period;
}
