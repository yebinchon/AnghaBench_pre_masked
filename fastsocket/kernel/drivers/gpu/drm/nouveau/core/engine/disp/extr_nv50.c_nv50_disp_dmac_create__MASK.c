
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nv50_disp_dmac {int push; TYPE_1__* pushdma; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct TYPE_2__ {int limit; int start; int target; } ;


 int VAR_0 ;
 int VAR_1 ;


 scalar_t__ FUNC_0 (struct nouveau_object*,int ) ;
 int FUNC_1 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,int,int,void**) ;
 int FUNC_2 (TYPE_1__*) ;

int
FUNC_3(struct nouveau_object *VAR_2,
         struct nouveau_object *VAR_3,
         struct nouveau_oclass *VAR_4, u32 VAR_5, int VAR_6,
         int VAR_7, void **VAR_8)
{
 struct nv50_disp_dmac *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_6,
         VAR_7, VAR_8);
 VAR_9 = *VAR_8;
 if (VAR_10)
  return VAR_10;

 VAR_9->pushdma = (void *)FUNC_0(VAR_2, VAR_5);
 if (!VAR_9->pushdma)
  return -VAR_1;

 switch (FUNC_2(VAR_9->pushdma)) {
 case 0x0002:
 case 0x003d:
  if (VAR_9->pushdma->limit - VAR_9->pushdma->start != 0xfff)
   return -VAR_0;

  switch (VAR_9->pushdma->target) {
  case 128:
   VAR_9->push = 0x00000000 | VAR_9->pushdma->start >> 8;
   break;
  case 129:
   VAR_9->push = 0x00000003 | VAR_9->pushdma->start >> 8;
   break;
  default:
   return -VAR_0;
  }
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
