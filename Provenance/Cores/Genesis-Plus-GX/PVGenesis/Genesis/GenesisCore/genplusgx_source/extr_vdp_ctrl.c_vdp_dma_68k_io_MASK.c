
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;
typedef int uint16 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int* VAR_1 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_4)
{
  uint16 VAR_5;


  uint32 VAR_6 = (VAR_1[23] << 17) | (VAR_0 << 1);

  do
  {

    if (VAR_6 <= 0xA0FFFF)
    {


      VAR_5 = ((VAR_3 ^ 3) ? *(uint16 *)(VAR_2 + (VAR_6 & 0xFFFF)) : 0xFFFF);
    }




    else if (VAR_6 <= 0xA1001F)
    {
      VAR_5 = FUNC_0((VAR_6 >> 1) & 0x0F);
      VAR_5 = (VAR_5 << 8 | VAR_5);
    }


    else
    {
      VAR_5 = *(uint16 *)(VAR_2 + (VAR_6 & 0xFFFF));
    }


    VAR_6 += 2;


    VAR_6 = (VAR_1[23] << 17) | (VAR_6 & 0x1FFFF);


    FUNC_1(VAR_5);
  }
  while (--VAR_4);


  VAR_0 = (VAR_6 >> 1) & 0xffff;
}
