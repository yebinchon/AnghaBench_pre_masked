
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_map {unsigned long base; int num; struct resource_map* next; } ;
struct resource {unsigned long start; unsigned long end; } ;
struct pcmcia_align_data {struct resource_map* map; } ;
typedef int resource_size_t ;


 int FUNC_0 (struct pcmcia_align_data*,struct resource*,int,int) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0, struct resource *VAR_1, resource_size_t VAR_2,
  resource_size_t VAR_3)
{
 struct pcmcia_align_data *VAR_4 = VAR_0;
 struct resource_map *VAR_5;

 FUNC_0(VAR_4, VAR_1, VAR_2, VAR_3);

 for (VAR_5 = VAR_4->map->next; VAR_5 != VAR_4->map; VAR_5 = VAR_5->next) {
  unsigned long VAR_6 = VAR_5->base;
  unsigned long VAR_7 = VAR_5->base + VAR_5->num - 1;






  if (VAR_1->start < VAR_6) {
   VAR_1->start = VAR_6;
   FUNC_0(VAR_4, VAR_1, VAR_2, VAR_3);
  }





  if (VAR_1->start >= VAR_1->end)
   break;

  if ((VAR_1->start + VAR_2 - 1) <= VAR_7)
   break;
 }




 if (VAR_5 == VAR_4->map)
  VAR_1->start = VAR_1->end;
}
