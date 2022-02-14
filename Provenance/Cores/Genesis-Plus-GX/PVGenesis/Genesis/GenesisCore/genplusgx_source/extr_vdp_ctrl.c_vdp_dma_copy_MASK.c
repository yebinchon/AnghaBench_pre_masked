
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef scalar_t__ uint16 ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,unsigned int,int ) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int* VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_3(unsigned int VAR_9)
{

  if ((VAR_1 & 0x1E) == 0x10)
  {
    int VAR_10;
    uint8 VAR_11;


    uint16 VAR_12 = VAR_2;

    do
    {

      VAR_11 = FUNC_1(VAR_8, VAR_12);


      if ((VAR_0 & VAR_6) == VAR_7)
      {

        FUNC_2(VAR_4, VAR_0 & VAR_5, VAR_11);
      }


      FUNC_2(VAR_8, VAR_0, VAR_11);


      FUNC_0(VAR_0);


      VAR_12++;


      VAR_0 += VAR_3[15];
    }
    while (--VAR_9);


    VAR_2 = VAR_12;
  }
  else
  {

    VAR_0 += VAR_3[15] * VAR_9;
    VAR_2 += VAR_9;
  }
}
