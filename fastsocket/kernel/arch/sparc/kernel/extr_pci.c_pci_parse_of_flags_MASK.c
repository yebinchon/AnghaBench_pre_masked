
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;

__attribute__((used)) static unsigned long FUNC_0(u32 VAR_8)
{
 unsigned long VAR_9 = 0;

 if (VAR_8 & 0x02000000) {
  VAR_9 = VAR_1 | VAR_7;
  VAR_9 |= (VAR_8 >> 22) & VAR_5;
  VAR_9 |= (VAR_8 >> 28) & VAR_4;
  if (VAR_8 & 0x40000000)
   VAR_9 |= VAR_2
     | VAR_3;
 } else if (VAR_8 & 0x01000000)
  VAR_9 = VAR_0 | VAR_6;
 return VAR_9;
}
