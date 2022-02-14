
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef int thread_continue_t ;
struct TYPE_5__ {int thread_id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int ,int *,int ,TYPE_1__**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int *) ;
 int FUNC_4 (int *,int *,int *,int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,int ,int ,int ,int ) ;
 int FUNC_8 (int *) ;
 int VAR_10 ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,char*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;

void
FUNC_11()
{
 thread_t VAR_21 = ((void*)0);

 FUNC_2(&VAR_16);
 FUNC_3(&VAR_15,
       "vm_swap_data",
       &VAR_16);
 FUNC_1(&VAR_13);
 FUNC_4(&VAR_12,
    &VAR_14,
    &VAR_15,
    &VAR_13);

 FUNC_8(&VAR_10);


 if (FUNC_0((thread_continue_t)VAR_19, ((void*)0),
      VAR_0, &VAR_21) != VAR_1) {
  FUNC_5("vm_swapout_thread: create failed");
 }
 FUNC_10(VAR_21, "VM_swapout");
 VAR_20 = VAR_21->thread_id;

 FUNC_9(VAR_21);

 if (FUNC_0((thread_continue_t)VAR_17, ((void*)0),
     VAR_0, &VAR_21) != VAR_1) {
  FUNC_5("vm_swapfile_create_thread: create failed");
 }

 FUNC_10(VAR_21, "VM_swapfile_create");
 FUNC_9(VAR_21);

 if (FUNC_0((thread_continue_t)VAR_18, ((void*)0),
     VAR_0, &VAR_21) != VAR_1) {
  FUNC_5("vm_swapfile_gc_thread: create failed");
 }
 FUNC_10(VAR_21, "VM_swapfile_gc");
 FUNC_9(VAR_21);

 FUNC_7(VAR_9, VAR_21->thread_id,
                                 VAR_3, VAR_4, VAR_6);
 FUNC_7(VAR_9, VAR_21->thread_id,
                                 VAR_3, VAR_5, VAR_2);
 VAR_11 = VAR_7;

 FUNC_6("VM Swap Subsystem is ON\n");
}
