
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vm_size_t ;
typedef TYPE_1__* thread_t ;
typedef TYPE_2__* task_t ;
typedef int queue_entry_t ;
typedef int * processor_set_t ;
typedef unsigned int mach_msg_type_number_t ;
typedef int kern_return_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_10__ {int tasks; } ;
struct TYPE_9__ {TYPE_2__* task; int threads; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (void*,void*,int) ;
 void* FUNC_2 (int) ;
 TYPE_2__* VAR_7 ;
 int FUNC_3 (void*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int VAR_8 ;
 int FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;
 int VAR_12 ;
 int VAR_13 ;

kern_return_t
FUNC_14(
 processor_set_t VAR_14,
 void **VAR_15,
 mach_msg_type_number_t *VAR_16,
 int VAR_17)
{
 unsigned int VAR_18;
 task_t VAR_19;
 thread_t VAR_20;

 task_t *VAR_21;
 unsigned int VAR_22;
 vm_size_t VAR_23, VAR_24;

 thread_t *VAR_25;
 unsigned int VAR_26;
 vm_size_t VAR_27, VAR_28;

 void *VAR_29, *VAR_30;
 vm_size_t VAR_31, VAR_32;

 if (VAR_14 == VAR_4 || VAR_14 != &VAR_8)
  return (VAR_1);

 VAR_23 = 0;
 VAR_24 = 0;
 VAR_21 = ((void*)0);
 VAR_22 = 0;

 VAR_27 = 0;
 VAR_28 = 0;
 VAR_25 = ((void*)0);
 VAR_26 = 0;

 for (;;) {
  FUNC_4(&VAR_11);


  if (VAR_17 == VAR_5)
   VAR_28 = VAR_13 * sizeof(void *);

  else

   VAR_24 = VAR_10 * sizeof(void *);

  if (VAR_24 <= VAR_23 &&
      VAR_28 <= VAR_27)
   break;


  FUNC_5(&VAR_11);


  if (VAR_24 > VAR_23) {
   if (VAR_23 != 0)
    FUNC_3(VAR_21, VAR_23);

   FUNC_0(VAR_24 > 0);
   VAR_23 = VAR_24;

   VAR_21 = (task_t *)FUNC_2(VAR_23);
   if (VAR_21 == ((void*)0)) {
    if (VAR_27 != 0)
     FUNC_3(VAR_25, VAR_27);
    return (VAR_2);
   }
  }


  if (VAR_28 > VAR_27) {
   if (VAR_27 != 0)
    FUNC_3(VAR_25, VAR_27);

   FUNC_0(VAR_28 > 0);
   VAR_27 = VAR_28;

   VAR_25 = (thread_t *)FUNC_2(VAR_27);
   if (VAR_25 == 0) {
    if (VAR_23 != 0)
     FUNC_3(VAR_21, VAR_23);
    return (VAR_2);
   }
  }
 }




 if (VAR_17 == VAR_5) {
  for (VAR_20 = (thread_t)FUNC_8(&VAR_12);
       !FUNC_7(&VAR_12, (queue_entry_t)VAR_20);
       VAR_20 = (thread_t)FUNC_9(&VAR_20->threads)) {



    FUNC_13(VAR_20);
    VAR_25[VAR_26++] = VAR_20;



  }
 }

   else {


  for (VAR_19 = (task_t)FUNC_8(&VAR_9);
       !FUNC_7(&VAR_9, (queue_entry_t)VAR_19);
       VAR_19 = (task_t)FUNC_9(&VAR_19->tasks)) {



    FUNC_11(VAR_19);
    VAR_21[VAR_22++] = VAR_19;



  }

 }


 FUNC_5(&VAR_11);
 if (VAR_17 == VAR_5) {
  if (VAR_26 == 0) {

   FUNC_0(VAR_23 == 0);
   if (VAR_27 != 0)
    FUNC_3(VAR_25, VAR_27);
   *VAR_15 = ((void*)0);
   *VAR_16 = 0;
   return VAR_3;
  }
  VAR_32 = VAR_26 * sizeof(void *);
  VAR_31 = VAR_27;
  VAR_29 = VAR_25;
 } else {
  if (VAR_22 == 0) {

   FUNC_0(VAR_27 == 0);
   if (VAR_23 != 0)
    FUNC_3(VAR_21, VAR_23);
   *VAR_15 = ((void*)0);
   *VAR_16 = 0;
   return VAR_3;
  }
  VAR_32 = VAR_22 * sizeof(void *);
  VAR_31 = VAR_23;
  VAR_29 = VAR_21;
 }


 if (VAR_32 < VAR_31) {
  VAR_30 = FUNC_2(VAR_32);
  if (VAR_30 == 0) {
   for (VAR_18 = 0; VAR_18 < VAR_22; VAR_18++) {
    if (VAR_17 == VAR_5)
     FUNC_12(VAR_25[VAR_18]);
    else
     FUNC_10(VAR_21[VAR_18]);
   }
   if (VAR_31)
    FUNC_3(VAR_29, VAR_31);
   return (VAR_2);
  }

  FUNC_1((void *) VAR_29, (void *) VAR_30, VAR_32);
  FUNC_3(VAR_29, VAR_31);

  VAR_29 = VAR_30;
  VAR_31 = VAR_32;
 }

 *VAR_15 = (void **)VAR_29;
 *VAR_16 = (unsigned int)VAR_31 / sizeof(void *);

 return (VAR_3);
}
