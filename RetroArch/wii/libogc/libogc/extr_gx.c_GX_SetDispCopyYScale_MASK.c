
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef float f32 ;
struct TYPE_2__ {int dispCopyCntrl; int dispCopyWH; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int,int) ;
 TYPE_1__* VAR_0 ;

u32 FUNC_4(f32 VAR_1)
{
 u32 VAR_2,VAR_3 = 0;

 VAR_3 = ((u32)(256.0f/VAR_1))&0x1ff;
 FUNC_0(0x4e000000|VAR_3);

 VAR_0->dispCopyCntrl = (VAR_0->dispCopyCntrl&~0x400)|(FUNC_1(((256-VAR_3)>0),10,1));
 VAR_2 = FUNC_2(VAR_0->dispCopyWH,12,10)+1;
 return FUNC_3(VAR_2,VAR_3);
}
