
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int s8 ;
struct TYPE_3__ {int stickX; int stickY; int substickX; int substickY; int triggerL; int triggerR; int analogA; int analogB; int button; } ;
typedef TYPE_1__ PADStatus ;


 int FUNC_0 (int,int,int) ;
 int VAR_0 ;
 void* FUNC_1 (int,int ) ;
 void* FUNC_2 (int,int ) ;
 int ** VAR_1 ;

__attribute__((used)) static void FUNC_3(u32 VAR_2,u32 *VAR_3,PADStatus *VAR_4)
{
 u32 VAR_5;

 VAR_4->button = FUNC_0(VAR_3[0],16,14);

 VAR_4->stickX = (s8)(VAR_3[0]>>8);
 VAR_4->stickY = (s8)VAR_3[0];
 VAR_5 = VAR_0&0x0700;
 if(VAR_5==0x100) {
  VAR_4->substickX = (s8)((VAR_3[1]>>24)&0xf0);
  VAR_4->substickY = (s8)((VAR_3[1]>>8)&0xff);
  VAR_4->triggerL = (u8)((VAR_3[1]>>16)&0xff);
  VAR_4->triggerR = (u8)((VAR_3[1]>>8)&0xff);
  VAR_4->analogA = (u8)(VAR_3[1]&0xf0);
  VAR_4->analogB = (u8)((VAR_3[1]<<4)&0xf0);
 } else if(VAR_5==0x200) {
  VAR_4->substickX = (s8)((VAR_3[1]>>24)&0xf0);
  VAR_4->substickY = (s8)((VAR_3[1]>>20)&0xf0);
  VAR_4->triggerL = (u8)((VAR_3[1]>>16)&0xf0);
  VAR_4->triggerR = (u8)((VAR_3[1]>>12)&0xf0);
  VAR_4->analogA = (u8)((VAR_3[1]>>8)&0xff);
  VAR_4->analogB = (s8)VAR_3[1]&0xff;
 } else if(VAR_5==0x300) {
  VAR_4->substickX = (s8)((VAR_3[1]>>24)&0xff);
  VAR_4->substickY = (s8)((VAR_3[1]>>16)&0xff);
  VAR_4->triggerL = (u8)((VAR_3[1]>>8)&0xff);
  VAR_4->triggerR = (u8)VAR_3[1]&0xff;
  VAR_4->analogA = 0;
  VAR_4->analogB = 0;
 } else if(VAR_5==0x400) {
  VAR_4->substickX = (s8)((VAR_3[1]>>24)&0xff);
  VAR_4->substickY = (s8)((VAR_3[1]>>16)&0xff);
  VAR_4->triggerL = 0;
  VAR_4->triggerR = 0;
  VAR_4->analogA = (u8)((VAR_3[1]>>8)&0xff);
  VAR_4->analogB = (u8)VAR_3[1]&0xff ;
 } else if(!VAR_5 || VAR_5==0x500 || VAR_5==0x600 || VAR_5==0x700) {
  VAR_4->substickX = (s8)((VAR_3[1]>>24)&0xff);
  VAR_4->substickY = (s8)((VAR_3[1]>>16)&0xff);
  VAR_4->triggerL = (u8)((VAR_3[1]>>8)&0xf0);
  VAR_4->triggerR = (u8)((VAR_3[1]>>4)&0xf0);
  VAR_4->analogA = (u8)(VAR_3[1]&0xf0);
  VAR_4->analogB = (u8)((VAR_3[1]<<4)&0xf0);
 }

 VAR_4->stickX -= 128;
 VAR_4->stickY -= 128;
 VAR_4->substickX -= 128;
 VAR_4->substickY -= 128;
 VAR_4->stickX = FUNC_1(VAR_4->stickX,VAR_1[VAR_2][2]);
 VAR_4->stickY = FUNC_1(VAR_4->stickY,VAR_1[VAR_2][3]);
 VAR_4->substickX = FUNC_1(VAR_4->substickX,VAR_1[VAR_2][4]);
 VAR_4->substickY = FUNC_1(VAR_4->substickY,VAR_1[VAR_2][5]);
 VAR_4->triggerL = FUNC_2(VAR_4->triggerL,VAR_1[VAR_2][6]);
 VAR_4->triggerR = FUNC_2(VAR_4->triggerR,VAR_1[VAR_2][7]);
}
