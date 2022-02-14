
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nbio_stdio_t {int op; size_t len; size_t progress; void* data; } ;


 int FUNC_0 () ;
 void* FUNC_1 (void*,size_t) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, size_t VAR_1)
{
   void *VAR_2 = ((void*)0);
   struct nbio_stdio_t *VAR_3 = (struct nbio_stdio_t*)VAR_0;
   if (!VAR_3)
      return;

   if (VAR_3->op >= 0)
      FUNC_0();
   if (VAR_1 < VAR_3->len)
      FUNC_0();

   VAR_3->len = VAR_1;
   VAR_3->progress = VAR_1;
   VAR_3->op = -1;

   VAR_2 = FUNC_1(VAR_3->data, VAR_3->len);

   if (VAR_2)
      VAR_3->data = VAR_2;
}
