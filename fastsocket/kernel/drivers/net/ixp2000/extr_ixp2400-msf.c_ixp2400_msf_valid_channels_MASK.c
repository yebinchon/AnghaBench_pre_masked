
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static u32 FUNC_0(u32 VAR_3)
{
 u32 VAR_4;

 VAR_4 = 0;
 switch (VAR_3 & VAR_2) {
 case 130:
  VAR_4 = 0x1;
  if (VAR_3 & VAR_0 &&
      !(VAR_3 & VAR_1))
   VAR_4 = 0xf;
  break;

 case 129:
  VAR_4 = 0x5;
  break;

 case 128:
  VAR_4 = 0xf;
  break;

 case 131:
  VAR_4 = 0xd;
  break;
 }

 return VAR_4;
}
