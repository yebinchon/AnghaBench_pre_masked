
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_vm {scalar_t__ refcount; } ;
struct nouveau_gpuobj {int dummy; } ;


 int FUNC_0 (struct nouveau_vm*) ;
 int FUNC_1 (struct nouveau_vm*,struct nouveau_gpuobj*) ;
 int FUNC_2 (struct nouveau_vm*,struct nouveau_gpuobj*) ;

int
FUNC_3(struct nouveau_vm *VAR_0, struct nouveau_vm **VAR_1,
        struct nouveau_gpuobj *VAR_2)
{
 struct nouveau_vm *VAR_3;
 int VAR_4;

 VAR_3 = VAR_0;
 if (VAR_3) {
  VAR_4 = FUNC_1(VAR_3, VAR_2);
  if (VAR_4)
   return VAR_4;

  VAR_3->refcount++;
 }

 VAR_3 = *VAR_1;
 *VAR_1 = VAR_0;

 if (VAR_3) {
  FUNC_2(VAR_3, VAR_2);

  if (--VAR_3->refcount == 0)
   FUNC_0(VAR_3);
 }

 return 0;
}
