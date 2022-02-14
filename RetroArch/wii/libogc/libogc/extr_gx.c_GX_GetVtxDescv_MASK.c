
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_5__ {int vcdLo; int vcdNrms; int vcdHi; } ;
struct TYPE_4__ {int type; int attr; } ;
typedef TYPE_1__ GXVtxDesc ;


 size_t VAR_0 ;
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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 void* FUNC_0 (int,int,int) ;
 TYPE_2__* VAR_24 ;

void FUNC_1(GXVtxDesc *VAR_25)
{
 u32 VAR_26;


 for(VAR_26=0;VAR_26<VAR_0;VAR_26++) {
  VAR_25[VAR_26].attr = VAR_5;
  VAR_25[VAR_26].type = 0;
 }

 VAR_26 = 0;
 if(VAR_24->vcdLo&0x1) {
  VAR_25[VAR_26].attr = VAR_7;
  VAR_25[VAR_26].type = VAR_24->vcdLo&0x1;
  VAR_26++;
 }

 if(VAR_24->vcdLo&0x2) {
  VAR_25[VAR_26].attr = VAR_9;
  VAR_25[VAR_26].type = FUNC_0(VAR_24->vcdLo&0x2,1,1);
  VAR_26++;
 }

 if(VAR_24->vcdLo&0x4) {
  VAR_25[VAR_26].attr = VAR_11;
  VAR_25[VAR_26].type = FUNC_0(VAR_24->vcdLo&0x4,2,1);
  VAR_26++;
 }

 if(VAR_24->vcdLo&0x8) {
  VAR_25[VAR_26].attr = VAR_13;
  VAR_25[VAR_26].type = FUNC_0(VAR_24->vcdLo&0x8,3,1);
  VAR_26++;
 }

 if(VAR_24->vcdLo&0x10) {
  VAR_25[VAR_26].attr = VAR_15;
  VAR_25[VAR_26].type = FUNC_0(VAR_24->vcdLo&0x10,4,1);
  VAR_26++;
 }

 if(VAR_24->vcdLo&0x20) {
  VAR_25[VAR_26].attr = VAR_17;
  VAR_25[VAR_26].type = FUNC_0(VAR_24->vcdLo&0x20,5,1);
  VAR_26++;
 }

 if(VAR_24->vcdLo&0x40) {
  VAR_25[VAR_26].attr = VAR_19;
  VAR_25[VAR_26].type = FUNC_0(VAR_24->vcdLo&0x40,6,1);
  VAR_26++;
 }

 if(VAR_24->vcdLo&0x80) {
  VAR_25[VAR_26].attr = VAR_21;
  VAR_25[VAR_26].type = FUNC_0(VAR_24->vcdLo&0x80,7,1);
  VAR_26++;
 }

 if(VAR_24->vcdLo&0x100) {
  VAR_25[VAR_26].attr = VAR_23;
  VAR_25[VAR_26].type = FUNC_0(VAR_24->vcdLo&0x100,8,1);
  VAR_26++;
 }

 if(VAR_24->vcdLo&0x600) {
  VAR_25[VAR_26].attr = VAR_6;
  VAR_25[VAR_26].type = FUNC_0(VAR_24->vcdLo&0x600,9,2);
  VAR_26++;
 }

 if(VAR_24->vcdLo&0x1800) {
  if(VAR_24->vcdNrms==1) {
   VAR_25[VAR_26].attr = VAR_4;
   VAR_25[VAR_26].type = FUNC_0(VAR_24->vcdLo&0x1800,11,2);
   VAR_26++;
  } else if(VAR_24->vcdNrms==2){
   VAR_25[VAR_26].attr = VAR_3;
   VAR_25[VAR_26].type = FUNC_0(VAR_24->vcdLo&0x1800,11,2);
   VAR_26++;
  }
 }

 if(VAR_24->vcdLo&0x6000) {
  VAR_25[VAR_26].attr = VAR_1;
  VAR_25[VAR_26].type = FUNC_0(VAR_24->vcdLo&0x6000,13,2);
  VAR_26++;
 }

 if(VAR_24->vcdLo&0x18000) {
  VAR_25[VAR_26].attr = VAR_2;
  VAR_25[VAR_26].type = FUNC_0(VAR_24->vcdLo&0x18000,15,2);
  VAR_26++;
 }

 if(VAR_24->vcdHi&0x3) {
  VAR_25[VAR_26].attr = VAR_8;
  VAR_25[VAR_26].type = VAR_24->vcdHi&0x3;
  VAR_26++;
 }

 if(VAR_24->vcdHi&0xc) {
  VAR_25[VAR_26].attr = VAR_10;
  VAR_25[VAR_26].type = FUNC_0(VAR_24->vcdHi&0xc,2,2);
  VAR_26++;
 }

 if(VAR_24->vcdHi&0x30) {
  VAR_25[VAR_26].attr = VAR_12;
  VAR_25[VAR_26].type = FUNC_0(VAR_24->vcdHi&0x30,4,2);
  VAR_26++;
 }

 if(VAR_24->vcdHi&0xc0) {
  VAR_25[VAR_26].attr = VAR_14;
  VAR_25[VAR_26].type = FUNC_0(VAR_24->vcdHi&0xc0,6,2);
  VAR_26++;
 }

 if(VAR_24->vcdHi&0x300) {
  VAR_25[VAR_26].attr = VAR_16;
  VAR_25[VAR_26].type = FUNC_0(VAR_24->vcdHi&0x300,8,2);
  VAR_26++;
 }

 if(VAR_24->vcdHi&0xc00) {
  VAR_25[VAR_26].attr = VAR_18;
  VAR_25[VAR_26].type = FUNC_0(VAR_24->vcdHi&0xc00,10,2);
  VAR_26++;
 }

 if(VAR_24->vcdHi&0x3000) {
  VAR_25[VAR_26].attr = VAR_20;
  VAR_25[VAR_26].type = FUNC_0(VAR_24->vcdHi&0x3000,12,2);
  VAR_26++;
 }

 if(VAR_24->vcdHi&0xc000) {
  VAR_25[VAR_26].attr = VAR_22;
  VAR_25[VAR_26].type = FUNC_0(VAR_24->vcdHi&0xc000,14,2);
  VAR_26++;
 }
}
