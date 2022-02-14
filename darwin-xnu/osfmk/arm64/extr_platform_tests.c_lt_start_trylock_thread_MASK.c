
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thread_t ;
typedef int thread_continue_t ;
typedef scalar_t__ kern_return_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ,int *) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(thread_continue_t VAR_2)
{
 thread_t VAR_3;
 kern_return_t VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_2, &VAR_3);
 FUNC_0(VAR_4 == VAR_0);

 FUNC_2(VAR_3);
}
