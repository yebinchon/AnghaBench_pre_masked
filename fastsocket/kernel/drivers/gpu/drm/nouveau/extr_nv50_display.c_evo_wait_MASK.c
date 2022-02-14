
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int user; } ;
struct nv50_dmac {int* ptr; TYPE_1__ base; int lock; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int,int ,int) ;
 int FUNC_5 (int ,int,int) ;

__attribute__((used)) static u32 *
FUNC_6(void *VAR_1, int VAR_2)
{
 struct nv50_dmac *VAR_3 = VAR_1;
 u32 VAR_4 = FUNC_3(VAR_3->base.user, 0x0000) / 4;

 FUNC_1(&VAR_3->lock);
 if (VAR_4 + VAR_2 >= (VAR_0 / 4) - 8) {
  VAR_3->ptr[VAR_4] = 0x20000000;

  FUNC_5(VAR_3->base.user, 0x0000, 0x00000000);
  if (!FUNC_4(VAR_3->base.user, 0x0004, ~0, 0x00000000)) {
   FUNC_2(&VAR_3->lock);
   FUNC_0(VAR_3->base.user, "channel stalled\n");
   return ((void*)0);
  }

  VAR_4 = 0;
 }

 return VAR_3->ptr + VAR_4;
}
