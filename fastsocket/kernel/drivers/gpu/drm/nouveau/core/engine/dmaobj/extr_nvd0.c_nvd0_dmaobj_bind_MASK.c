
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nouveau_object {int parent; } ;
struct nouveau_gpuobj {int dummy; } ;
struct nouveau_dmaobj {int conf0; int target; int start; int limit; } ;
struct nouveau_dmaeng {int dummy; } ;


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

 int FUNC_0 (struct nouveau_object*,struct nouveau_object*,int,int,int ,struct nouveau_gpuobj**) ;
 int FUNC_1 (struct nouveau_object*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct nouveau_gpuobj*,int,int) ;

__attribute__((used)) static int
FUNC_4(struct nouveau_dmaeng *VAR_10,
   struct nouveau_object *VAR_11,
   struct nouveau_dmaobj *VAR_12,
   struct nouveau_gpuobj **VAR_13)
{
 u32 VAR_14 = 0x00000000;
 int VAR_15;

 if (!FUNC_1(VAR_11, VAR_8)) {
  switch (FUNC_2(VAR_11->parent)) {
  case 134:
  case 132:
  case 133:
  case 131:
  case 129:
  case 130:
   break;
  default:
   return -VAR_0;
  }
 } else
  return 0;

 if (!(VAR_12->conf0 & VAR_1)) {
  if (VAR_12->target == VAR_9) {
   VAR_12->conf0 |= VAR_7;
   VAR_12->conf0 |= VAR_3;
  } else {
   VAR_12->conf0 |= VAR_6;
   VAR_12->conf0 |= VAR_4;
  }
 }

 VAR_14 |= (VAR_12->conf0 & VAR_5) << 20;
 VAR_14 |= (VAR_12->conf0 & VAR_2) >> 4;

 switch (VAR_12->target) {
 case 128:
  VAR_14 |= 0x00000009;
  break;
 default:
  return -VAR_0;
  break;
 }

 VAR_15 = FUNC_0(VAR_11, VAR_11, 24, 32, 0, VAR_13);
 if (VAR_15 == 0) {
  FUNC_3(*VAR_13, 0x00, VAR_14);
  FUNC_3(*VAR_13, 0x04, VAR_12->start >> 8);
  FUNC_3(*VAR_13, 0x08, VAR_12->limit >> 8);
  FUNC_3(*VAR_13, 0x0c, 0x00000000);
  FUNC_3(*VAR_13, 0x10, 0x00000000);
  FUNC_3(*VAR_13, 0x14, 0x00000000);
 }

 return VAR_15;
}
