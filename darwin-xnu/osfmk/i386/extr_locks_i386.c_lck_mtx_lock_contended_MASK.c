
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_1__* thread_t ;
struct _lck_mtx_ext_ {int dummy; } ;
struct TYPE_15__ {scalar_t__ lck_mtx_owner; } ;
typedef TYPE_2__ lck_mtx_t ;
typedef int lck_mtx_spinwait_ret_type_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_14__ {scalar_t__ was_promoted_on_wakeup; int mutex_count; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (TYPE_2__*,int*) ;
 void FUNC_3 (TYPE_2__*,scalar_t__) ;
 int FUNC_4 (TYPE_2__*,int,scalar_t__) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (struct _lck_mtx_ext_*) ;
 int FUNC_8 (struct _lck_mtx_ext_*,scalar_t__*) ;
 int FUNC_9 (struct _lck_mtx_ext_*,scalar_t__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*,uintptr_t) ;
 int FUNC_12 (TYPE_2__*,int) ;
 int FUNC_13 (char*,int,TYPE_2__*) ;

__attribute__((used)) __attribute__((noinline))
static void
FUNC_14(
 lck_mtx_t *VAR_3,
 boolean_t VAR_4,
 boolean_t *VAR_5)
{
 lck_mtx_spinwait_ret_type_t VAR_6;
 uint32_t VAR_7;
 thread_t VAR_8;

try_again:

 if (VAR_4) {
  FUNC_8((struct _lck_mtx_ext_*)VAR_3, VAR_5);
 }

 VAR_6 = FUNC_5(VAR_3);
 VAR_7 = FUNC_10(VAR_3);
 switch (VAR_6) {
 case 129:




  if (VAR_4) {
   FUNC_7((struct _lck_mtx_ext_*)VAR_3);
  }


 case 128:




  FUNC_2(VAR_3, &VAR_7);
  FUNC_0(VAR_7 & VAR_0);

  if (VAR_7 & VAR_1) {
   if (VAR_4) {
    FUNC_9((struct _lck_mtx_ext_*)VAR_3, VAR_5);
   }
   FUNC_6(VAR_3);



   goto try_again;
  } else {


   VAR_7 |= VAR_1;
   FUNC_12(VAR_3, VAR_7);
   VAR_8 = FUNC_1();
   FUNC_11(VAR_3, (uintptr_t)VAR_8);





  }

  break;
 case 130:






  break;
 default:
  FUNC_13("lck_mtx_lock_spinwait_x86 returned %d for mutex %p\n", VAR_6, VAR_3);
 }






 VAR_8 = (thread_t)VAR_3->lck_mtx_owner;
 if (VAR_7 & VAR_2 || VAR_8->was_promoted_on_wakeup) {
  return FUNC_3(VAR_3, VAR_4);
 }


 FUNC_4(VAR_3, FUNC_10(VAR_3), VAR_4);
}
