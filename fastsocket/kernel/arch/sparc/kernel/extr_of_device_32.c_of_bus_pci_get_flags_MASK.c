
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;

__attribute__((used)) static unsigned long FUNC_0(const u32 *VAR_3, unsigned long VAR_4)
{
 u32 VAR_5 = VAR_3[0];


 VAR_4 = 0;
 switch((VAR_5 >> 24) & 0x03) {
 case 0x01:
  VAR_4 |= VAR_0;
  break;

 case 0x02:
 case 0x03:
  VAR_4 |= VAR_1;
  break;
 }
 if (VAR_5 & 0x40000000)
  VAR_4 |= VAR_2;
 return VAR_4;
}
