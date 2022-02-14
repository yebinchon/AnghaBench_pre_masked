
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int*,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int,int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static __inline__ int FUNC_3(s32 VAR_4, u32 VAR_5, u8 *VAR_6)
{
 s32 VAR_7 = 0;
 u32 VAR_8 = 0xF0000000|(VAR_5<<9);

 if (VAR_5 > 0x7FFFF)
  return 0;

 if(!FUNC_2(VAR_4,VAR_0,VAR_2)) VAR_7 |= 0x01;
 if(!FUNC_1(VAR_4,&VAR_8,sizeof(u32),VAR_3)) VAR_7 |= 0x02;
 if(!FUNC_1(VAR_4,&VAR_8,sizeof(u32),VAR_1)) VAR_7 |= 0x04;
 if(!FUNC_0(VAR_4)) VAR_7 |= 0x08;

 if(VAR_7) return 0;
 *VAR_6 = VAR_8>>23;
 return 1;
}
