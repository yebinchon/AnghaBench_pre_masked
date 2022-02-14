
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
typedef int s16 ;
struct TYPE_2__ {int dispPosX; int dispSizeX; int adjustedDispPosX; scalar_t__ fbMode; int dispPosY; int adjustedDispPosY; int dispSizeY; int adjustedDispSizeY; scalar_t__ panSizeY; scalar_t__ adjustedPanSizeY; scalar_t__ panPosY; scalar_t__ adjustedPanPosY; } ;


 TYPE_1__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline void FUNC_0(u16 VAR_4)
{
 u32 VAR_5,VAR_6;
 s16 VAR_7,VAR_8;
 s16 VAR_9,VAR_10;

 VAR_7 = (VAR_0.dispPosX+VAR_2);
 if(VAR_7<=(720-VAR_0.dispSizeX)) {
  if(VAR_7>=0) VAR_0.adjustedDispPosX = VAR_7;
  else VAR_0.adjustedDispPosX = 0;
 } else VAR_0.adjustedDispPosX = (720-VAR_0.dispSizeX);

 VAR_5 = 1;
 if(VAR_0.fbMode==VAR_1) VAR_5 = 2;

 VAR_6 = VAR_0.dispPosY&0x0001;
 VAR_8 = VAR_0.dispPosY+VAR_3;
 if(VAR_8>VAR_6) VAR_0.adjustedDispPosY = VAR_8;
 else VAR_0.adjustedDispPosY = VAR_6;

 VAR_9 = VAR_0.dispPosY+VAR_0.dispSizeY+VAR_3;
 VAR_10 = ((VAR_4<<1)-VAR_6);
 if(VAR_9>VAR_10) VAR_9 -= (VAR_4<<1)-VAR_6;
 else VAR_9 = 0;

 VAR_8 = VAR_0.dispPosY+VAR_3;
 if(VAR_8<VAR_6) VAR_8 -= VAR_6;
 else VAR_8 = 0;
 VAR_0.adjustedDispSizeY = VAR_0.dispSizeY+VAR_8-VAR_9;

 VAR_8 = VAR_0.dispPosY+VAR_3;
 if(VAR_8<VAR_6) VAR_8 -= VAR_6;
 else VAR_8 = 0;
 VAR_0.adjustedPanPosY = VAR_0.panPosY-(VAR_8/VAR_5);

 VAR_9 = VAR_0.dispPosY+VAR_0.dispSizeY+VAR_3;
 if(VAR_9>VAR_10) VAR_9 -= VAR_10;
 else VAR_9 = 0;

 VAR_8 = VAR_0.dispPosY+VAR_3;
 if(VAR_8<VAR_6) VAR_8 -= VAR_6;
 else VAR_8 = 0;
 VAR_0.adjustedPanSizeY = VAR_0.panSizeY+(VAR_8/VAR_5)-(VAR_9/VAR_5);
}
