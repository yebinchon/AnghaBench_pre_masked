
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned long,unsigned long,char) ;

void FUNC_2(unsigned long *VAR_0, size_t VAR_1, unsigned long VAR_2,
                        unsigned long VAR_3, char VAR_4)
{
    unsigned long VAR_5 = 4096/sizeof(unsigned long);
    unsigned long VAR_6 = VAR_1/sizeof(unsigned long)/2;
    unsigned long VAR_7 = VAR_6/VAR_5;
    unsigned long VAR_8, VAR_9, *VAR_10, *VAR_11, VAR_12;

    FUNC_0((VAR_1 & 4095) == 0);
    for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
        VAR_10 = VAR_0+VAR_8;
        VAR_11 = VAR_10+VAR_6;
        VAR_12 = (VAR_8 & 1) ? VAR_3 : VAR_2;
        for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {




            *VAR_10 = *VAR_11 = ((unsigned long) VAR_12) |
                        (((unsigned long) VAR_12) << 16) |
                        (((unsigned long) VAR_12) << 32) |
                        (((unsigned long) VAR_12) << 48);

            VAR_10 += VAR_5;
            VAR_11 += VAR_5;
            if ((VAR_9 & 0xffff) == 0)
                FUNC_1(VAR_9+VAR_7*VAR_8,VAR_6,VAR_4);
        }
    }
}
