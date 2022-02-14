
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_pool_worker {int schedule_data; int private; int (* action ) (int ,int ) ;scalar_t__ has_data; int wait; } ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct thread_pool_worker*) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(void *VAR_0)
{
 struct thread_pool_worker *VAR_1 = VAR_0;

 while (!FUNC_0()) {
  FUNC_3(VAR_1->wait,
   FUNC_0() || VAR_1->has_data);

  if (FUNC_0())
   break;

  if (!VAR_1->has_data)
   continue;

  VAR_1->action(VAR_1->private, VAR_1->schedule_data);
  FUNC_2(VAR_1);
 }

 return 0;
}
