
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nouveau_object {int dummy; } ;
struct TYPE_4__ {int * data; } ;
struct TYPE_3__ {int * data; } ;
struct nouveau_falcon {int base; TYPE_2__ code; TYPE_1__ data; scalar_t__ external; int core; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct nouveau_falcon*,int,int,int) ;
 int FUNC_4 (struct nouveau_falcon*,int,int) ;

int
FUNC_5(struct nouveau_object *VAR_0, bool VAR_1)
{
 struct nouveau_falcon *VAR_2 = (void *)VAR_0;

 if (!VAR_1) {
  FUNC_2(((void*)0), &VAR_2->core);
  if (VAR_2->external) {
   FUNC_0(VAR_2->data.data);
   FUNC_0(VAR_2->code.data);
   VAR_2->code.data = ((void*)0);
  }
 }

 FUNC_3(VAR_2, 0x048, 0x00000003, 0x00000000);
 FUNC_4(VAR_2, 0x014, 0xffffffff);

 return FUNC_1(&VAR_2->base, VAR_1);
}
