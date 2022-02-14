
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint16 ;


 unsigned int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static unsigned int FUNC_1(void)
{
  unsigned int VAR_7 = 0;


  VAR_3 = 0;

  switch (VAR_1 & 0x0F)
  {
    case 0x00:
    {

      VAR_7 = FUNC_0(VAR_5, VAR_0 ^ 1);
      break;
    }

    case 0x04:
    {

      VAR_7 = FUNC_0(VAR_6, (VAR_0 & 0x7F) ^ 1);
      break;
    }

    case 0x08:
    {

      VAR_7 = *(uint16 *)&VAR_2[VAR_0 & 0x7E];


      VAR_7 = ((VAR_7 & 0x1C0) << 3) | ((VAR_7 & 0x038) << 2) | ((VAR_7 & 0x007) << 1);


      if (VAR_0 & 1)
      {
        VAR_7 = VAR_7 >> 8;
      }

      VAR_7 &= 0xFF;
      break;
    }
  }


  VAR_0 += VAR_4[15];


  return VAR_7;
}
