
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int patch_t ;
typedef int byte ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,scalar_t__,int,int *) ;
 int * FUNC_1 (char*,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int *,int *,int) ;
 int VAR_6 ;
 int ** VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;

void FUNC_3 (void)
{
    byte* VAR_11;
    byte* VAR_12;
    int VAR_13;
    int VAR_14;
    patch_t* VAR_15;


    char VAR_16[] = "FLOOR7_2";


    char VAR_17[] = "GRNROCK";

    char* VAR_18;

    if (VAR_6 == 320)
 return;

    if ( VAR_5 == VAR_4)
 VAR_18 = VAR_17;
    else
 VAR_18 = VAR_16;

    VAR_11 = FUNC_1 (VAR_18, VAR_0);
    VAR_12 = VAR_7[1];

    for (VAR_14=0 ; VAR_14<VAR_2-VAR_1 ; VAR_14++)
    {
 for (VAR_13=0 ; VAR_13<VAR_3/64 ; VAR_13++)
 {
     FUNC_2 (VAR_12, VAR_11+((VAR_14&63)<<6), 64);
     VAR_12 += 64;
 }

 if (VAR_3&63)
 {
     FUNC_2 (VAR_12, VAR_11+((VAR_14&63)<<6), VAR_3&63);
     VAR_12 += (VAR_3&63);
 }
    }

    VAR_15 = FUNC_1 ("brdr_t",VAR_0);

    for (VAR_13=0 ; VAR_13<VAR_6 ; VAR_13+=8)
 FUNC_0 (VAR_9+VAR_13,VAR_10-8,1,VAR_15);
    VAR_15 = FUNC_1 ("brdr_b",VAR_0);

    for (VAR_13=0 ; VAR_13<VAR_6 ; VAR_13+=8)
 FUNC_0 (VAR_9+VAR_13,VAR_10+VAR_8,1,VAR_15);
    VAR_15 = FUNC_1 ("brdr_l",VAR_0);

    for (VAR_14=0 ; VAR_14<VAR_8 ; VAR_14+=8)
 FUNC_0 (VAR_9-8,VAR_10+VAR_14,1,VAR_15);
    VAR_15 = FUNC_1 ("brdr_r",VAR_0);

    for (VAR_14=0 ; VAR_14<VAR_8 ; VAR_14+=8)
 FUNC_0 (VAR_9+VAR_6,VAR_10+VAR_14,1,VAR_15);



    FUNC_0 (VAR_9-8,
   VAR_10-8,
   1,
   FUNC_1 ("brdr_tl",VAR_0));

    FUNC_0 (VAR_9+VAR_6,
   VAR_10-8,
   1,
   FUNC_1 ("brdr_tr",VAR_0));

    FUNC_0 (VAR_9-8,
   VAR_10+VAR_8,
   1,
   FUNC_1 ("brdr_bl",VAR_0));

    FUNC_0 (VAR_9+VAR_6,
   VAR_10+VAR_8,
   1,
   FUNC_1 ("brdr_br",VAR_0));
}
