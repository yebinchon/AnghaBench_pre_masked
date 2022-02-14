
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nouveau_object {struct nouveau_dmaobj* parent; } ;
struct nouveau_gpuobj {int dummy; } ;
struct nouveau_dmaobj {int conf0; int target; int access; int start; int limit; } ;
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
 int FUNC_0 (int ) ;
 int FUNC_1 (struct nouveau_object*,struct nouveau_object*,int,int,int ,struct nouveau_gpuobj**) ;
 int FUNC_2 (struct nouveau_object*,int ) ;
 int FUNC_3 (struct nouveau_dmaobj*) ;
 int FUNC_4 (struct nouveau_gpuobj*,int,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct nouveau_dmaeng *VAR_10,
   struct nouveau_object *VAR_11,
   struct nouveau_dmaobj *VAR_12,
   struct nouveau_gpuobj **VAR_13)
{
 u32 VAR_14 = FUNC_3(VAR_12);
 u32 VAR_15 = 0x00000000;
 int VAR_16;

 if (!FUNC_2(VAR_11, VAR_9)) {
  switch (FUNC_3(VAR_11->parent)) {
  case 138:
  case 136:
  case 137:
   break;
  default:
   return -VAR_0;
  }
 } else
  return 0;

 if (!(VAR_12->conf0 & VAR_1)) {
  if (VAR_12->target == 129) {
   VAR_12->conf0 = VAR_4;
   VAR_12->conf0 |= VAR_7;
  } else {
   VAR_12->conf0 = VAR_3;
   VAR_12->conf0 |= VAR_6;
   VAR_12->conf0 |= 0x00020000;
  }
 }

 VAR_14 |= (VAR_12->conf0 & VAR_5) << 22;
 VAR_14 |= (VAR_12->conf0 & VAR_2);
 VAR_15 |= (VAR_12->conf0 & VAR_8);

 switch (VAR_12->target) {
 case 129:
  VAR_14 |= 0x00000000;
  break;
 case 128:
  VAR_14 |= 0x00010000;
  break;
 case 131:
  VAR_14 |= 0x00020000;
  break;
 case 130:
  VAR_14 |= 0x00030000;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_12->access) {
 case 133:
  break;
 case 135:
  VAR_14 |= 0x00040000;
  break;
 case 132:
 case 134:
  VAR_14 |= 0x00080000;
  break;
 }

 VAR_16 = FUNC_1(VAR_11, VAR_11, 24, 32, 0, VAR_13);
 if (VAR_16 == 0) {
  FUNC_4(*VAR_13, 0x00, VAR_14);
  FUNC_4(*VAR_13, 0x04, FUNC_0(VAR_12->limit));
  FUNC_4(*VAR_13, 0x08, FUNC_0(VAR_12->start));
  FUNC_4(*VAR_13, 0x0c, FUNC_5(VAR_12->limit) << 24 |
     FUNC_5(VAR_12->start));
  FUNC_4(*VAR_13, 0x10, 0x00000000);
  FUNC_4(*VAR_13, 0x14, VAR_15);
 }

 return VAR_16;
}
