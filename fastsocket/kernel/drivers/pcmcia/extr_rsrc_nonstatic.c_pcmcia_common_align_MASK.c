
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct pcmcia_align_data {int mask; int offset; } ;
typedef int resource_size_t ;



__attribute__((used)) static void
FUNC_0(void *VAR_0, struct resource *VAR_1,
   resource_size_t VAR_2, resource_size_t VAR_3)
{
 struct pcmcia_align_data *VAR_4 = VAR_0;
 resource_size_t VAR_5;



 VAR_5 = (VAR_1->start & ~VAR_4->mask) + VAR_4->offset;
 if (VAR_5 < VAR_1->start)
  VAR_5 += VAR_4->mask + 1;
 VAR_1->start = VAR_5;
}
