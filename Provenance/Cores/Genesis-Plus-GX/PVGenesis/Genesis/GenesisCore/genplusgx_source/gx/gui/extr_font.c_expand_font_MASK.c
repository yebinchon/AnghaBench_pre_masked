
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct TYPE_3__ {int sheet_format; int sheet_fullsize; } ;
typedef TYPE_1__ sys_fontheader ;
typedef size_t s32 ;


 int FUNC_0 (int*,int) ;
 size_t FUNC_1 (int,int,int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_2(u8 *VAR_1,u8 *VAR_2)
{
 s32 VAR_3;
 u32 VAR_4;
 u8 VAR_5,VAR_6;
  sys_fontheader *VAR_7 = VAR_0;
 u8 *VAR_8 = (u8*)VAR_7+44;

 if(VAR_7->sheet_format==0x0000) {
  VAR_3 = (VAR_7->sheet_fullsize/2)-1;

  while(VAR_3>=0) {
   VAR_4 = FUNC_1(VAR_1[VAR_3],6,2);
   VAR_5 = VAR_8[VAR_4];

   VAR_4 = FUNC_1(VAR_1[VAR_3],4,2);
   VAR_6 = VAR_8[VAR_4];

   VAR_2[(VAR_3<<1)+0] =((VAR_5&0xf0)|(VAR_6&0x0f));

   VAR_4 = FUNC_1(VAR_1[VAR_3],2,2);
   VAR_5 = VAR_8[VAR_4];

   VAR_4 = FUNC_1(VAR_1[VAR_3],0,2);
   VAR_6 = VAR_8[VAR_4];

   VAR_2[(VAR_3<<1)+1] =((VAR_5&0xf0)|(VAR_6&0x0f));

   VAR_3--;
  }
 }
 FUNC_0(VAR_2,VAR_7->sheet_fullsize);
}
