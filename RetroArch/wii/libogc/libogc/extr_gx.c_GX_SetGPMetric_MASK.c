
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_2__ {int perf0Mode; int perf1Mode; int cpPerfMode; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 TYPE_1__* VAR_0 ;
 int* VAR_1 ;

void FUNC_3(u32 VAR_2,u32 VAR_3)
{

 if(VAR_0->perf0Mode>=174 && VAR_0->perf0Mode<180)
  FUNC_0(0x23000000);
 else if(VAR_0->perf0Mode>=180 && VAR_0->perf0Mode<182)
  FUNC_0(0x24000000);
 else if(VAR_0->perf0Mode>=158 && VAR_0->perf0Mode<=182)
  FUNC_2(0x1006,0);


 if(VAR_0->perf1Mode>=135 && VAR_0->perf1Mode<147) {
  VAR_0->cpPerfMode = (VAR_0->cpPerfMode&~0xf0);
  FUNC_1(0x20,VAR_0->cpPerfMode);
 } else if(VAR_0->perf1Mode>=147 && VAR_0->perf1Mode<149) {
  VAR_1[3] = 0;
 } else if(VAR_0->perf1Mode>=140 && VAR_0->perf1Mode<=149) {
  FUNC_0(0x67000000);
 }

 VAR_0->perf0Mode = VAR_2;
 switch(VAR_0->perf0Mode) {
  case 182:
   FUNC_2(0x1006,0x00000273);
   break;
  case 158:
   FUNC_2(0x1006,0x0000014a);
   break;
  case 183:
   FUNC_2(0x1006,0x0000016b);
   break;
  case 185:
   FUNC_2(0x1006,0x00000084);
   break;
  case 153:
   FUNC_2(0x1006,0x000000c6);
   break;
  case 152:
   FUNC_2(0x1006,0x00000210);
   break;
  case 151:
   FUNC_2(0x1006,0x00000252);
   break;
  case 156:
   FUNC_2(0x1006,0x00000231);
   break;
  case 157:
   FUNC_2(0x1006,0x000001ad);
   break;
  case 155:
   FUNC_2(0x1006,0x000001ce);
   break;
  case 154:
   FUNC_2(0x1006,0x00000021);
   break;
  case 184:
   FUNC_2(0x1006,0x00000153);
   break;
  case 174:
   FUNC_0(0x2300AE7F);
   break;
  case 161:
   FUNC_0(0x23008E7F);
   break;
  case 160:
   FUNC_0(0x23009E7F);
   break;
  case 159:
   FUNC_0(0x23001E7F);
   break;
  case 172:
   FUNC_0(0x2300AC3F);
   break;
  case 170:
   FUNC_0(0x2300AC7F);
   break;
  case 168:
   FUNC_0(0x2300ACBF);
   break;
  case 167:
   FUNC_0(0x2300ACFF);
   break;
  case 166:
   FUNC_0(0x2300AD3F);
   break;
  case 165:
   FUNC_0(0x2300AD7F);
   break;
  case 164:
   FUNC_0(0x2300ADBF);
   break;
  case 163:
   FUNC_0(0x2300ADFF);
   break;
  case 162:
   FUNC_0(0x2300AE3F);
   break;
  case 173:
   FUNC_0(0x2300A27F);
   break;
  case 171:
   FUNC_0(0x2300A67F);
   break;
  case 169:
   FUNC_0(0x2300AA7F);
   break;
  case 180:
   FUNC_0(0x2402C0C6);
   break;
  case 175:
   FUNC_0(0x2402C16B);
   break;
  case 179:
   FUNC_0(0x2402C0E7);
   break;
  case 178:
   FUNC_0(0x2402C108);
   break;
  case 177:
   FUNC_0(0x2402C129);
   break;
  case 176:
   FUNC_0(0x2402C14A);
   break;
  case 186:
   FUNC_0(0x2402C1AD);
   break;
  case 181:
   break;
 }

 VAR_0->perf1Mode = VAR_3;
 switch(VAR_0->perf1Mode) {
  case 149:
   FUNC_0(0x67000042);
   break;
  case 140:
   FUNC_0(0x67000084);
   break;
  case 139:
   FUNC_0(0x67000063);
   break;
  case 137:
   FUNC_0(0x67000129);
   break;
  case 138:
   FUNC_0(0x67000252);
   break;
  case 145:
   FUNC_0(0x67000021);
   break;
  case 144:
   FUNC_0(0x6700014b);
   break;
  case 143:
   FUNC_0(0x6700018d);
   break;
  case 142:
   FUNC_0(0x670001cf);
   break;
  case 141:
   FUNC_0(0x67000211);
   break;
  case 135:
   VAR_0->cpPerfMode = (VAR_0->cpPerfMode&~0xf0)|0x20;
   FUNC_1(0x20,VAR_0->cpPerfMode);
   break;
  case 133:
   VAR_0->cpPerfMode = (VAR_0->cpPerfMode&~0xf0)|0x30;
   FUNC_1(0x20,VAR_0->cpPerfMode);
   break;
  case 134:
   VAR_0->cpPerfMode = (VAR_0->cpPerfMode&~0xf0)|0x40;
   FUNC_1(0x20,VAR_0->cpPerfMode);
   break;
  case 130:
   VAR_0->cpPerfMode = (VAR_0->cpPerfMode&~0xf0)|0x50;
   FUNC_1(0x20,VAR_0->cpPerfMode);
   break;
  case 132:
   VAR_0->cpPerfMode = (VAR_0->cpPerfMode&~0xf0)|0x60;
   FUNC_1(0x20,VAR_0->cpPerfMode);
   break;
  case 129:
   VAR_0->cpPerfMode = (VAR_0->cpPerfMode&~0xf0)|0x70;
   FUNC_1(0x20,VAR_0->cpPerfMode);
   break;
  case 136:
   VAR_0->cpPerfMode = (VAR_0->cpPerfMode&~0xf0)|0x90;
   FUNC_1(0x20,VAR_0->cpPerfMode);
   break;
  case 128:
   VAR_0->cpPerfMode = (VAR_0->cpPerfMode&~0xf0)|0x80;
   FUNC_1(0x20,VAR_0->cpPerfMode);
   break;
  case 147:
   VAR_1[3] = 2;
   break;
  case 150:
   VAR_1[3] = 3;
   break;
  case 131:
   VAR_1[3] = 4;
   break;
  case 148:
   VAR_1[3] = 5;
   break;
  case 146:
   break;
 }

}
