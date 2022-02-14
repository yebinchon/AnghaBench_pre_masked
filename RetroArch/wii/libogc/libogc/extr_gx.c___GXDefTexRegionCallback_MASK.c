
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int * texRegion; } ;
typedef int GXTexRegion ;
typedef int GXTexObj ;


 int FUNC_0 (int *) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static GXTexRegion* FUNC_1(GXTexObj *VAR_1,u8 VAR_2)
{
 u32 VAR_3;
 u32 VAR_4;
 static u32 VAR_5 = 0;
 static u32 VAR_6 = 0;
 GXTexRegion *VAR_7 = ((void*)0);

 VAR_3 = FUNC_0(VAR_1);
 if(VAR_3==0x0008 || VAR_3==0x0009 || VAR_3==0x000a) {
  VAR_4 = VAR_6++;
  VAR_7 = &VAR_0->texRegion[(VAR_4&3)+8];
 } else {
  VAR_4 = VAR_5++;
  VAR_7 = &VAR_0->texRegion[(VAR_4&7)];
 }
 return VAR_7;
}
