
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef size_t u32 ;
typedef int s32 ;
struct TYPE_2__ {size_t* chnCntrl; int dirtyState; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int,int,int) ;
 int FUNC_1 (scalar_t__,int,int) ;
 TYPE_1__* VAR_4 ;

void FUNC_2(s32 VAR_5,u8 VAR_6,u8 VAR_7,u8 VAR_8,u8 VAR_9,u8 VAR_10,u8 VAR_11)
{
 u32 VAR_12,VAR_13 = (VAR_11==VAR_1)?VAR_3:VAR_10;
 u32 VAR_14 = (VAR_8&1)|(FUNC_0(VAR_6,1,1))|(FUNC_0(VAR_9,2,4))|(FUNC_0(VAR_7,6,1))|(FUNC_0(VAR_13,7,2))|(FUNC_0(((VAR_0-VAR_11)>0),9,1))|(FUNC_0((VAR_11>0),10,1))|(FUNC_0((FUNC_1(VAR_9,4,4)),11,4));

 VAR_12 = (VAR_5&0x03);
 VAR_4->chnCntrl[VAR_12] = VAR_14;
 VAR_4->dirtyState |= (0x1000<<VAR_12);

 if(VAR_5==VAR_2) {
  VAR_4->chnCntrl[2] = VAR_14;
  VAR_4->dirtyState |= 0x5000;
 } else {
  VAR_4->chnCntrl[3] = VAR_14;
  VAR_4->dirtyState |= 0xa000;
 }
}
