
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static u32
FUNC_0(unsigned short VAR_8, u32 VAR_9)
{
 u32 VAR_10 = 0;

 if (VAR_8 & VAR_1)
  VAR_10 |= VAR_6;
 if (VAR_8 & VAR_2)
  VAR_10 |= VAR_7;
 if ((VAR_8 & VAR_2) && (VAR_9 & VAR_4))
  VAR_10 |= VAR_3;
 if (VAR_8 & VAR_0)
  VAR_10 |= VAR_5;
 return VAR_10;
}
