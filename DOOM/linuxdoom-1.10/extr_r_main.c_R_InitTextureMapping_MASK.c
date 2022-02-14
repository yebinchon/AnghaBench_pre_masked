
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fixed_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int* VAR_9 ;
 int* VAR_10 ;
 int VAR_11 ;
 scalar_t__* VAR_12 ;

void FUNC_2 (void)
{
    int VAR_13;
    int VAR_14;
    int VAR_15;
    fixed_t VAR_16;







    VAR_16 = FUNC_0 (VAR_7,
       VAR_9[VAR_3/4+VAR_2/2] );

    for (VAR_13=0 ; VAR_13<VAR_3/2 ; VAR_13++)
    {
 if (VAR_9[VAR_13] > VAR_5*2)
     VAR_15 = -1;
 else if (VAR_9[VAR_13] < -VAR_5*2)
     VAR_15 = VAR_11+1;
 else
 {
     VAR_15 = FUNC_1 (VAR_9[VAR_13], VAR_16);
     VAR_15 = (VAR_7 - VAR_15+VAR_5-1)>>VAR_4;

     if (VAR_15 < -1)
  VAR_15 = -1;
     else if (VAR_15>VAR_11+1)
  VAR_15 = VAR_11+1;
 }
 VAR_10[VAR_13] = VAR_15;
    }




    for (VAR_14=0;VAR_14<=VAR_11;VAR_14++)
    {
 VAR_13 = 0;
 while (VAR_10[VAR_13]>VAR_14)
     VAR_13++;
 VAR_12[VAR_14] = (VAR_13<<VAR_1)-VAR_0;
    }


    for (VAR_13=0 ; VAR_13<VAR_3/2 ; VAR_13++)
    {
 VAR_15 = FUNC_1 (VAR_9[VAR_13], VAR_16);
 VAR_15 = VAR_6 - VAR_15;

 if (VAR_10[VAR_13] == -1)
     VAR_10[VAR_13] = 0;
 else if (VAR_10[VAR_13] == VAR_11+1)
     VAR_10[VAR_13] = VAR_11;
    }

    VAR_8 = VAR_12[0];
}
