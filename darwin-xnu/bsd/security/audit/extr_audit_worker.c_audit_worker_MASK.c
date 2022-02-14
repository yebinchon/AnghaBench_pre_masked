
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int thread_continue_t ;
struct kaudit_record {int k_ar_commit; } ;
struct kaudit_queue {int dummy; } ;
struct TYPE_4__ {int * vc_thread; } ;
struct TYPE_3__ {scalar_t__ aq_lowater; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct kaudit_queue*) ;
 struct kaudit_record* FUNC_1 (struct kaudit_queue*) ;
 int FUNC_2 (struct kaudit_queue*) ;
 int FUNC_3 (struct kaudit_queue*,struct kaudit_record*,int ) ;
 int FUNC_4 (struct kaudit_queue*,struct kaudit_record*,int ) ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (struct kaudit_record*) ;
 int VAR_4 ;
 struct kaudit_queue VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_1__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (struct kaudit_record*) ;
 int * FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int ) ;
 int VAR_11 ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) __attribute__((noreturn))
static void
FUNC_13(void)
{
 struct kaudit_queue VAR_12;
 struct kaudit_record *VAR_13;
 int VAR_14;

 if (VAR_2.vc_thread == ((void*)0))
  VAR_2.vc_thread = FUNC_7();

 FUNC_2(&VAR_12);
 FUNC_11(&VAR_4);
 while (1) {
  FUNC_10(&VAR_4, VAR_1);




  while (FUNC_0(&VAR_5))
   FUNC_9(&VAR_10, &VAR_4,
       (thread_continue_t)FUNC_13);
  VAR_14 = 0;
  while ((VAR_13 = FUNC_1(&VAR_5))) {
   FUNC_4(&VAR_5, VAR_13, VAR_11);
   VAR_7--;
   if (VAR_7 == VAR_8.aq_lowater)
    VAR_14++;
   FUNC_3(&VAR_12, VAR_13, VAR_11);
  }
  if (VAR_14)
   FUNC_8(&VAR_9);

  FUNC_12(&VAR_4);
  while ((VAR_13 = FUNC_1(&VAR_12))) {
   FUNC_4(&VAR_12, VAR_13, VAR_11);
   if (VAR_13->k_ar_commit & VAR_0) {
    VAR_6 = 0;
    FUNC_8(&VAR_3);
   } else {
    FUNC_6(VAR_13);
    FUNC_5(VAR_13);
   }
  }
  FUNC_11(&VAR_4);
 }
}
