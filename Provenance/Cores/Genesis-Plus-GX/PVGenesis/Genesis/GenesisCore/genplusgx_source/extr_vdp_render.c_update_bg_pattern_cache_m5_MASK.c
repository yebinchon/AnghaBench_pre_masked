
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int uint32 ;
typedef size_t uint16 ;


 int* VAR_0 ;
 size_t* VAR_1 ;
 int* VAR_2 ;
 int * VAR_3 ;

void FUNC_0(int VAR_4)
{
  int VAR_5;
  uint8 VAR_6, VAR_7, VAR_8;
  uint8 *VAR_9;
  uint16 VAR_10;
  uint32 VAR_11;

  for(VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
  {

    VAR_10 = VAR_1[VAR_5];


    for(VAR_7 = 0; VAR_7 < 8; VAR_7 ++)
    {
      if(VAR_0[VAR_10] & (1 << VAR_7))
      {

        VAR_9 = &VAR_2[VAR_10 << 6];




        VAR_11 = *(uint32 *)&VAR_3[(VAR_10 << 5) | (VAR_7 << 2)];


        for(VAR_6 = 0; VAR_6 < 8; VAR_6 ++)
        {

          VAR_8 = VAR_11 & 0x0F;
          VAR_9[0x00000 | (VAR_7 << 3) | (VAR_6 ^ 7)] = (VAR_8);
          VAR_9[0x20000 | (VAR_7 << 3) | (VAR_6)] = (VAR_8);
          VAR_9[0x40000 | ((VAR_7 ^ 7) << 3) | (VAR_6 ^ 7)] = (VAR_8);
          VAR_9[0x60000 | ((VAR_7 ^ 7) << 3) | (VAR_6)] = (VAR_8);


          VAR_11 = VAR_11 >> 4;
        }
      }
    }


    VAR_0[VAR_10] = 0;
  }
}
