
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct probe {scalar_t__ dev; unsigned long range; struct probe* next; } ;
struct kobj_map {int lock; struct probe** probes; } ;
typedef scalar_t__ dev_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct probe*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct kobj_map *VAR_0, dev_t VAR_1, unsigned long VAR_2)
{
 unsigned VAR_3 = FUNC_0(VAR_1 + VAR_2 - 1) - FUNC_0(VAR_1) + 1;
 unsigned VAR_4 = FUNC_0(VAR_1);
 unsigned VAR_5;
 struct probe *VAR_6 = ((void*)0);

 if (VAR_3 > 255)
  VAR_3 = 255;

 FUNC_2(VAR_0->lock);
 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++, VAR_4++) {
  struct probe **VAR_7;
  for (VAR_7 = &VAR_0->probes[VAR_4 % 255]; *VAR_7; VAR_7 = &(*VAR_7)->next) {
   struct probe *VAR_8 = *VAR_7;
   if (VAR_8->dev == VAR_1 && VAR_8->range == VAR_2) {
    *VAR_7 = VAR_8->next;
    if (!VAR_6)
     VAR_6 = VAR_8;
    break;
   }
  }
 }
 FUNC_3(VAR_0->lock);
 FUNC_1(VAR_6);
}
