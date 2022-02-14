
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef size_t u32 ;
typedef int u16 ;
typedef size_t s32 ;


 int* VAR_0 ;

__attribute__((used)) static u16 FUNC_0(void *VAR_1,u32 VAR_2)
{
 s32 VAR_3;
 u8 *VAR_4;
 u16 VAR_5;

 VAR_5 = 0;
 VAR_4 = VAR_1;
 for(VAR_3=0;VAR_3<VAR_2;VAR_3++)
  VAR_5 = (VAR_5<<8)^VAR_0[((VAR_5>>8)^(u16)(VAR_4[VAR_3]))];

 return VAR_5;
}
