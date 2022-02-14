
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nbio_linux_t {struct nbio_linux_t* ptr; int fd; int ctx; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct nbio_linux_t*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
   struct nbio_linux_t* VAR_1 = (struct nbio_linux_t*)VAR_0;
   if (!VAR_1)
      return;

   FUNC_2(VAR_1->ctx);
   FUNC_0(VAR_1->fd);
   FUNC_1(VAR_1->ptr);
   FUNC_1(VAR_1);
}
