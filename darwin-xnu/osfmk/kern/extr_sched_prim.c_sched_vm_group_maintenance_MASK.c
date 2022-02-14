
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef TYPE_1__* thread_t ;
typedef int spl_t ;
typedef scalar_t__ processor_t ;
typedef void* boolean_t ;
struct TYPE_9__ {int state; scalar_t__ runq; scalar_t__ last_made_runnable_time; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 TYPE_1__** VAR_13 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*,scalar_t__) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int) ;
 void* FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_11(void)
{
 uint64_t VAR_14 = FUNC_1();
 uint64_t VAR_15 = VAR_14 - VAR_9;
 int VAR_16;
 spl_t VAR_17;
 boolean_t VAR_18 = VAR_0;
 boolean_t VAR_19 = VAR_0;
 boolean_t VAR_20 = VAR_0;
 processor_t VAR_21 = VAR_1;


 FUNC_2(&VAR_10);

 VAR_17 = FUNC_4();

 for (VAR_16=0; VAR_16 < VAR_12; VAR_16++) {
  thread_t VAR_22 = VAR_13[VAR_16];
  FUNC_0(VAR_22 != VAR_4);
  FUNC_7(VAR_22);
  if ((VAR_22->state & (VAR_5|VAR_6)) == VAR_5) {
   if (VAR_22->runq != VAR_1 && VAR_22->last_made_runnable_time < VAR_15) {
    VAR_18 = VAR_7;
   } else if (VAR_22->runq == VAR_1) {

    VAR_19 = VAR_7;
   }
  }
  FUNC_10(VAR_22);

  if (VAR_18 && VAR_19) {

   break;
  }
 }

 FUNC_5(VAR_17);

 if (VAR_11) {

  if (!VAR_18) {

   VAR_20 = VAR_7;
   VAR_21 = VAR_8;
   VAR_11 = VAR_0;
  }
 } else {







  if (VAR_18 && !VAR_19) {

   VAR_20 = VAR_7;
   VAR_21 = VAR_1;
   VAR_11 = VAR_7;
  }
 }

 if (VAR_20) {
  VAR_17 = FUNC_4();
  for (VAR_16=0; VAR_16 < VAR_12; VAR_16++) {
   thread_t VAR_23 = VAR_13[VAR_16];
   boolean_t VAR_24;
   FUNC_0(VAR_23 != VAR_4);

   FUNC_7(VAR_23);
   VAR_24 = FUNC_9(VAR_23);
   if (VAR_24 || ((VAR_23->state & (VAR_5 | VAR_6)) == VAR_6)) {
    FUNC_6(VAR_23, VAR_21);
   } else {





    if (VAR_21 == VAR_1) {
     FUNC_6(VAR_23, VAR_21);
    } else {
     VAR_11 = VAR_7;
    }
   }

   if (VAR_24) {
    FUNC_8(VAR_23, VAR_2 | VAR_3);
   }
   FUNC_10(VAR_23);
  }
  FUNC_5(VAR_17);
 }

 FUNC_3(&VAR_10);
}
