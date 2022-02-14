
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nbio_linux_t {size_t len; void* ptr; int busy; } ;



__attribute__((used)) static void *FUNC_0(void *VAR_0, size_t* VAR_1)
{
   struct nbio_linux_t* VAR_2 = (struct nbio_linux_t*)VAR_0;
   if (!VAR_2)
      return ((void*)0);
   if (VAR_1)
      *VAR_1 = VAR_2->len;
   if (!VAR_2->busy)
      return VAR_2->ptr;
   return ((void*)0);
}
