
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int texCopyDst; int texCopyCntrl; int texCopyZTex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int,int ,int ,int*,int*,int*) ;
 TYPE_1__* VAR_5 ;

void FUNC_2(u16 VAR_6,u16 VAR_7,u32 VAR_8,u8 VAR_9)
{
 u8 VAR_10 = VAR_8&0xf;
 u32 VAR_11,VAR_12,VAR_13;

 FUNC_1(VAR_8,VAR_6,VAR_7,&VAR_11,&VAR_12,&VAR_13);
 VAR_5->texCopyDst = (VAR_5->texCopyDst&~0x3ff)|((VAR_11*VAR_13)&0x3ff);

 if(VAR_8==VAR_3) VAR_10 = 11;
 if(VAR_8==VAR_0 || (VAR_8>=VAR_1 && VAR_8<VAR_2)) VAR_5->texCopyCntrl = (VAR_5->texCopyCntrl&~0x18000)|0x18000;
 else VAR_5->texCopyCntrl = (VAR_5->texCopyCntrl&~0x18000)|0x10000;

 VAR_5->texCopyCntrl = (VAR_5->texCopyCntrl&~0x8)|(VAR_10&0x8);
 VAR_5->texCopyCntrl = (VAR_5->texCopyCntrl&~0x200)|(FUNC_0(VAR_9,9,1));
 VAR_5->texCopyCntrl = (VAR_5->texCopyCntrl&~0x70)|(FUNC_0(VAR_10,4,3));

 VAR_5->texCopyDst = (VAR_5->texCopyDst&~0xff000000)|(FUNC_0(0x4d,24,8));

 VAR_5->texCopyZTex = ((VAR_8&VAR_4)==VAR_4);
}
