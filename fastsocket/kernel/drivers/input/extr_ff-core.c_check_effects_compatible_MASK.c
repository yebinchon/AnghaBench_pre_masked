
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ waveform; } ;
struct TYPE_4__ {TYPE_1__ periodic; } ;
struct ff_effect {scalar_t__ type; TYPE_2__ u; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct ff_effect *VAR_1,
        struct ff_effect *VAR_2)
{
 return VAR_1->type == VAR_2->type &&
        (VAR_1->type != VAR_0 ||
  VAR_1->u.periodic.waveform == VAR_2->u.periodic.waveform);
}
