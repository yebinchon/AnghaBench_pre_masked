
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nbio_stdio_t {scalar_t__ op; struct nbio_stdio_t* data; int * f; } ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nbio_stdio_t*) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
   struct nbio_stdio_t *VAR_1 = (struct nbio_stdio_t*)VAR_0;
   if (!VAR_1)
      return;
   if (VAR_1->op >= 0)
      FUNC_0();
   FUNC_1(VAR_1->f);
   FUNC_2(VAR_1->data);

   VAR_1->f = ((void*)0);
   VAR_1->data = ((void*)0);
   FUNC_2(VAR_1);
}
