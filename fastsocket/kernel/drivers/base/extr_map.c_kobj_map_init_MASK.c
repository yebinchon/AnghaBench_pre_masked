
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct probe {int dev; struct mutex* lock; struct probe** probes; int * get; int range; } ;
struct mutex {int dummy; } ;
struct kobj_map {int dev; struct mutex* lock; struct kobj_map** probes; int * get; int range; } ;
typedef int kobj_probe_t ;


 int VAR_0 ;
 int FUNC_0 (struct probe*) ;
 struct probe* FUNC_1 (int,int ) ;
 struct probe* FUNC_2 (int,int ) ;

struct kobj_map *FUNC_3(kobj_probe_t *VAR_1, struct mutex *VAR_2)
{
 struct kobj_map *VAR_3 = FUNC_1(sizeof(struct kobj_map), VAR_0);
 struct probe *VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_0);
 int VAR_5;

 if ((VAR_3 == ((void*)0)) || (VAR_4 == ((void*)0))) {
  FUNC_0(VAR_3);
  FUNC_0(VAR_4);
  return ((void*)0);
 }

 VAR_4->dev = 1;
 VAR_4->range = ~0;
 VAR_4->get = VAR_1;
 for (VAR_5 = 0; VAR_5 < 255; VAR_5++)
  VAR_3->probes[VAR_5] = VAR_4;
 VAR_3->lock = VAR_2;
 return VAR_3;
}
