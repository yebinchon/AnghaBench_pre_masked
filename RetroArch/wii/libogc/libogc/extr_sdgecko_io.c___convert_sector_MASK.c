
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef size_t s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__* VAR_2 ;

__attribute__((used)) static void FUNC_0(s32 VAR_3,u32 VAR_4,u8 *VAR_5)
{
 if(VAR_2[VAR_3]==VAR_0) {
  VAR_5[0] = (VAR_4>>15)&0xff;
  VAR_5[1] = (VAR_4>>7)&0xff;
  VAR_5[2] = (VAR_4<<1)&0xff;
  VAR_5[3] = (VAR_4<<9)&0xff;
 } else if(VAR_2[VAR_3]==VAR_1) {
  VAR_5[0] = (VAR_4>>24)&0xff;
  VAR_5[1] = (VAR_4>>16)&0xff;
  VAR_5[2] = (VAR_4>>8)&0xff;
  VAR_5[3] = VAR_4&0xff;
 }
}
