
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (int*,unsigned int,int) ;

void FUNC_1(int VAR_1, int VAR_2)
{
  unsigned int VAR_3;


  VAR_3=VAR_1&0x3f;
  VAR_3|=VAR_2<<6;
  VAR_3|=VAR_3<<8;
  VAR_3|=VAR_3<<16;

  FUNC_0((int *)(VAR_0+8), VAR_3, 320/4);
}
