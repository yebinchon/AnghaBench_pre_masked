
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (unsigned int,int ) ;

void FUNC_1(unsigned int VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5, VAR_6;

 VAR_5 = (VAR_2 & ~VAR_3) | VAR_4;
 VAR_6 = VAR_5 ^ VAR_2;
 VAR_2 = VAR_5;

 if (VAR_6 & 0xff)
  FUNC_0(VAR_5, VAR_0);
 if (VAR_6 & 0xff00)
  FUNC_0(VAR_5 >> 8, VAR_1);
}
