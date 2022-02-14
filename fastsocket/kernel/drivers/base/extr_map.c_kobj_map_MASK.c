
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct probe {int (* lock ) (scalar_t__,void*) ;unsigned long range; struct probe* next; void* data; scalar_t__ dev; int * get; struct module* owner; } ;
struct module {int dummy; } ;
struct kobj_map {int lock; struct probe** probes; } ;
typedef int kobj_probe_t ;
typedef scalar_t__ dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 struct probe* FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct kobj_map *VAR_2, dev_t VAR_3, unsigned long VAR_4,
      struct module *VAR_5, kobj_probe_t *VAR_6,
      int (*VAR_7)(dev_t, void *), void *VAR_8)
{
 unsigned VAR_9 = FUNC_0(VAR_3 + VAR_4 - 1) - FUNC_0(VAR_3) + 1;
 unsigned VAR_10 = FUNC_0(VAR_3);
 unsigned VAR_11;
 struct probe *VAR_12;

 if (VAR_9 > 255)
  VAR_9 = 255;

 VAR_12 = FUNC_1(sizeof(struct probe) * VAR_9, VAR_1);

 if (VAR_12 == ((void*)0))
  return -VAR_0;

 for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++, VAR_12++) {
  VAR_12->owner = VAR_5;
  VAR_12->get = VAR_6;
  VAR_12->lock = VAR_7;
  VAR_12->dev = VAR_3;
  VAR_12->range = VAR_4;
  VAR_12->data = VAR_8;
 }
 FUNC_2(VAR_2->lock);
 for (VAR_11 = 0, VAR_12 -= VAR_9; VAR_11 < VAR_9; VAR_11++, VAR_12++, VAR_10++) {
  struct probe **VAR_13 = &VAR_2->probes[VAR_10 % 255];
  while (*VAR_13 && (*VAR_13)->range < VAR_4)
   VAR_13 = &(*VAR_13)->next;
  VAR_12->next = *VAR_13;
  *VAR_13 = VAR_12;
 }
 FUNC_3(VAR_2->lock);
 return 0;
}
