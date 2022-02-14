
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int nonInter; int tv; int dispSizeX; int dispSizeY; int dispPosX; int fbSizeX; int fbSizeY; int panSizeX; int panSizeY; int wordPerLine; int std; int wpl; int black; scalar_t__ rtfbb; scalar_t__ rbfbb; scalar_t__ tfbb; scalar_t__ bfbb; scalar_t__ threeD; scalar_t__ xof; int fbMode; scalar_t__ panPosY; scalar_t__ panPosX; scalar_t__ dispPosY; TYPE_1__* timing; } ;
struct TYPE_4__ {int acv; } ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int,int) ;
 void* FUNC_6 (int,int,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_6 ;
 int FUNC_9 () ;
 int FUNC_10 (int) ;
 TYPE_1__* FUNC_11 (int) ;
 int FUNC_12 () ;
 int* VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_1__* VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int * VAR_12 ;
 int * VAR_13 ;
 int* VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int* VAR_18 ;
 int VAR_19 ;

void FUNC_13()
{
 u32 VAR_20,VAR_21 = 0;

 FUNC_3(VAR_20);

 if(!(VAR_7[1]&0x0001))
  FUNC_8(VAR_4);

 VAR_15 = 0;
 VAR_8 = 0;
 VAR_17 = 0;
 VAR_16 = 0;
 VAR_11 = 0;

 VAR_7[38] = ((VAR_18[1]>>6)|(VAR_18[2]<<4));
 VAR_7[39] = (VAR_18[0]|FUNC_5(VAR_18[1],10,6));
 VAR_7[40] = ((VAR_18[4]>>6)|(VAR_18[5]<<4));
 VAR_7[41] = (VAR_18[3]|FUNC_5(VAR_18[4],10,6));
 VAR_7[42] = ((VAR_18[7]>>6)|(VAR_18[8]<<4));
 VAR_7[43] = (VAR_18[6]|FUNC_5(VAR_18[7],10,6));
 VAR_7[44] = (VAR_18[11]|(VAR_18[12]<<8));
 VAR_7[45] = (VAR_18[9]|(VAR_18[10]<<8));
 VAR_7[46] = (VAR_18[15]|(VAR_18[16]<<8));
 VAR_7[47] = (VAR_18[13]|(VAR_18[14]<<8));
 VAR_7[48] = (VAR_18[19]|(VAR_18[20]<<8));
 VAR_7[49] = (VAR_18[17]|(VAR_18[18]<<8));
 VAR_7[50] = (VAR_18[23]|(VAR_18[24]<<8));
 VAR_7[51] = (VAR_18[21]|(VAR_18[22]<<8));
 VAR_7[56] = 640;

 FUNC_12();

 VAR_0.nonInter = FUNC_6(VAR_7[1],2,1);
 VAR_0.tv = FUNC_6(VAR_7[1],8,2);

 VAR_21 = VAR_0.nonInter;
 if(VAR_0.tv!=VAR_2) VAR_21 += (VAR_0.tv<<2);
 VAR_9 = FUNC_11(VAR_21);
 VAR_10 = VAR_0.tv;

 VAR_14[1] = VAR_7[1];
 VAR_0.timing = VAR_9;
 VAR_0.dispSizeX = 640;
 VAR_0.dispSizeY = VAR_9->acv<<1;
 VAR_0.dispPosX = (VAR_3-VAR_0.dispSizeX)/2;
 VAR_0.dispPosY = 0;

 FUNC_10(VAR_9->acv);

 VAR_0.fbSizeX = 640;
 VAR_0.fbSizeY = VAR_9->acv<<1;
 VAR_0.panPosX = 0;
 VAR_0.panPosY = 0;
 VAR_0.panSizeX = 640;
 VAR_0.panSizeY = VAR_9->acv<<1;
 VAR_0.fbMode = VAR_5;
 VAR_0.wordPerLine = 40;
 VAR_0.std = 40;
 VAR_0.wpl = 40;
 VAR_0.xof = 0;
 VAR_0.black = 1;
 VAR_0.threeD = 0;
 VAR_0.bfbb = 0;
 VAR_0.tfbb = 0;
 VAR_0.rbfbb = 0;
 VAR_0.rtfbb = 0;

 VAR_7[24] &= ~0x8000;
 VAR_7[26] &= ~0x8000;

 VAR_13 = ((void*)0);
 VAR_12 = ((void*)0);

 FUNC_2(&VAR_19);

 FUNC_1(VAR_1,VAR_6,((void*)0));
 FUNC_7(FUNC_0(VAR_1));



 FUNC_4(VAR_20);
}
