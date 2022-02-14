
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ start_level; scalar_t__ end_level; } ;
struct TYPE_4__ {TYPE_1__ ramp; } ;
struct ff_effect {TYPE_2__ u; } ;



__attribute__((used)) static int FUNC_0(struct ff_effect *VAR_0, struct ff_effect *VAR_1)
{
 return VAR_0->u.ramp.start_level != VAR_1->u.ramp.start_level ||
        VAR_0->u.ramp.end_level != VAR_1->u.ramp.end_level;
}
