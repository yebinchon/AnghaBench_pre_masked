
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct nv04_vmmgr_priv {TYPE_2__* vm; } ;
struct nouveau_object {struct nouveau_dmaobj* parent; } ;
struct nouveau_gpuobj {int dummy; } ;
struct nouveau_dmaobj {int start; int limit; int target; int access; } ;
struct nouveau_dmaeng {int dummy; } ;
struct TYPE_6__ {int * oclass; } ;
struct TYPE_5__ {TYPE_1__* pgt; } ;
struct TYPE_4__ {struct nouveau_gpuobj** obj; } ;


 int VAR_0 ;




 int VAR_1 ;





 int VAR_2 ;

 int FUNC_0 (struct nouveau_object*,struct nouveau_gpuobj*,struct nouveau_gpuobj**) ;
 int FUNC_1 (struct nouveau_object*,struct nouveau_object*,int,int,int ,struct nouveau_gpuobj**) ;
 struct nv04_vmmgr_priv* FUNC_2 (struct nouveau_dmaeng*) ;
 int VAR_3 ;
 int FUNC_3 (struct nouveau_object*,int ) ;
 int FUNC_4 (struct nouveau_dmaobj*) ;
 TYPE_3__* FUNC_5 (struct nv04_vmmgr_priv*) ;
 int FUNC_6 (struct nouveau_gpuobj*,int) ;
 int FUNC_7 (struct nouveau_gpuobj*,int,int) ;

__attribute__((used)) static int
FUNC_8(struct nouveau_dmaeng *VAR_4,
   struct nouveau_object *VAR_5,
   struct nouveau_dmaobj *VAR_6,
   struct nouveau_gpuobj **VAR_7)
{
 struct nv04_vmmgr_priv *VAR_8 = FUNC_2(VAR_4);
 struct nouveau_gpuobj *VAR_9;
 u32 VAR_10 = FUNC_4(VAR_6);
 u32 VAR_11 = 0x00000000;
 u64 VAR_12 = VAR_6->start & 0xfffff000;
 u64 VAR_13 = VAR_6->start & 0x00000fff;
 u32 VAR_14 = VAR_6->limit - VAR_6->start;
 int VAR_15;

 if (!FUNC_3(VAR_5, VAR_1)) {
  switch (FUNC_4(VAR_5->parent)) {
  case 137:
  case 136:
  case 135:
  case 134:
   break;
  default:
   return -VAR_0;
  }
 }

 if (VAR_6->target == VAR_2) {
  if (FUNC_5(VAR_8)->oclass == &VAR_3) {
   struct nouveau_gpuobj *VAR_16 = VAR_8->vm->pgt[0].obj[0];
   if (!VAR_6->start)
    return FUNC_0(VAR_5, VAR_16, VAR_7);
   VAR_12 = FUNC_6(VAR_16, 8 + (VAR_12 >> 10));
   VAR_12 &= 0xfffff000;
  }

  VAR_6->target = 130;
  VAR_6->access = 132;
 }

 switch (VAR_6->target) {
 case 128:
  VAR_10 |= 0x00003000;
  break;
 case 130:
  VAR_10 |= 0x00023000;
  break;
 case 129:
  VAR_10 |= 0x00033000;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_6->access) {
 case 133:
  VAR_10 |= 0x00004000;
  break;
 case 131:
  VAR_10 |= 0x00008000;
 case 132:
  VAR_11 |= 0x00000002;
  break;
 default:
  return -VAR_0;
 }

 VAR_15 = FUNC_1(VAR_5, VAR_5, 16, 16, 0, &VAR_9);
 *VAR_7 = VAR_9;
 if (VAR_15 == 0) {
  FUNC_7(*VAR_7, 0x00, VAR_10 | (VAR_13 << 20));
  FUNC_7(*VAR_7, 0x04, VAR_14);
  FUNC_7(*VAR_7, 0x08, VAR_11 | VAR_12);
  FUNC_7(*VAR_7, 0x0c, VAR_11 | VAR_12);
 }

 return VAR_15;
}
