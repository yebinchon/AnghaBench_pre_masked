
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int vcdLo; int vcdNrms; int vcdHi; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int,int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_2()
{
 u32 VAR_1 = 0;
 u32 VAR_2,VAR_3,VAR_4;

 VAR_4 = 0;
 if(VAR_0->vcdLo&0x6000) VAR_4++;
 if(VAR_0->vcdLo&0x18000) VAR_4++;

 VAR_2 = 0;
 if(VAR_0->vcdNrms==1) VAR_2 = 1;
 else if(VAR_0->vcdNrms==2) VAR_2 = 2;

 VAR_3 = 0;
 if(VAR_0->vcdHi&0x3) VAR_3++;
 if(VAR_0->vcdHi&0xc) VAR_3++;
 if(VAR_0->vcdHi&0x30) VAR_3++;
 if(VAR_0->vcdHi&0xc0) VAR_3++;
 if(VAR_0->vcdHi&0x300) VAR_3++;
 if(VAR_0->vcdHi&0xc00) VAR_3++;
 if(VAR_0->vcdHi&0x3000) VAR_3++;
 if(VAR_0->vcdHi&0xc000) VAR_3++;

 VAR_1 = (FUNC_1(VAR_3,4,4))|(FUNC_1(VAR_2,2,2))|(VAR_4&0x3);
 FUNC_0(0x1008,VAR_1);
}
