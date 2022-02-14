
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {unsigned long start; unsigned long end; struct resource* sibling; struct resource* child; } ;



__attribute__((used)) static struct resource *FUNC_0(struct resource *VAR_0,
          unsigned long VAR_1)
{
        struct resource *VAR_2;

 for (VAR_2 = VAR_0->child; VAR_2 != 0; VAR_2 = VAR_2->sibling) {
  if (VAR_2->start <= VAR_1 && VAR_2->end >= VAR_1)
   return VAR_2;
 }
 return ((void*)0);
}
