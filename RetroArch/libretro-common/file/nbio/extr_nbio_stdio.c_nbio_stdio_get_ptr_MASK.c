
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nbio_stdio_t {size_t len; int op; void* data; } ;



__attribute__((used)) static void *FUNC_0(void *VAR_0, size_t* VAR_1)
{
   struct nbio_stdio_t *VAR_2 = (struct nbio_stdio_t*)VAR_0;
   if (!VAR_2)
      return ((void*)0);
   if (VAR_1)
      *VAR_1 = VAR_2->len;
   if (VAR_2->op == -1)
      return VAR_2->data;
   return ((void*)0);
}
