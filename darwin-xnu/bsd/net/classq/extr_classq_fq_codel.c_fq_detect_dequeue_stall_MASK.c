
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ u_int64_t ;
struct TYPE_12__ {scalar_t__ fq_getqtime; scalar_t__ fq_bytes; } ;
typedef TYPE_2__ fq_t ;
struct TYPE_13__ {scalar_t__ fqs_update_interval; } ;
typedef TYPE_3__ fq_if_t ;
struct TYPE_11__ {int fcl_dequeue_stall; } ;
struct TYPE_14__ {TYPE_1__ fcl_stat; } ;
typedef TYPE_4__ fq_if_classq_t ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_3(fq_if_t *VAR_1, fq_t *VAR_2, fq_if_classq_t *VAR_3,
    u_int64_t *VAR_4)
{
 u_int64_t VAR_5;
 if (FUNC_0(VAR_2) || VAR_2->fq_getqtime == 0 ||
     FUNC_2(VAR_2) ||
     VAR_2->fq_bytes < VAR_0)
  return;
 VAR_5 = VAR_2->fq_getqtime + VAR_1->fqs_update_interval;
 if ((*VAR_4) > VAR_5) {




  FUNC_1(VAR_2);
  VAR_3->fcl_stat.fcl_dequeue_stall++;
 }
}
