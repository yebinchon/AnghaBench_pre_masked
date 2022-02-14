
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct _horVer {int xof; scalar_t__ threeD; int adjustedDispPosY; int fbMode; int wordPerLine; int adjustedPanPosY; int panPosX; scalar_t__ rbufAddr; scalar_t__ bufAddr; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int,int ,int ,int ,int ,int ,int*,int*) ;
 int VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static inline void FUNC_4(struct _horVer *VAR_2,u32 *VAR_3,u32 *VAR_4,u32 *VAR_5,u32 *VAR_6)
{
 u32 VAR_7;
 FUNC_3((u32)VAR_2->bufAddr,VAR_2->panPosX,VAR_2->adjustedPanPosY,VAR_2->wordPerLine,VAR_2->fbMode,VAR_2->adjustedDispPosY,VAR_3,VAR_4);
 if(VAR_2->threeD) FUNC_3((u32)VAR_2->rbufAddr,VAR_2->panPosX,VAR_2->adjustedPanPosY,VAR_2->wordPerLine,VAR_2->fbMode,VAR_2->adjustedDispPosY,VAR_5,VAR_6);

 VAR_7 = 1;
 if((*VAR_3)<0x01000000 && (*VAR_4)<0x01000000
  && (*VAR_5)<0x01000000 && (*VAR_6)<0x01000000) VAR_7 = 0;

 if(VAR_7) {
  *VAR_3 >>= 5;
  *VAR_4 >>= 5;
  *VAR_5 >>= 5;
  *VAR_6 >>= 5;
 }

 VAR_1[14] = FUNC_1(VAR_7,12,1)|FUNC_1(VAR_2->xof,8,4)|FUNC_2(*VAR_3,16,8);
 VAR_1[15] = *VAR_3&0xffff;
 VAR_0 |= FUNC_0(14);
 VAR_0 |= FUNC_0(15);

 VAR_1[18] = FUNC_2(*VAR_4,16,8);
 VAR_1[19] = *VAR_4&0xffff;
 VAR_0 |= FUNC_0(18);
 VAR_0 |= FUNC_0(19);

 if(VAR_2->threeD) {
  VAR_1[16] = FUNC_2(*VAR_5,16,8);
  VAR_1[17] = *VAR_5&0xffff;
  VAR_0 |= FUNC_0(16);
  VAR_0 |= FUNC_0(17);

  VAR_1[20] = FUNC_2(*VAR_6,16,8);
  VAR_1[21] = *VAR_6&0xffff;
  VAR_0 |= FUNC_0(20);
  VAR_0 |= FUNC_0(21);
 }
}
