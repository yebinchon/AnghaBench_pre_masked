
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int peZMode; int peCMode0; int peCntrl; int dispCopyTL; int dispCopyWH; int dispCopyDst; int dispCopyCntrl; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int ,int,int) ;
 TYPE_1__* VAR_0 ;

void FUNC_4(void *VAR_1,u8 VAR_2)
{
 u8 VAR_3;
 u32 VAR_4;

 if(VAR_2) {
  VAR_4= (VAR_0->peZMode&~0xf)|0xf;
  FUNC_0(VAR_4);
  VAR_4 = (VAR_0->peCMode0&~0x3);
  FUNC_0(VAR_4);
 }

 VAR_3 = 0;
 if(VAR_2 || (VAR_0->peCntrl&0x7)==0x0003) {
  if(VAR_0->peCntrl&0x40) {
   VAR_3 = 1;
   VAR_4 = (VAR_0->peCntrl&~0x40);
   FUNC_0(VAR_4);
  }
 }

 FUNC_0(VAR_0->dispCopyTL);
 FUNC_0(VAR_0->dispCopyWH);

 FUNC_0(VAR_0->dispCopyDst);

 VAR_4 = 0x4b000000|(FUNC_3(FUNC_1(VAR_1),5,24));
 FUNC_0(VAR_4);

 VAR_0->dispCopyCntrl = (VAR_0->dispCopyCntrl&~0x800)|(FUNC_2(VAR_2,11,1));
 VAR_0->dispCopyCntrl = (VAR_0->dispCopyCntrl&~0x4000)|0x4000;
 VAR_0->dispCopyCntrl = (VAR_0->dispCopyCntrl&~0xff000000)|(FUNC_2(0x52,24,8));

 FUNC_0(VAR_0->dispCopyCntrl);

 if(VAR_2) {
  FUNC_0(VAR_0->peZMode);
  FUNC_0(VAR_0->peCMode0);
 }
 if(VAR_3) FUNC_0(VAR_0->peCntrl);
}
