
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct TYPE_21__ {scalar_t__ pktsched_ptype; } ;
typedef TYPE_2__ pktsched_pkt_t ;
struct TYPE_22__ {size_t fq_sc_index; int fq_flags; } ;
typedef TYPE_3__ fq_t ;
struct TYPE_23__ {int fqs_ifq; TYPE_3__* fqs_large_flow; TYPE_5__* fqs_classq; } ;
typedef TYPE_4__ fq_if_t ;
struct TYPE_20__ {int fcl_drop_overflow; } ;
struct TYPE_24__ {TYPE_1__ fcl_stat; } ;
typedef TYPE_5__ fq_if_classq_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_4__*,TYPE_3__*,TYPE_2__*) ;
 int FUNC_6 (TYPE_3__*,TYPE_5__*,int) ;
 int FUNC_7 (TYPE_4__*,TYPE_5__*,TYPE_3__*,int) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,int **,scalar_t__**,int *,int *,int *,int *) ;

inline void
FUNC_11(fq_if_t *VAR_4)
{
 fq_t *VAR_5 = VAR_4->fqs_large_flow;
 fq_if_classq_t *VAR_6;
 pktsched_pkt_t VAR_7;
 uint32_t *VAR_8;
 uint64_t *VAR_9;

 if (VAR_5 == ((void*)0))
  return;

 FUNC_2(!FUNC_4(VAR_5));

 VAR_6 = &VAR_4->fqs_classq[VAR_5->fq_sc_index];
 FUNC_3(&VAR_7);
 (void)FUNC_5(VAR_4, VAR_5, &VAR_7);

 FUNC_10(&VAR_7, &VAR_8, &VAR_9, ((void*)0), ((void*)0),
     ((void*)0), ((void*)0));

 FUNC_0(VAR_4->fqs_ifq);
 *VAR_9 = 0;
 if (VAR_7.pktsched_ptype == VAR_3)
  *VAR_8 &= ~VAR_2;

 if (FUNC_4(VAR_5)) {
  VAR_4->fqs_large_flow = ((void*)0);
  if (VAR_5->fq_flags & VAR_1) {
   FUNC_7(VAR_4, VAR_6, VAR_5, 1);
  } else {
   FUNC_2(VAR_5->fq_flags & VAR_0);
   FUNC_6(VAR_5, VAR_6, 1);
  }
 }
 FUNC_1(VAR_4->fqs_ifq, 1, FUNC_9(&VAR_7));

 FUNC_8(&VAR_7);
 VAR_6->fcl_stat.fcl_drop_overflow++;
}
