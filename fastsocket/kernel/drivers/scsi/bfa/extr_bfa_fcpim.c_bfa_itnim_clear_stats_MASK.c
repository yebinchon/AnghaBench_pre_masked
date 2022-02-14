
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * min; } ;
struct TYPE_4__ {TYPE_1__ io_latency; } ;
struct bfa_itnim_s {TYPE_2__ ioprofile; TYPE_2__ stats; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;

void
FUNC_1(struct bfa_itnim_s *VAR_1)
{
 int VAR_2;

 if (!VAR_1)
  return;

 FUNC_0(&VAR_1->stats, 0, sizeof(VAR_1->stats));
 FUNC_0(&VAR_1->ioprofile, 0, sizeof(VAR_1->ioprofile));
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  VAR_1->ioprofile.io_latency.min[VAR_2] = ~0;
}
