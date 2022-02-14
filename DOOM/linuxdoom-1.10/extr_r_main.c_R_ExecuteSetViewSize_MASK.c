
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fixed_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 () ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 void** VAR_23 ;
 int* VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 scalar_t__** VAR_30 ;
 int* VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 size_t* VAR_39 ;
 void** VAR_40 ;

void FUNC_4 (void)
{
    fixed_t VAR_41;
    fixed_t VAR_42;
    int VAR_43;
    int VAR_44;
    int VAR_45;
    int VAR_46;

    VAR_34 = 0;

    if (VAR_32 == 11)
    {
 VAR_29 = VAR_14;
 VAR_37 = VAR_13;
    }
    else
    {
 VAR_29 = VAR_32*32;
 VAR_37 = (VAR_32*168/10)&~7;
    }

    VAR_22 = VAR_33;
    VAR_38 = VAR_29>>VAR_22;

    VAR_18 = VAR_37/2;
    VAR_16 = VAR_38/2;
    VAR_17 = VAR_16<<VAR_2;
    VAR_19 = VAR_18<<VAR_2;
    VAR_26 = VAR_17;

    if (!VAR_22)
    {
 VAR_20 = VAR_15 = VAR_7;
 VAR_25 = VAR_9;
 VAR_36 = VAR_12;
 VAR_35 = VAR_10;
    }
    else
    {
 VAR_20 = VAR_15 = VAR_8;
 VAR_25 = VAR_9;
 VAR_36 = VAR_12;
 VAR_35 = VAR_11;
    }

    FUNC_1 (VAR_29, VAR_37);

    FUNC_2 ();


    VAR_28 = VAR_3*VAR_38/VAR_14;
    VAR_27 = VAR_3*VAR_14/VAR_38;


    for (VAR_43=0 ; VAR_43<VAR_38 ; VAR_43++)
 VAR_31[VAR_43] = VAR_37;


    for (VAR_43=0 ; VAR_43<VAR_37 ; VAR_43++)
    {
 VAR_42 = ((VAR_43-VAR_37/2)<<VAR_2)+VAR_3/2;
 VAR_42 = FUNC_3(VAR_42);
 VAR_40[VAR_43] = FUNC_0 ( (VAR_38<<VAR_22)/2*VAR_3, VAR_42);
    }

    for (VAR_43=0 ; VAR_43<VAR_38 ; VAR_43++)
    {
 VAR_41 = FUNC_3(VAR_24[VAR_39[VAR_43]>>VAR_0]);
 VAR_23[VAR_43] = FUNC_0 (VAR_3,VAR_41);
    }



    for (VAR_43=0 ; VAR_43< VAR_4 ; VAR_43++)
    {
 VAR_46 = ((VAR_4-1-VAR_43)*2)*VAR_6/VAR_4;
 for (VAR_44=0 ; VAR_44<VAR_5 ; VAR_44++)
 {
     VAR_45 = VAR_46 - VAR_44*VAR_14/(VAR_38<<VAR_22)/VAR_1;

     if (VAR_45 < 0)
  VAR_45 = 0;

     if (VAR_45 >= VAR_6)
  VAR_45 = VAR_6-1;

     VAR_30[VAR_43][VAR_44] = VAR_21 + VAR_45*256;
 }
    }
}
