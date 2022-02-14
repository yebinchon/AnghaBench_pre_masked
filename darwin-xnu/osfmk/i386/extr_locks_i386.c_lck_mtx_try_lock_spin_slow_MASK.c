
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
 int FUNC_0 (int ,int *,int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_1__* FUNC_2 () ;
 scalar_t__ FUNC_3 (int **,int*) ;
 int FUNC_4 (int *,int ,int*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int*) ;
 int FUNC_7 (struct _lck_mtx_ext_*,int*) ;
 int FUNC_8 (struct _lck_mtx_ext_*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,uintptr_t) ;

__attribute__((noinline))
boolean_t
FUNC_11(
 lck_mtx_t *VAR_8)
{
 boolean_t VAR_9 = VAR_0;
 uint32_t VAR_10;
 int VAR_11 = 0;

 VAR_10 = FUNC_9(VAR_8);


 if (FUNC_1(VAR_10 & ((VAR_1 | VAR_2)))) {







  if (FUNC_1(!(VAR_10 & VAR_1))){
   return VAR_0;
  }


  if (FUNC_1(VAR_10 == VAR_4)) {
   return FUNC_5(VAR_8);
  }


  if (FUNC_1(VAR_10 == VAR_5)) {
   VAR_9 = FUNC_3(&VAR_8, &VAR_10);

   VAR_11 = 0;
   FUNC_8((struct _lck_mtx_ext_*)VAR_8);
  }

  if (!FUNC_6(VAR_8, &VAR_10)) {
   if (VAR_9)
    FUNC_7((struct _lck_mtx_ext_*)VAR_8, &VAR_11);
   return VAR_0;
  }
 }


 while (FUNC_1(!FUNC_4(VAR_8, VAR_3, &VAR_10))) {
  if (!FUNC_6(VAR_8, &VAR_10)) {
   if (VAR_9)
    FUNC_7((struct _lck_mtx_ext_*)VAR_8, &VAR_11);
   return VAR_0;
  }
 }



 thread_t VAR_12 = FUNC_2();

 FUNC_10(VAR_8, (uintptr_t)VAR_12);
 return VAR_7;

}
