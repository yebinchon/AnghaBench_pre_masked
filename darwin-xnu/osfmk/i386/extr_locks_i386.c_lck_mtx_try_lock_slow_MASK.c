
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_1__* thread_t ;
struct _lck_mtx_ext_ {int dummy; } ;
typedef int lck_mtx_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_3__ {int mutex_count; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 TYPE_1__* FUNC_1 () ;
 scalar_t__ FUNC_2 (int **,int*) ;
 int FUNC_3 (int *,int,int*) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int*) ;
 int FUNC_8 (struct _lck_mtx_ext_*,int*) ;
 int FUNC_9 (struct _lck_mtx_ext_*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,uintptr_t) ;

__attribute__((noinline))
boolean_t
FUNC_12(
 lck_mtx_t *VAR_7)
{
 boolean_t VAR_8 = VAR_0;
 uint32_t VAR_9;
 int VAR_10 = 0;

 VAR_9 = FUNC_10(VAR_7);


 if (FUNC_0(VAR_9 & ((VAR_1 | VAR_2)))) {







  if (FUNC_0(!(VAR_9 & VAR_1))){
   return VAR_0;
  }


  if (FUNC_0(VAR_9 == VAR_3)) {
   return FUNC_4(VAR_7);
  }


  if (FUNC_0(VAR_9 == VAR_4)) {
   VAR_8 = FUNC_2(&VAR_7, &VAR_9);

   VAR_10 = 0;
   FUNC_9((struct _lck_mtx_ext_*)VAR_7);
  }

  if (!FUNC_7(VAR_7, &VAR_9)) {
   if (VAR_8)
    FUNC_8((struct _lck_mtx_ext_*)VAR_7, &VAR_10);
   return VAR_0;
  }
 }


 while (FUNC_0(!FUNC_3(VAR_7, VAR_2, &VAR_9))) {
  if (!FUNC_7(VAR_7, &VAR_9)) {
   if (VAR_8)
    FUNC_8((struct _lck_mtx_ext_*)VAR_7, &VAR_10);
   return VAR_0;
  }
 }



 thread_t VAR_11 = FUNC_1();

 FUNC_11(VAR_7, (uintptr_t)VAR_11);
 if (FUNC_0(VAR_9 & VAR_5)) {
  return FUNC_5(VAR_7);
 }


 FUNC_6(VAR_7, FUNC_10(VAR_7));

 return VAR_6;

}
