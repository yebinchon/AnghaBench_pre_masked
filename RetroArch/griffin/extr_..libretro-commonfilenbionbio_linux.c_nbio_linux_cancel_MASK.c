
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nbio_linux_t {int busy; int cb; int ctx; } ;
struct io_event {int dummy; } ;


 int FUNC_0 (int ,int *,struct io_event*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
   struct nbio_linux_t* VAR_1 = (struct nbio_linux_t*)VAR_0;
   if (!VAR_1)
      return;

   if (VAR_1->busy)
   {
      struct io_event VAR_2;
      FUNC_0(VAR_1->ctx, &VAR_1->cb, &VAR_2);
      VAR_1->busy = 0;
   }
}
