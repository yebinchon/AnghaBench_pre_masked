
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r592_device {int io_thread_lock; int io_thread; scalar_t__ req; } ;
struct memstick_host {int dummy; } ;


 int FUNC_0 (char*) ;
 struct r592_device* FUNC_1 (struct memstick_host*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct memstick_host *VAR_0)
{
 struct r592_device *VAR_1 = FUNC_1(VAR_0);
 unsigned long VAR_2;

 if (VAR_1->req)
  return;

 FUNC_2(&VAR_1->io_thread_lock, VAR_2);
 if (FUNC_4(VAR_1->io_thread))
  FUNC_0("IO thread woken to process requests");
 FUNC_3(&VAR_1->io_thread_lock, VAR_2);
}
