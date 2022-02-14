
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint64_t ;
typedef TYPE_1__* thread_t ;
typedef int thread_continue_t ;
typedef int spl_t ;
typedef TYPE_2__* semaphore_t ;
typedef scalar_t__ kern_return_t ;
struct TYPE_14__ {int count; int waitq; int active; } ;
struct TYPE_13__ {int wait_result; void (* sth_continuation ) (scalar_t__) ;TYPE_2__* sth_signalsemaphore; TYPE_2__* sth_waitsemaphore; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 TYPE_2__* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_1 () ;
 int VAR_16 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int ,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ VAR_17 ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 (int *,int ,int ,int ,int ,int ,TYPE_1__*) ;

__attribute__((used)) static kern_return_t
FUNC_11(
 semaphore_t VAR_18,
 semaphore_t VAR_19,
 uint64_t VAR_20,
 int VAR_21,
 void (*VAR_22)(kern_return_t))
{
 int VAR_23;
 spl_t VAR_24;
 kern_return_t VAR_25 = VAR_1;

 VAR_24 = FUNC_6();
 FUNC_3(VAR_18);

 if (!VAR_18->active) {
  VAR_25 = VAR_5;
 } else if (VAR_18->count > 0) {
  VAR_18->count--;
  VAR_25 = VAR_4;
 } else if (VAR_21 & VAR_9) {
  VAR_25 = VAR_3;
 } else {
  thread_t VAR_26 = FUNC_1();

  VAR_18->count = -1;

  FUNC_9(VAR_26, VAR_16);
  (void)FUNC_10(
     &VAR_18->waitq,
     VAR_6,
     VAR_10,
     VAR_15,
     VAR_20, VAR_14,
     VAR_26);
 }
 FUNC_5(VAR_18);
 FUNC_7(VAR_24);





 if (VAR_19 != VAR_7) {
  kern_return_t VAR_27;






  VAR_27 = FUNC_4(VAR_19,
            VAR_13,
            VAR_8);

  if (VAR_27 == VAR_2)
   VAR_27 = VAR_4;
  else if (VAR_27 == VAR_5) {
   thread_t VAR_28 = FUNC_1();

   FUNC_0(VAR_28, VAR_12);
   VAR_25 = FUNC_2(VAR_28->wait_result);
   if (VAR_25 == VAR_0)
    VAR_25 = VAR_5;
  }
 }





 if (VAR_25 != VAR_1)
  return VAR_25;
 if (VAR_22) {
  thread_t VAR_29 = FUNC_1();

  VAR_29->sth_continuation = VAR_22;
  VAR_29->sth_waitsemaphore = VAR_18;
  VAR_29->sth_signalsemaphore = VAR_19;
  VAR_23 = FUNC_8((thread_continue_t)VAR_17);
 }
 else {
  VAR_23 = FUNC_8(VAR_11);
 }

 return (FUNC_2(VAR_23));
}
