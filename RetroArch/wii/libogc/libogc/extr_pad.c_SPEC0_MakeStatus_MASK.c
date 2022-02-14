
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
typedef int u32 ;
typedef void* s8 ;
struct TYPE_3__ {int button; int triggerL; int triggerR; void* substickY; void* substickX; void* stickY; void* stickX; scalar_t__ analogB; scalar_t__ analogA; } ;
typedef TYPE_1__ PADStatus ;


 scalar_t__ FUNC_0 (int,int,int) ;

__attribute__((used)) static void FUNC_1(u32 VAR_0,u32 *VAR_1,PADStatus *VAR_2)
{
 VAR_2->button = 0;

 if(VAR_1[0]&0x00080000) VAR_2->button |= 0x0100;
 if(VAR_1[0]&0x00200000) VAR_2->button |= 0x0200;
 if(VAR_1[0]&0x01000000) VAR_2->button |= 0x0400;
 if(VAR_1[0]&0x00010000) VAR_2->button |= 0x0800;
 if(VAR_1[0]&0x00100000) VAR_2->button |= 0x1000;

 VAR_2->stickX = (s8)(VAR_1[1]>>16);
 VAR_2->stickY = (s8)(VAR_1[1]>>24);
 VAR_2->substickX = (s8)VAR_1[1];
 VAR_2->substickY = (s8)(VAR_1[1]>>8);
 VAR_2->triggerL = (u8)FUNC_0(VAR_1[0],8,8);
 VAR_2->triggerR = (u8)(VAR_1[0]&0xff);
 VAR_2->analogA = 0;
 VAR_2->analogB = 0;

 if(VAR_2->triggerL>=0xaa) VAR_2->button |= 0x40;
 if(VAR_2->triggerR>=0xaa) VAR_2->button |= 0x20;

 VAR_2->stickX -= 128;
 VAR_2->stickY -= 128;
 VAR_2->substickX -= 128;
 VAR_2->substickY -= 128;
}
