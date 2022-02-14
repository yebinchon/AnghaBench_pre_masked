
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nv_dma_class {int flags; int conf0; int limit; int start; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct nouveau_gpuobj {int conf0; int limit; int start; int access; int target; } ;
struct nouveau_dmaobj {int conf0; int limit; int start; int access; int target; } ;
struct nouveau_dmaeng {int (* bind ) (struct nouveau_dmaeng*,struct nouveau_object*,struct nouveau_gpuobj*,struct nouveau_gpuobj**) ;} ;


 int VAR_0 ;

 int VAR_1 ;





 int VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,int ,struct nouveau_gpuobj**) ;
 int FUNC_1 (int *,struct nouveau_object**) ;
 int FUNC_2 (struct nouveau_object*) ;
 struct nouveau_object* FUNC_3 (struct nouveau_gpuobj*) ;
 int FUNC_4 (struct nouveau_dmaeng*,struct nouveau_object*,struct nouveau_gpuobj*,struct nouveau_gpuobj**) ;

__attribute__((used)) static int
FUNC_5(struct nouveau_object *VAR_11,
      struct nouveau_object *VAR_12,
      struct nouveau_oclass *VAR_13, void *VAR_14, u32 VAR_15,
      struct nouveau_object **VAR_16)
{
 struct nouveau_dmaeng *VAR_17 = (void *)VAR_12;
 struct nouveau_dmaobj *VAR_18;
 struct nouveau_gpuobj *VAR_19;
 struct nv_dma_class *VAR_20 = VAR_14;
 int VAR_21;

 if (VAR_15 < sizeof(*VAR_20))
  return -VAR_0;

 VAR_21 = FUNC_0(VAR_11, VAR_12, VAR_13, 0, &VAR_18);
 *VAR_16 = FUNC_3(VAR_18);
 if (VAR_21)
  return VAR_21;

 switch (VAR_20->flags & VAR_2) {
 case 129:
  VAR_18->target = VAR_9;
  break;
 case 128:
  VAR_18->target = VAR_10;
  break;
 case 131:
  VAR_18->target = VAR_7;
  break;
 case 130:
 case 132:
  VAR_18->target = VAR_8;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_20->flags & VAR_1) {
 case 134:
  VAR_18->access = VAR_5;
  break;
 case 136:
  VAR_18->access = VAR_3;
  break;
 case 133:
  VAR_18->access = VAR_6;
  break;
 case 135:
  VAR_18->access = VAR_4;
  break;
 default:
  return -VAR_0;
 }

 VAR_18->start = VAR_20->start;
 VAR_18->limit = VAR_20->limit;
 VAR_18->conf0 = VAR_20->conf0;

 switch (FUNC_2(VAR_11)) {
 case 137:

  break;
 default:
  VAR_21 = VAR_17->bind(VAR_17, *VAR_16, VAR_18, &VAR_19);
  if (VAR_21 == 0) {
   FUNC_1(((void*)0), VAR_16);
   *VAR_16 = FUNC_3(VAR_19);
  }
  break;
 }

 return VAR_21;
}
