
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nbio_linux_t {int busy; int ctx; } ;
struct io_event {int dummy; } ;


 int FUNC_0 (int ,int ,int,struct io_event*,int *) ;

__attribute__((used)) static bool FUNC_1(void *VAR_0)
{
   struct nbio_linux_t* VAR_1 = (struct nbio_linux_t*)VAR_0;
   if (!VAR_1)
      return 0;
   if (VAR_1->busy)
   {
      struct io_event VAR_2;
      if (FUNC_0(VAR_1->ctx, 0, 1, &VAR_2, ((void*)0)) == 1)
         VAR_1->busy = 0;
   }
   return !VAR_1->busy;
}
