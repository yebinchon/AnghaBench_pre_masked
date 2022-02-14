
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ff_envelope {int dummy; } ;
struct TYPE_5__ {struct ff_envelope const envelope; } ;
struct TYPE_4__ {struct ff_envelope const envelope; } ;
struct TYPE_6__ {TYPE_2__ constant; TYPE_1__ periodic; } ;
struct ff_effect {int type; TYPE_3__ u; } ;





__attribute__((used)) static const struct ff_envelope *FUNC_0(const struct ff_effect *VAR_0)
{
 static const struct ff_envelope VAR_1;

 switch (VAR_0->type) {
  case 128:
   return &VAR_0->u.periodic.envelope;
  case 129:
   return &VAR_0->u.constant.envelope;
  default:
   return &VAR_1;
 }
}
