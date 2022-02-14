
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef scalar_t__ u_int64_t ;
struct timespec {int tv_sec; scalar_t__ tv_nsec; } ;
struct TYPE_19__ {scalar_t__ pktsched_ptype; } ;
typedef TYPE_1__ pktsched_pkt_t ;
typedef scalar_t__ int64_t ;
struct TYPE_20__ {size_t fq_sc_index; scalar_t__ fq_min_qdelay; scalar_t__ fq_updatetime; int fq_flags; scalar_t__ fq_getqtime; } ;
typedef TYPE_2__ fq_t ;
struct TYPE_21__ {scalar_t__ fqs_target_qdelay; scalar_t__ fqs_update_interval; int * fqs_classq; } ;
typedef TYPE_3__ fq_if_t ;
typedef int fq_if_classq_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 void* FUNC_4 (TYPE_3__*,TYPE_2__*,TYPE_1__*) ;
 int FUNC_5 (TYPE_3__*,TYPE_2__*,int *) ;
 int FUNC_6 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_7 (struct timespec*) ;
 int FUNC_8 (TYPE_1__*,int **,scalar_t__**,int *,int *,int *,int *) ;

void *
FUNC_9(fq_if_t *VAR_4, fq_t *VAR_5, pktsched_pkt_t *VAR_6)
{
 void *VAR_7;
 fq_if_classq_t *VAR_8;
 u_int64_t VAR_9;
 int64_t VAR_10 = 0;
 struct timespec VAR_11;
 uint32_t *VAR_12, VAR_13;
 uint64_t *VAR_14;

 VAR_7 = FUNC_4(VAR_4, VAR_5, VAR_6);
 if (VAR_7 == ((void*)0))
  return (((void*)0));

 FUNC_8(VAR_6, &VAR_12, &VAR_14, ((void*)0), ((void*)0),
     ((void*)0), &VAR_13);

 FUNC_7(&VAR_11);
 VAR_9 = (VAR_11.tv_sec * VAR_1) + VAR_11.tv_nsec;


 if (VAR_9 > *VAR_14)
  VAR_10 = VAR_9 - *VAR_14;
 VAR_8 = &VAR_4->fqs_classq[VAR_5->fq_sc_index];

 if (VAR_5->fq_min_qdelay == 0 ||
     (VAR_10 > 0 && (u_int64_t)VAR_10 < VAR_5->fq_min_qdelay))
  VAR_5->fq_min_qdelay = VAR_10;
 if (VAR_9 >= VAR_5->fq_updatetime) {
  if (VAR_5->fq_min_qdelay > VAR_4->fqs_target_qdelay) {
   if (!FUNC_1(VAR_5))
    FUNC_2(VAR_5);
  } else {
   FUNC_0(VAR_5);
  }



  VAR_5->fq_updatetime = VAR_9 + VAR_4->fqs_update_interval;
  VAR_5->fq_min_qdelay = 0;
 }
 if (!FUNC_1(VAR_5) || FUNC_3(VAR_5)) {
  FUNC_0(VAR_5);
  if (VAR_5->fq_flags & VAR_0) {
   FUNC_5(VAR_4, VAR_5, VAR_8);
  }
 }

 if (FUNC_3(VAR_5)) {

  VAR_5->fq_getqtime = 0;
 } else {
  VAR_5->fq_getqtime = VAR_9;
 }
 FUNC_6(VAR_4, VAR_5);

 *VAR_14 = 0;
 if (VAR_6->pktsched_ptype == VAR_3)
  *VAR_12 &= ~VAR_2;

 return (VAR_7);
}
