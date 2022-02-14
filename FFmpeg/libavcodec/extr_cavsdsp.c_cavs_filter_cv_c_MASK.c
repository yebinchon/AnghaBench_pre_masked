
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ptrdiff_t ;


 int FUNC_0 (int *,int,int,int,int) ;
 int FUNC_1 (int *,int,int,int) ;

__attribute__((used)) static void FUNC_2(uint8_t *VAR_0, ptrdiff_t VAR_1, int VAR_2, int VAR_3, int VAR_4,
                             int VAR_5, int VAR_6)
{
    int VAR_7;
    if(VAR_5==2)
        for(VAR_7=0;VAR_7<8;VAR_7++)
            FUNC_1(VAR_0 + VAR_7*VAR_1,1,VAR_2,VAR_3);
    else {
        if(VAR_5)
            for(VAR_7=0;VAR_7<4;VAR_7++)
                FUNC_0(VAR_0 + VAR_7*VAR_1,1,VAR_2,VAR_3,VAR_4);
        if (VAR_6)
            for(VAR_7=4;VAR_7<8;VAR_7++)
                FUNC_0(VAR_0 + VAR_7*VAR_1,1,VAR_2,VAR_3,VAR_4);
    }
}
