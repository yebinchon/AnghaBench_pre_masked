
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_fcs_itnim_s {TYPE_1__* rport; } ;
typedef enum fc_cos { ____Placeholder_fc_cos } fc_cos ;
struct TYPE_2__ {int fc_cos; } ;



__attribute__((used)) static inline enum fc_cos
FUNC_0(struct bfa_fcs_itnim_s *VAR_0)
{
 return VAR_0->rport->fc_cos;
}
