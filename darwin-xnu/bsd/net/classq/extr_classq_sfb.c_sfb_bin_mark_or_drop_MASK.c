
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfbbinstats {int bytes; scalar_t__ pkts; } ;
struct sfb {int sfb_fc_threshold; scalar_t__ sfb_allocation; scalar_t__ sfb_drop_thresh; } ;


 scalar_t__ FUNC_0 (struct sfb*) ;
 scalar_t__ FUNC_1 (struct sfb*) ;

__attribute__((used)) static int
FUNC_2(struct sfb *VAR_0, struct sfbbinstats *VAR_1)
{
 int VAR_2 = 0;
 if (FUNC_1(VAR_0)) {




  if (FUNC_0(VAR_0) &&
      VAR_1->bytes >= (VAR_0->sfb_fc_threshold << 1))
   VAR_2 = 1;
 } else {
  if (VAR_1->pkts >= VAR_0->sfb_allocation &&
      VAR_1->pkts >= VAR_0->sfb_drop_thresh)
   VAR_2 = 1;
 }
 return (VAR_2);
}
