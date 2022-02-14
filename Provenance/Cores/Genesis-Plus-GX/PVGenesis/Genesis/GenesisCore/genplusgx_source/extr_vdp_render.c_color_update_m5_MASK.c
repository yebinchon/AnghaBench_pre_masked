
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int* VAR_0 ;
 void*** VAR_1 ;
 int* VAR_2 ;

void FUNC_0(int VAR_3, unsigned int VAR_4)
{

  if (!(VAR_2[0] & 0x04))
  {

    VAR_4 &= 0x49;
  }

  if(VAR_2[12] & 0x08)
  {

    VAR_0[0x00 | VAR_3] = VAR_1[0][VAR_4];
    VAR_0[0x40 | VAR_3] = VAR_1[1][VAR_4];
    VAR_0[0x80 | VAR_3] = VAR_1[2][VAR_4];
  }
  else
  {

    VAR_4 = VAR_1[1][VAR_4];


    VAR_0[0x00 | VAR_3] = VAR_4;
    VAR_0[0x40 | VAR_3] = VAR_4;
    VAR_0[0x80 | VAR_3] = VAR_4;
  }
}
