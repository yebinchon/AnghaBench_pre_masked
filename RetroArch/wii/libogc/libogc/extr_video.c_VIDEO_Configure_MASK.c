
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct _timing {int psbEven; int psbOdd; int prbEven; int prbOdd; int acv; int equ; } ;
struct TYPE_6__ {int nonInter; int tv; int dispPosY; int fbSizeY; scalar_t__ fbMode; int panSizeY; int dispSizeY; int threeD; int black; int adjustedDispSizeY; int adjustedDispPosY; int rbfbb; int rtfbb; int bfbb; int tfbb; int xof; int wpl; int std; int wordPerLine; int panSizeX; scalar_t__ panPosX; int fbSizeX; int dispSizeX; int adjustedDispPosX; struct _timing const* timing; scalar_t__ panPosY; int dispPosX; } ;
struct TYPE_5__ {int viTVMode; int viYOrigin; int xfbHeight; scalar_t__ xfbMode; int fbWidth; int viWidth; int viXOrigin; } ;
typedef TYPE_1__ GXRModeObj ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int,int) ;
 int FUNC_5 (int,int,int) ;
 int FUNC_6 (int ) ;
 struct _timing* FUNC_7 (int) ;
 int FUNC_8 (struct _timing const*) ;
 int FUNC_9 (TYPE_2__*,int *,int *,int *,int *) ;
 int FUNC_10 (struct _timing const*,int ,int ) ;
 int FUNC_11 (struct _timing const*) ;
 int FUNC_12 (int ,scalar_t__,scalar_t__,int ,int *,int *,int *,int *) ;
 int FUNC_13 (int ,int ,int) ;
 int FUNC_14 (int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int* VAR_8 ;

void FUNC_15(GXRModeObj *VAR_9)
{
 u16 VAR_10;
 u32 VAR_11,VAR_12,VAR_13;
 const struct _timing *VAR_14;
 FUNC_2(VAR_13);
 VAR_11 = (VAR_9->viTVMode&0x0003);
 if(VAR_11!=VAR_0.nonInter) {
  VAR_5 = 1;
  VAR_0.nonInter = VAR_11;
 }
 VAR_0.tv = FUNC_5(VAR_9->viTVMode,2,3);
 VAR_0.dispPosX = VAR_9->viXOrigin;
 VAR_0.dispPosY = VAR_9->viYOrigin;
 if(VAR_0.nonInter==VAR_2) VAR_0.dispPosY = VAR_0.dispPosY<<1;

 VAR_0.dispSizeX = VAR_9->viWidth;
 VAR_0.fbSizeX = VAR_9->fbWidth;
 VAR_0.fbSizeY = VAR_9->xfbHeight;
 VAR_0.fbMode = VAR_9->xfbMode;
 VAR_0.panSizeX = VAR_0.fbSizeX;
 VAR_0.panSizeY = VAR_0.fbSizeY;
 VAR_0.panPosX = 0;
 VAR_0.panPosY = 0;

 if(VAR_0.nonInter==VAR_3 || VAR_0.nonInter==(VAR_2|VAR_3)) VAR_0.dispSizeY = VAR_0.panSizeY;
 else if(VAR_0.fbMode==VAR_4) VAR_0.dispSizeY = VAR_0.panSizeY<<1;
 else VAR_0.dispSizeY = VAR_0.panSizeY;

 if(VAR_0.nonInter==(VAR_2|VAR_3)) VAR_0.threeD = 1;
 else VAR_0.threeD = 0;

 VAR_12 = FUNC_1(VAR_0.tv,VAR_0.nonInter);
 VAR_14 = FUNC_7(VAR_12);
 VAR_0.timing = VAR_14;

 FUNC_6(VAR_14->acv);
 FUNC_11(VAR_14);

 VAR_10 = VAR_8[1]&~0x030c;
 VAR_10 |= FUNC_4(VAR_0.threeD,3,1);
 if(VAR_0.nonInter==VAR_3 || VAR_0.nonInter==(VAR_2|VAR_3)) VAR_10 |= 0x0004;
 else VAR_10 |= FUNC_4(VAR_0.nonInter,2,1);
 if(!(VAR_0.tv==VAR_1)) VAR_10 |= FUNC_4(VAR_0.tv,8,2);
 VAR_8[1] = VAR_10;
 VAR_6 |= FUNC_0(1);

 VAR_8[54] &= ~0x0001;
 if(VAR_0.nonInter==VAR_3 || VAR_0.nonInter==(VAR_2|VAR_3)) VAR_8[54] |= 0x0001;
 VAR_6 |= FUNC_0(54);

 FUNC_13(VAR_0.panSizeX,VAR_0.dispSizeX,VAR_0.threeD);
 FUNC_10(VAR_14,VAR_0.adjustedDispPosX,VAR_0.dispSizeX);
 FUNC_8(VAR_14);
 FUNC_12(VAR_0.fbSizeX,VAR_0.fbMode,VAR_0.panPosX,VAR_0.panSizeX,&VAR_0.wordPerLine,&VAR_0.std,&VAR_0.wpl,&VAR_0.xof);

 if(VAR_7) FUNC_9(&VAR_0,&VAR_0.tfbb,&VAR_0.bfbb,&VAR_0.rtfbb,&VAR_0.rbfbb);

 FUNC_14(VAR_0.adjustedDispPosY,VAR_0.adjustedDispSizeY,VAR_14->equ,VAR_14->acv,VAR_14->prbOdd,VAR_14->prbEven,VAR_14->psbOdd,VAR_14->psbEven,VAR_0.black);
 FUNC_3(VAR_13);
}
