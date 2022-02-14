
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 () ;
 scalar_t__ VAR_3 ;
 scalar_t__* VAR_4 ;
 scalar_t__* VAR_5 ;
 scalar_t__* VAR_6 ;
 int VAR_7 ;
 scalar_t__* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int * VAR_11 ;
 int VAR_12 ;

void FUNC_2(void)
{

    int VAR_13;

    VAR_12 = VAR_1;
    VAR_3 = 0;
    VAR_10 = 1;

    VAR_7 = VAR_2;

    for (VAR_13=0 ; VAR_13<VAR_0 ; VAR_13++)
    {
 if (!VAR_11[VAR_13])
     continue;

 VAR_6[VAR_13] = VAR_5[VAR_13] = VAR_8[VAR_13] = VAR_4[VAR_13] = 0;

 VAR_9 += FUNC_0(VAR_13);
    }

    VAR_9 = !!VAR_9;

    FUNC_1();
}
