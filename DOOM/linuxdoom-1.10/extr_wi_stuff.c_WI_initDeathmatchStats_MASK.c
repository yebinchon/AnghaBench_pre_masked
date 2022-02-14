
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__** VAR_5 ;
 int VAR_6 ;
 scalar_t__* VAR_7 ;
 scalar_t__* VAR_8 ;
 int VAR_9 ;

void FUNC_1(void)
{

    int VAR_10;
    int VAR_11;

    VAR_9 = VAR_1;
    VAR_3 = 0;
    VAR_6 = 1;

    VAR_4 = VAR_2;

    for (VAR_10=0 ; VAR_10<VAR_0 ; VAR_10++)
    {
 if (VAR_8[VAR_10])
 {
     for (VAR_11=0 ; VAR_11<VAR_0 ; VAR_11++)
  if (VAR_8[VAR_11])
      VAR_5[VAR_10][VAR_11] = 0;

     VAR_7[VAR_10] = 0;
 }
    }

    FUNC_0();
}
