
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_15__ ;


typedef TYPE_1__* vm_page_t ;
typedef TYPE_2__* vm_object_t ;
struct TYPE_18__ {int tv_sec; int tv_nsec; } ;
struct vm_speculative_age_q {int age_q; TYPE_15__ age_ts; } ;
struct TYPE_21__ {unsigned int tv_sec; int tv_nsec; } ;
typedef TYPE_3__ mach_timespec_t ;
typedef scalar_t__ clock_sec_t ;
typedef int clock_nsec_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_22__ {int vm_page_speculative_q_age_ms; } ;
struct TYPE_20__ {scalar_t__ internal; int pages_created; } ;
struct TYPE_19__ {scalar_t__ vmp_q_state; int vmp_pageq; scalar_t__ vmp_fictitious; scalar_t__ vmp_private; scalar_t__ vmp_laundry; int vmp_unusual; scalar_t__ vmp_absent; } ;


 int FUNC_0 (TYPE_15__*,TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,TYPE_15__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 TYPE_2__* FUNC_5 (TYPE_1__*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (scalar_t__*,int *) ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int *,int *) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_12 (int *) ;
 int VAR_13 ;
 struct vm_speculative_age_q* VAR_14 ;
 int FUNC_13 (TYPE_1__*,scalar_t__) ;
 int FUNC_14 (struct vm_speculative_age_q*) ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 TYPE_4__ VAR_17 ;

void
FUNC_15(
 vm_page_t VAR_18,
 boolean_t VAR_19)
{
        struct vm_speculative_age_q *VAR_20;
 vm_object_t VAR_21;

 VAR_21 = FUNC_5(VAR_18);

 FUNC_3(VAR_18);
 FUNC_10(VAR_18);

 FUNC_7(FUNC_4(VAR_18) != VAR_11);
 FUNC_2(&VAR_13, VAR_1);
 FUNC_7( !(VAR_18->vmp_absent && !VAR_18->vmp_unusual));
 FUNC_7(VAR_21->internal == VAR_0);
 if (VAR_18->vmp_laundry || VAR_18->vmp_private || VAR_18->vmp_fictitious ||
     (VAR_18->vmp_q_state == VAR_8) ||
     (VAR_18->vmp_q_state == VAR_6))
  return;

 FUNC_13(VAR_18, VAR_0);

 if ( !FUNC_6(VAR_18)) {
         mach_timespec_t VAR_22;
  clock_sec_t VAR_23;
  clock_nsec_t VAR_24;

         FUNC_8(&VAR_23, &VAR_24);
  VAR_22.tv_sec = (unsigned int) VAR_23;
  VAR_22.tv_nsec = VAR_24;

  if (VAR_15 == 0) {

   VAR_9 = VAR_5;
   VAR_10 = VAR_5;

   VAR_20 = &VAR_14[VAR_9];




   VAR_20->age_ts.tv_sec = VAR_17.vm_page_speculative_q_age_ms / 1000;
   VAR_20->age_ts.tv_nsec = (VAR_17.vm_page_speculative_q_age_ms % 1000) * 1000 * VAR_2;
   FUNC_0(&VAR_20->age_ts, &VAR_22);
  } else {
   VAR_20 = &VAR_14[VAR_9];

   if (FUNC_1(&VAR_22, &VAR_20->age_ts) >= 0) {

           VAR_9++;

    if (VAR_9 > VAR_4)
            VAR_9 = VAR_5;
    if (VAR_9 == VAR_10) {
            VAR_10 = VAR_9 + 1;

     if (VAR_10 > VAR_4)
             VAR_10 = VAR_5;
    }
    VAR_20 = &VAR_14[VAR_9];

    if (!FUNC_12(&VAR_20->age_q))
            FUNC_14(VAR_20);

    VAR_20->age_ts.tv_sec = VAR_17.vm_page_speculative_q_age_ms / 1000;
    VAR_20->age_ts.tv_nsec = (VAR_17.vm_page_speculative_q_age_ms % 1000) * 1000 * VAR_2;
    FUNC_0(&VAR_20->age_ts, &VAR_22);
   }
  }
  FUNC_11(&VAR_20->age_q, &VAR_18->vmp_pageq);
  VAR_18->vmp_q_state = VAR_7;
  VAR_15++;
  VAR_12++;

  if (VAR_19 == VAR_3) {
   FUNC_9(VAR_21);

          VAR_21->pages_created++;



  }
 }
 FUNC_3(VAR_18);
}
