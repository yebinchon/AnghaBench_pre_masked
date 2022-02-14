
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nbio_stdio_t {int op; int len; int progress; } ;



__attribute__((used)) static void FUNC_0(void *VAR_0)
{
   struct nbio_stdio_t *VAR_1 = (struct nbio_stdio_t*)VAR_0;
   if (!VAR_1)
      return;

   VAR_1->op = -1;
   VAR_1->progress = VAR_1->len;
}
