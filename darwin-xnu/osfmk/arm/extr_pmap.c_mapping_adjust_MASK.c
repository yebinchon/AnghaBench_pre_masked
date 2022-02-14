
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thread_continue_t ;
typedef scalar_t__ kern_return_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *,int ,int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;

void FUNC_3(void) {
 kern_return_t VAR_4;

 VAR_4 = FUNC_0((thread_continue_t)VAR_2, ((void*)0), VAR_1, &VAR_3);
 if (VAR_4 != VAR_0) {
  FUNC_1("pmap: mapping_replenish thread creation failed");
 }
 FUNC_2(VAR_3);
}
