
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_1__* thread_t ;
struct _lck_mtx_ext_ {int dummy; } ;
typedef int lck_mtx_t ;
typedef int boolean_t ;
struct TYPE_3__ {int mutex_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 (int **,int*) ;
 void FUNC_5 (int *) ;
 int FUNC_6 (int *,int,int*) ;
 void FUNC_7 (int *,int ,int*) ;
 int FUNC_8 (int *,int*) ;
 int FUNC_9 (struct _lck_mtx_ext_*,int*) ;
 int FUNC_10 (struct _lck_mtx_ext_*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,uintptr_t) ;

__attribute__((noinline))
void
FUNC_13(
 lck_mtx_t *VAR_7)
{
 boolean_t VAR_8 = VAR_0;
 uint32_t VAR_9;
 int VAR_10 = 0;

 VAR_9 = FUNC_11(VAR_7);


 if (FUNC_1(VAR_9 & ((VAR_1 | VAR_2)))) {
  if (FUNC_1(!(VAR_9 & VAR_1))){

   return FUNC_7(VAR_7, VAR_8, &VAR_10);
  }


  if (FUNC_1(VAR_9 == VAR_4)) {
   return FUNC_5(VAR_7);
  }


  if (FUNC_1(VAR_9 == VAR_5)) {
   VAR_8 = FUNC_4(&VAR_7, &VAR_9);

   VAR_10 = 0;
   FUNC_10((struct _lck_mtx_ext_*)VAR_7);

   if (VAR_9 & VAR_3) {

    FUNC_2(VAR_9 & VAR_1);
    FUNC_9((struct _lck_mtx_ext_*)VAR_7, &VAR_10);
   }
  }

  if (!FUNC_8(VAR_7, &VAR_9)) {
   return FUNC_7(VAR_7, VAR_8, &VAR_10);
  }
 }


 while (FUNC_1(!FUNC_6(VAR_7, VAR_3, &VAR_9) )) {
  if (!FUNC_8(VAR_7, &VAR_9)) {
   return FUNC_7(VAR_7, VAR_8, &VAR_10);
  }
 }



 thread_t VAR_11 = FUNC_3();

 FUNC_12(VAR_7, (uintptr_t)VAR_11);
 return;
}
