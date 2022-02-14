
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;

unsigned int FUNC_0(u32 VAR_10, int VAR_11)
{
 unsigned int VAR_12 = 0;

 if (VAR_10 & 0x02000000) {
  VAR_12 = VAR_1 | VAR_9;
  VAR_12 |= (VAR_10 >> 22) & VAR_7;
  VAR_12 |= (VAR_10 >> 28) & VAR_6;
  if (VAR_10 & 0x40000000)
   VAR_12 |= VAR_2
     | VAR_5;





  if (!VAR_11 && (VAR_10 & 0xff) == 0x30)
   VAR_12 |= VAR_3;
 } else if (VAR_10 & 0x01000000)
  VAR_12 = VAR_0 | VAR_8;
 if (VAR_12)
  VAR_12 |= VAR_4;
 return VAR_12;
}
