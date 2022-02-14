
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int s32 ;
typedef enum v4l2_ctrl_type { ____Placeholder_v4l2_ctrl_type } v4l2_ctrl_type ;
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
 char* FUNC_0 (int) ;

void FUNC_1(u32 VAR_10, const char **VAR_11, enum v4l2_ctrl_type *VAR_12,
      s32 *VAR_13, s32 *VAR_14, s32 *VAR_15, s32 *VAR_16, u32 *VAR_17)
{
 *VAR_11 = FUNC_0(VAR_10);
 *VAR_17 = 0;

 switch (VAR_10) {
 case 195:
 case 196:
 case 191:
 case 192:
 case 175:
 case 129:
 case 173:
 case 186:
 case 183:
 case 160:
 case 150:
 case 151:
 case 149:
 case 180:
 case 178:
 case 142:
 case 198:
 case 203:
 case 145:
 case 172:
 case 171:
  *VAR_12 = VAR_4;
  *VAR_13 = 0;
  *VAR_14 = *VAR_15 = 1;
  break;
 case 147:
 case 134:
  *VAR_12 = VAR_5;
  *VAR_17 |= VAR_3;
  *VAR_13 = *VAR_14 = *VAR_15 = *VAR_16 = 0;
  break;
 case 143:
 case 159:
 case 166:
 case 165:
 case 164:
 case 163:
 case 169:
 case 162:
 case 161:
 case 167:
 case 168:
 case 152:
 case 155:
 case 154:
 case 157:
 case 156:
 case 181:
 case 184:
 case 131:
  *VAR_12 = VAR_8;
  break;
 case 140:
 case 139:
  *VAR_12 = VAR_9;
  break;
 case 130:
 case 187:
 case 158:
 case 179:
  *VAR_12 = VAR_6;

  *VAR_17 |= VAR_0 | VAR_3;
  *VAR_13 = *VAR_14 = *VAR_15 = *VAR_16 = 0;
  break;
 case 190:
  *VAR_12 = VAR_7;
  *VAR_15 = 1;
  *VAR_13 = 0;

  *VAR_14 = 0xFFFFFF;
  break;
 default:
  *VAR_12 = VAR_7;
  break;
 }
 switch (VAR_10) {
 case 166:
 case 162:
 case 154:
 case 153:
 case 157:
  *VAR_17 |= VAR_2;
  break;
 case 193:
 case 206:
 case 205:
 case 194:
 case 188:
 case 182:
 case 137:
 case 174:
 case 138:
 case 189:
 case 176:
 case 136:
 case 185:
 case 141:
 case 197:
 case 199:
 case 202:
 case 200:
 case 204:
 case 201:
 case 146:
 case 144:
 case 132:
 case 133:
  *VAR_17 |= VAR_1;
  break;
 case 148:
 case 135:
 case 177:
 case 170:
 case 128:
  *VAR_17 |= VAR_3;
  break;
 }
}
