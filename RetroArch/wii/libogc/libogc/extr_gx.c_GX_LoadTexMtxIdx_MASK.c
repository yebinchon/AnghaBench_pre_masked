
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {int U8; scalar_t__ U32; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int,int) ;
 TYPE_1__* VAR_2 ;

void FUNC_1(u16 VAR_3,u32 VAR_4,u8 VAR_5)
{
 u32 VAR_6,VAR_7 = (VAR_5==VAR_1)?7:11;

 if(VAR_4<VAR_0) VAR_6 = 0x0000|(FUNC_0(VAR_4,2,8));
 else VAR_6 = 0x0500|(FUNC_0((VAR_4-VAR_0),2,8));

 VAR_2->U8 = 0x30;
 VAR_2->U32 = ((FUNC_0(VAR_3,16,16))|(FUNC_0(VAR_7,12,4))|VAR_6);
}
