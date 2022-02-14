
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ fqs_throttle; } ;
typedef TYPE_2__ fq_if_t ;
struct TYPE_7__ {int fcl_throttle_off; } ;
struct TYPE_9__ {TYPE_1__ fcl_stat; } ;
typedef TYPE_3__ fq_if_classq_t ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(fq_if_t *VAR_0, fq_if_classq_t *VAR_1)
{
 FUNC_1(FUNC_0(VAR_1));
 VAR_0->fqs_throttle = 0;
 VAR_1->fcl_stat.fcl_throttle_off++;
}
