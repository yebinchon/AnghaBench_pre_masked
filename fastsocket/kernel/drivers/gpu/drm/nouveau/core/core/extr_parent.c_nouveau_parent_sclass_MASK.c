
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long u64 ;
typedef int u16 ;
struct nouveau_sclass {struct nouveau_sclass* sclass; struct nouveau_oclass* oclass; } ;
struct nouveau_oclass {int handle; scalar_t__ ofuncs; } ;
struct nouveau_object {struct nouveau_object* engine; } ;
struct nouveau_engine {struct nouveau_oclass* sclass; } ;
struct TYPE_2__ {unsigned long long engine; struct nouveau_sclass* sclass; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long long) ;
 struct nouveau_engine* FUNC_1 (struct nouveau_object*,int) ;
 struct nouveau_object* FUNC_2 (struct nouveau_engine*) ;
 TYPE_1__* FUNC_3 (struct nouveau_object*) ;

int
FUNC_4(struct nouveau_object *VAR_1, u16 VAR_2,
        struct nouveau_object **VAR_3,
        struct nouveau_oclass **VAR_4)
{
 struct nouveau_sclass *VAR_5;
 struct nouveau_engine *VAR_6;
 struct nouveau_oclass *VAR_7;
 u64 VAR_8;

 VAR_5 = FUNC_3(VAR_1)->sclass;
 while (VAR_5) {
  if ((VAR_5->oclass->handle & 0xffff) == VAR_2) {
   *VAR_3 = VAR_1->engine;
   *VAR_4 = VAR_5->oclass;
   return 0;
  }

  VAR_5 = VAR_5->sclass;
 }

 VAR_8 = FUNC_3(VAR_1)->engine;
 while (VAR_8) {
  int VAR_9 = FUNC_0(VAR_8) - 1;

  if ((VAR_6 = FUNC_1(VAR_1, VAR_9))) {
   VAR_7 = VAR_6->sclass;
   while (VAR_7->ofuncs) {
    if ((VAR_7->handle & 0xffff) == VAR_2) {
     *VAR_3 = FUNC_2(VAR_6);
     *VAR_4 = VAR_7;
     return 0;
    }
    VAR_7++;
   }
  }

  VAR_8 &= ~(1ULL << VAR_9);
 }

 return -VAR_0;
}
