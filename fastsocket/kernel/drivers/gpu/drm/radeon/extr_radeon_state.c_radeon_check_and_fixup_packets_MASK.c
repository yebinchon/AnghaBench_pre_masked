
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct drm_file {int dummy; } ;
struct drm_buffer {int dummy; } ;
struct TYPE_4__ {int have_z_offset; } ;
typedef TYPE_1__ drm_radeon_private_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,...) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * FUNC_4 (struct drm_buffer*,int) ;
 int FUNC_5 (TYPE_1__*,struct drm_file*,int *) ;

__attribute__((used)) static __inline__ int FUNC_6(drm_radeon_private_t *
           VAR_9,
           struct drm_file *VAR_10,
           int VAR_11, struct drm_buffer *VAR_12)
{
 u32 *VAR_13;
 switch (VAR_11) {

 case 146:
  VAR_13 = FUNC_4(VAR_12,
   (VAR_6 - VAR_2) / 4);

  if (FUNC_5(VAR_9, VAR_10, VAR_13)) {
   FUNC_2("Invalid depth buffer offset\n");
   return -VAR_0;
  }
  VAR_9->have_z_offset = 1;
  break;

 case 154:
  VAR_13 = FUNC_4(VAR_12,
   (VAR_5 - VAR_1) / 4);

  if (FUNC_5(VAR_9, VAR_10, VAR_13)) {
   FUNC_2("Invalid colour buffer offset\n");
   return -VAR_0;
  }
  break;

 case 182:
 case 181:
 case 180:
 case 179:
 case 178:
 case 177:
  VAR_13 = FUNC_4(VAR_12, 0);
  if (FUNC_5(VAR_9, VAR_10, VAR_13)) {
   FUNC_2("Invalid R200 texture offset\n");
   return -VAR_0;
  }
  break;

 case 141:
 case 140:
 case 139:
  VAR_13 = FUNC_4(VAR_12,
   (VAR_4 - VAR_3) / 4);
  if (FUNC_5(VAR_9, VAR_10, VAR_13)) {
   FUNC_2("Invalid R100 texture offset\n");
   return -VAR_0;
  }
  break;

 case 210:
 case 209:
 case 208:
 case 207:
 case 206:
 case 205:{
   int VAR_14;
   for (VAR_14 = 0; VAR_14 < 5; VAR_14++) {
    VAR_13 = FUNC_4(VAR_12, VAR_14);
    if (FUNC_5(VAR_9,
          VAR_10,
          VAR_13)) {
     FUNC_2
         ("Invalid R200 cubic texture offset\n");
     return -VAR_0;
    }
   }
   break;
  }

 case 150:
 case 149:
 case 148:{
   int VAR_15;
   for (VAR_15 = 0; VAR_15 < 5; VAR_15++) {
    VAR_13 = FUNC_4(VAR_12, VAR_15);
    if (FUNC_5(VAR_9,
          VAR_10,
          VAR_13)) {
     FUNC_2
         ("Invalid R100 cubic texture offset\n");
     return -VAR_0;
    }
   }
  }
  break;

 case 161:{
   VAR_8;
   FUNC_1(2);
   FUNC_3(VAR_7, 0);
   FUNC_0();
  }
  break;

 case 138:
 case 136:
 case 132:
 case 147:
 case 145:
 case 137:
 case 129:
 case 134:
 case 133:
 case 135:
 case 157:
 case 156:
 case 155:
 case 128:
 case 130:
 case 131:
 case 202:
 case 201:
 case 200:
 case 199:
 case 198:
 case 197:
 case 196:
 case 195:
 case 166:
 case 162:
 case 158:
 case 221:
 case 163:
 case 164:
 case 188:
 case 187:
 case 186:
 case 185:
 case 184:
 case 183:
 case 159:
 case 220:
 case 204:
 case 217:
 case 175:
 case 174:
 case 172:
 case 171:
 case 170:
 case 169:
 case 168:
 case 173:
 case 167:
 case 216:
 case 215:
 case 214:
 case 213:
 case 212:
 case 211:
 case 144:
 case 143:
 case 142:
 case 176:
 case 165:
 case 153:
 case 152:
 case 151:
 case 203:
 case 219:
 case 218:
 case 222:
 case 194:
 case 193:
 case 192:
 case 191:
 case 190:
 case 189:
 case 160:

  break;

 default:
  FUNC_2("Unknown state packet ID %d\n", VAR_11);
  return -VAR_0;
 }

 return 0;
}
