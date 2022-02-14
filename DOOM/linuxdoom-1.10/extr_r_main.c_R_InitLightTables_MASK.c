
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__** VAR_9 ;

void FUNC_1 (void)
{
    int VAR_10;
    int VAR_11;
    int VAR_12;
    int VAR_13;
    int VAR_14;



    for (VAR_10=0 ; VAR_10< VAR_2 ; VAR_10++)
    {
 VAR_13 = ((VAR_2-1-VAR_10)*2)*VAR_6/VAR_2;
 for (VAR_11=0 ; VAR_11<VAR_5 ; VAR_11++)
 {
     VAR_14 = FUNC_0 ((VAR_7/2*VAR_1), (VAR_11+1)<<VAR_4);
     VAR_14 >>= VAR_3;
     VAR_12 = VAR_13 - VAR_14/VAR_0;

     if (VAR_12 < 0)
  VAR_12 = 0;

     if (VAR_12 >= VAR_6)
  VAR_12 = VAR_6-1;

     VAR_9[VAR_10][VAR_11] = VAR_8 + VAR_12*256;
 }
    }
}
