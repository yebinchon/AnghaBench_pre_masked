
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct nouveau_object*,struct nouveau_object*,int,int,int ,struct nouveau_gpuobj**) ;
 int FUNC_2 (struct nouveau_object*,int ) ;
 int FUNC_3 (struct nouveau_dmaobj*) ;
 int FUNC_4 (struct nouveau_gpuobj*,int,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct nouveau_dmaeng *VAR_15,
   struct nouveau_object *VAR_16,
   struct nouveau_dmaobj *VAR_17,
   struct nouveau_gpuobj **VAR_18)
{
 u32 VAR_19 = FUNC_3(VAR_17);
 u32 VAR_20 = 0x00000000;
 int VAR_21;

 if (!FUNC_2(VAR_16, VAR_14)) {
  switch (FUNC_3(VAR_16->parent)) {
  case 154:
  case 149:
  case 153:
  case 148:
  case 152:
  case 147:
  case 144:
  case 141:
  case 138:
  case 150:
  case 145:
  case 142:
  case 139:
  case 136:
  case 151:
  case 146:
  case 143:
  case 140:
  case 137:
   break;
  default:
   return -VAR_0;
  }
 }

 if (!(VAR_17->conf0 & VAR_4)) {
  if (VAR_17->target == 129) {
   VAR_17->conf0 = VAR_10;
   VAR_17->conf0 |= VAR_7;
   VAR_17->conf0 |= VAR_3;
   VAR_17->conf0 |= VAR_13;
  } else {
   VAR_17->conf0 = VAR_9;
   VAR_17->conf0 |= VAR_6;
   VAR_17->conf0 |= VAR_2;
   VAR_17->conf0 |= VAR_12;
  }
 }

 VAR_19 |= (VAR_17->conf0 & VAR_1) << 22;
 VAR_19 |= (VAR_17->conf0 & VAR_11) << 22;
 VAR_19 |= (VAR_17->conf0 & VAR_8);
 VAR_20 |= (VAR_17->conf0 & VAR_5);

 switch (VAR_17->target) {
 case 129:
  VAR_19 |= 0x00000000;
  break;
 case 128:
  VAR_19 |= 0x00010000;
  break;
 case 131:
  VAR_19 |= 0x00020000;
  break;
 case 130:
  VAR_19 |= 0x00030000;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_17->access) {
 case 133:
  break;
 case 135:
  VAR_19 |= 0x00040000;
  break;
 case 132:
 case 134:
  VAR_19 |= 0x00080000;
  break;
 }

 VAR_21 = FUNC_1(VAR_16, VAR_16, 24, 32, 0, VAR_18);
 if (VAR_21 == 0) {
  FUNC_4(*VAR_18, 0x00, VAR_19);
  FUNC_4(*VAR_18, 0x04, FUNC_0(VAR_17->limit));
  FUNC_4(*VAR_18, 0x08, FUNC_0(VAR_17->start));
  FUNC_4(*VAR_18, 0x0c, FUNC_5(VAR_17->limit) << 24 |
     FUNC_5(VAR_17->start));
  FUNC_4(*VAR_18, 0x10, 0x00000000);
  FUNC_4(*VAR_18, 0x14, VAR_20);
 }

 return VAR_21;
}
