
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(unsigned int VAR_4)
{
  if (VAR_2 > 0)
  {

    int VAR_5 = ((VAR_4 - VAR_0) / VAR_1);

    if (VAR_5 > 0)
    {

      VAR_2 -= VAR_5;


      VAR_3 &= 0xFEFF;


      if (VAR_2 <= 0)
      {

        VAR_3 |= 0x200;
        VAR_2 = 0;
      }


      VAR_0 += (VAR_5 * VAR_1);
    }
  }
}
