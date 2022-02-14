
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
typedef size_t s32 ;


 int* VAR_0 ;

__attribute__((used)) static u8 FUNC_0(void *VAR_1,u32 VAR_2)
{
 s32 VAR_3;
 u8 VAR_4;
 u8 *VAR_5;

 VAR_4 = 0;
 VAR_5 = VAR_1;
 for(VAR_3=0;VAR_3<VAR_2;VAR_3++)
  VAR_4 = VAR_0[(u8)((VAR_4<<1)^VAR_5[VAR_3])];

 return ((VAR_4<<1)|1);
}
