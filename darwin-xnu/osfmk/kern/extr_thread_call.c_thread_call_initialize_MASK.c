
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int thread_t ;
typedef int thread_continue_t ;
typedef TYPE_2__* thread_call_t ;
typedef int thread_call_data_t ;
typedef int spl_t ;
typedef scalar_t__ kern_return_t ;
struct TYPE_4__ {int q_link; } ;
struct TYPE_5__ {TYPE_1__ tc_call; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 TYPE_2__* VAR_14 ;
 scalar_t__ FUNC_3 (int ,int *,scalar_t__,int *) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int ,int ,int *) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *) ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_9 (int *) ;
 int * VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int,int,int,char*) ;
 int FUNC_13 (int ,int ,int ) ;

void
FUNC_14(void)
{
 int VAR_24 = sizeof (thread_call_data_t);
 VAR_23 = FUNC_12(VAR_24, 4096 * VAR_24, 16 * VAR_24, "thread_call");
 FUNC_13(VAR_23, VAR_11, VAR_1);
 FUNC_13(VAR_23, VAR_12, VAR_10);

 FUNC_4(&VAR_21, "thread_call", VAR_5);
 FUNC_5(&VAR_22, &VAR_21, VAR_4);

 FUNC_6(0, VAR_8, &VAR_17);
 FUNC_11(&VAR_13, VAR_6 | VAR_7);

 for (uint32_t VAR_25 = 0; VAR_25 < VAR_9; VAR_25++)
  FUNC_9(&VAR_18[VAR_25]);

 spl_t VAR_26 = FUNC_0();

 FUNC_8(&VAR_19);
 for (
   thread_call_t VAR_27 = VAR_14;
   VAR_27 < &VAR_14[VAR_2];
   VAR_27++) {

  FUNC_2(&VAR_19, &VAR_27->tc_call.q_link);
  VAR_20++;
 }

 VAR_16 = VAR_10;

 FUNC_1(VAR_26);

 thread_t VAR_28;
 kern_return_t VAR_29;

 VAR_29 = FUNC_3((thread_continue_t)VAR_15,
                                       ((void*)0), VAR_0 + 1, &VAR_28);
 if (VAR_29 != VAR_3)
  FUNC_7("thread_call_initialize");

 FUNC_10(VAR_28);
}
