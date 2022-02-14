
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* bch; } ;
typedef TYPE_2__ act2000_card ;
typedef scalar_t__ __u16 ;
struct TYPE_4__ {scalar_t__ callref; scalar_t__ fsm_state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_0(act2000_card *VAR_2, __u16 VAR_3)
{
 int VAR_4;
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  if ((VAR_2->bch[VAR_4].callref == VAR_3) &&
      (VAR_2->bch[VAR_4].fsm_state == VAR_1))
   return VAR_4;
 return -1;
}
