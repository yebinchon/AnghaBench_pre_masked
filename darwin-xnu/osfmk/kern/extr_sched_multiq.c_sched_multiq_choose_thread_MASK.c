
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_15__ ;


typedef int thread_t ;
typedef TYPE_2__* sched_group_t ;
typedef TYPE_3__* run_queue_t ;
typedef int processor_t ;
typedef scalar_t__ integer_t ;
typedef TYPE_4__* entry_queue_t ;
typedef scalar_t__ boolean_t ;
typedef int ast_t ;
struct TYPE_20__ {int highq; scalar_t__ count; } ;
struct TYPE_19__ {int highq; scalar_t__ count; } ;
struct TYPE_17__ {scalar_t__ count; scalar_t__ highq; } ;
struct TYPE_18__ {TYPE_1__ runq; } ;
struct TYPE_16__ {TYPE_2__* sched_group; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,int ,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 TYPE_15__* FUNC_2 () ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,TYPE_2__*) ;
 TYPE_3__* FUNC_5 (int ) ;
 TYPE_4__* FUNC_6 (int ) ;
 scalar_t__ VAR_16 ;
 int FUNC_7 (TYPE_3__*,int ) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_4__*,TYPE_2__*) ;

__attribute__((used)) static thread_t
FUNC_11(
                           processor_t VAR_17,
                           int VAR_18,
                           ast_t VAR_19)
{
 entry_queue_t VAR_20 = FUNC_6(VAR_17);
 run_queue_t VAR_21 = FUNC_5(VAR_17);

 boolean_t VAR_22 = VAR_3;

 if (VAR_21->highq < VAR_18 &&
     VAR_20->highq < VAR_18)
  return VAR_10;

 if (VAR_21->count && VAR_20->count) {
  if (VAR_21->highq >= VAR_20->highq) {
   VAR_22 = VAR_11;
  } else {

  }
 } else if (VAR_21->count) {
  VAR_22 = VAR_11;
 } else if (VAR_20->count) {

 } else {
  return (VAR_10);
 }

 if (VAR_22) {
  FUNC_0(VAR_4,
      FUNC_1(VAR_2, VAR_6) | VAR_1,
      VAR_5, VAR_20->highq, VAR_21->highq, 0, 0);

  return FUNC_7(VAR_21, VAR_9);
 }

 sched_group_t VAR_23 = FUNC_2()->sched_group;
 if (VAR_23->runq.count != 0 && (VAR_19 & VAR_0) == 0) {
  boolean_t VAR_24 = VAR_11;

  integer_t VAR_25 = VAR_20->highq;
  integer_t VAR_26 = VAR_23->runq.highq;







  if (VAR_25 > VAR_26) {




   if (VAR_25 > VAR_15 && VAR_26 <= VAR_15)
    VAR_24 = VAR_3;





   if (VAR_25 >= VAR_14)
    VAR_24 = VAR_3;




   if ((VAR_25 - VAR_26) >= VAR_13)
    VAR_24 = VAR_3;
  }

  if (VAR_24) {

   FUNC_0(VAR_4,
       FUNC_1(VAR_2, VAR_6) | VAR_1,
       VAR_8, VAR_25, VAR_26, 0, 0);

   return FUNC_10(VAR_20, VAR_23);
  }
 }

 FUNC_0(VAR_4,
     FUNC_1(VAR_2, VAR_6) | VAR_1,
     VAR_7, VAR_20->highq, VAR_23->runq.highq, 0, 0);


 if (VAR_12) {
  return FUNC_8(VAR_20);
 } else {
  return FUNC_9(VAR_20);
 }
}
