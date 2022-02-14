
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ thread_t ;
typedef int spl_t ;
typedef TYPE_1__* semaphore_t ;
typedef scalar_t__ kern_return_t ;
struct TYPE_5__ {int count; int waitq; int active; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,int ,int ,int *,int ,int ) ;
 scalar_t__ FUNC_5 (int *,int ,int ,int *,int ,int ) ;
 scalar_t__ FUNC_6 (int *,int ,scalar_t__,int ,int ) ;

kern_return_t
FUNC_7(
 semaphore_t VAR_11,
 thread_t VAR_12,
 int VAR_13)
{
 kern_return_t VAR_14;
 spl_t VAR_15;

 VAR_15 = FUNC_2();
 FUNC_0(VAR_11);

 if (!VAR_11->active) {
  FUNC_1(VAR_11);
  FUNC_3(VAR_15);
  return VAR_2;
 }

 if (VAR_12 != VAR_7) {
  if (VAR_11->count < 0) {
   VAR_14 = FUNC_6(
     &VAR_11->waitq,
     VAR_3,
     VAR_12,
     VAR_6,
     VAR_10);

  } else {
   VAR_14 = VAR_0;
   FUNC_1(VAR_11);
  }
  FUNC_3(VAR_15);
  return VAR_14;
 }

 if (VAR_13 & VAR_4) {
  int VAR_16 = VAR_11->count;

  VAR_14 = VAR_0;
  if (VAR_16 < 0) {
   VAR_11->count = 0;
   VAR_14 = FUNC_4(
     &VAR_11->waitq,
     VAR_3,
     VAR_6, ((void*)0),
     VAR_8,
     VAR_10);

  } else {
   if (VAR_13 & VAR_5)
    VAR_11->count++;
   VAR_14 = VAR_1;
   FUNC_1(VAR_11);
  }
  FUNC_3(VAR_15);
  return VAR_14;
 }

 if (VAR_11->count < 0) {
  VAR_14 = FUNC_5(
     &VAR_11->waitq,
     VAR_3,
     VAR_6, ((void*)0),
     VAR_8,
     VAR_9);
  if (VAR_14 == VAR_1) {
   FUNC_1(VAR_11);
   FUNC_3(VAR_15);
   return VAR_1;
  } else {
   VAR_11->count = 0;
  }
 }

 if (VAR_13 & VAR_5) {
  VAR_11->count++;
 }

 FUNC_1(VAR_11);
 FUNC_3(VAR_15);
 return VAR_0;
}
