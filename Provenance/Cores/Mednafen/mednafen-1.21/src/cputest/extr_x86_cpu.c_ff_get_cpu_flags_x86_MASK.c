
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ x86_reg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int,int,int,int,int) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (int ,int,int) ;

int FUNC_3(void)
{
    int VAR_15 = 0;
    int VAR_16, VAR_17, VAR_18, VAR_19;
    int VAR_20, VAR_21, VAR_22=0, VAR_23=0;
    int VAR_24=0, VAR_25=0;
    union { int i[3]; char c[12]; } VAR_26;
    FUNC_0(0, VAR_20, VAR_26.i[0], VAR_26.i[2], VAR_26.i[1]);

    if(VAR_20 >= 1){
        FUNC_0(1, VAR_16, VAR_17, VAR_18, VAR_22);
        VAR_24 = ((VAR_16>>8)&0xf) + ((VAR_16>>20)&0xff);
        VAR_25 = ((VAR_16>>4)&0xf) + ((VAR_16>>12)&0xf0);


 if (VAR_22 & (1<<15))
     VAR_15 |= VAR_4;

        if (VAR_22 & (1<<23))
            VAR_15 |= VAR_5;
        if (VAR_22 & (1<<25))
            VAR_15 |= VAR_6

                  | VAR_7;
        if (VAR_22 & (1<<26))
            VAR_15 |= VAR_8;
        if (VAR_18 & 1)
            VAR_15 |= VAR_10;
        if (VAR_18 & 0x00000200 )
            VAR_15 |= VAR_14;
        if (VAR_18 & 0x00080000 )
            VAR_15 |= VAR_12;
        if (VAR_18 & 0x00100000 )
            VAR_15 |= VAR_13;


        if ((VAR_18 & 0x18000000) == 0x18000000) {

            FUNC_2(0, VAR_16, VAR_19);
            if ((VAR_16 & 0x6) == 0x6)
                VAR_15 |= VAR_3;
        }


                  ;
    }

    FUNC_0(0x80000000, VAR_21, VAR_17, VAR_18, VAR_19);

    if(VAR_21 >= 0x80000001){
        FUNC_0(0x80000001, VAR_16, VAR_17, VAR_18, VAR_23);
        if (VAR_23 & (1U<<31))
            VAR_15 |= VAR_0;
        if (VAR_23 & (1U<<30))
            VAR_15 |= VAR_1;
        if (VAR_23 & (1U<<23))
            VAR_15 |= VAR_5;
        if (VAR_23 & (1U<<22))
            VAR_15 |= VAR_6;
        if (!FUNC_1(VAR_26.c, "AuthenticAMD", 12) &&
            VAR_15 & VAR_8 && !(VAR_18 & 0x00000040)) {
            VAR_15 |= VAR_9;
        }
    }

    if (!FUNC_1(VAR_26.c, "GenuineIntel", 12)) {
        if (VAR_24 == 6 && (VAR_25 == 9 || VAR_25 == 13 || VAR_25 == 14)) {






            if (VAR_15 & VAR_8) VAR_15 ^= VAR_9|VAR_8;
            if (VAR_15 & VAR_10) VAR_15 ^= VAR_11|VAR_10;
        }





        if (VAR_24 == 6 && VAR_25 == 28)
            VAR_15 |= VAR_2;
    }

    return VAR_15;
}
