
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
 int* VAR_3 ;
 int * VAR_4 ;

void FUNC_0(int VAR_5)
{
  int VAR_6;
  uint8 VAR_7, VAR_8, VAR_9;
  uint8 *VAR_10;
  uint16 VAR_11, VAR_12, VAR_13;
  uint32 VAR_14;

  for(VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
  {

    VAR_11 = VAR_1[VAR_6];


    for(VAR_8 = 0; VAR_8 < 8; VAR_8++)
    {
      if(VAR_0[VAR_11] & (1 << VAR_8))
      {

        VAR_10 = &VAR_2[VAR_11 << 6];


        VAR_12 = *(uint16 *)&VAR_4[(VAR_11 << 5) | (VAR_8 << 2) | (0)];
        VAR_13 = *(uint16 *)&VAR_4[(VAR_11 << 5) | (VAR_8 << 2) | (2)];



        VAR_14 = (VAR_3[VAR_12] >> 2) | (VAR_3[VAR_13]);


        for(VAR_7 = 0; VAR_7 < 8; VAR_7++)
        {

          VAR_9 = VAR_14 & 0x0F;




          VAR_10[0x00000 | (VAR_8 << 3) | (VAR_7)] = (VAR_9);
          VAR_10[0x08000 | (VAR_8 << 3) | (VAR_7 ^ 7)] = (VAR_9);
          VAR_10[0x10000 | ((VAR_8 ^ 7) << 3) | (VAR_7)] = (VAR_9);
          VAR_10[0x18000 | ((VAR_8 ^ 7) << 3) | (VAR_7 ^ 7)] = (VAR_9);


          VAR_14 = VAR_14 >> 4;
        }
      }
    }


    VAR_0[VAR_11] = 0;
  }
}
