
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_9)
{

  if ((VAR_1 & 0x1F) == 0x01)
  {
    int VAR_10;
    uint8 VAR_11 = VAR_2;

    do
    {

      if ((VAR_0 & VAR_6) == VAR_7)
      {

        FUNC_1(VAR_4, (VAR_0 & VAR_5) ^ 1, VAR_11);
      }


      FUNC_1(VAR_8, VAR_0 ^ 1, VAR_11);


      FUNC_0 (VAR_0);


      VAR_0 += VAR_3[15];
    }
    while (--VAR_9);
  }
  else
  {

    VAR_0 += VAR_3[15] * VAR_9;
  }
}
