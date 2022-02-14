
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint16 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,unsigned int) ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__* VAR_5 ;
 unsigned int* VAR_6 ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_7)
{

  VAR_4 = 0;


  if (VAR_2 & 0x02)
  {

    int VAR_8 = VAR_0 & 0x1F;


    uint16 *VAR_9 = (uint16 *)&VAR_3[VAR_8 << 1];


    if (VAR_7 != *VAR_9)
    {

      *VAR_9 = VAR_7;


      FUNC_1(VAR_8, VAR_7);


      if (VAR_8 == (0x10 | (VAR_1 & 0x0F)))
      {
        FUNC_1(0x40, VAR_7);
      }
    }
  }
  else
  {

    int VAR_10 = VAR_0 & 0x3FFF;


    if (VAR_7 != VAR_6[VAR_10])
    {
      int VAR_11;


      VAR_6[VAR_10] = VAR_7;


      FUNC_0(VAR_10);
    }
  }


  VAR_0 += (VAR_5[15] + 1);
}
