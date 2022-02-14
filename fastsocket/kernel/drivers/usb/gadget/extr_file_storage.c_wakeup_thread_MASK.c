
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsg_dev {int thread_wakeup_needed; scalar_t__ thread_task; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct fsg_dev *VAR_0)
{

 VAR_0->thread_wakeup_needed = 1;
 if (VAR_0->thread_task)
  FUNC_0(VAR_0->thread_task);
}
