
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned long,unsigned long,char) ;
 int FUNC_2 () ;

void FUNC_3(unsigned long *VAR_0, size_t VAR_1) {
    unsigned long VAR_2 = 4096/sizeof(unsigned long);
    unsigned long VAR_3 = VAR_1/sizeof(unsigned long)/2;
    unsigned long VAR_4 = VAR_3/VAR_2;
    unsigned long VAR_5, VAR_6, *VAR_7, *VAR_8;

    FUNC_0((VAR_1 & 4095) == 0);
    for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
        VAR_7 = VAR_0+VAR_5;
        VAR_8 = VAR_7+VAR_3;
        for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {




            *VAR_7 = *VAR_8 = ((unsigned long) (FUNC_2()&0xffff)) |
                        (((unsigned long) (FUNC_2()&0xffff)) << 16) |
                        (((unsigned long) (FUNC_2()&0xffff)) << 32) |
                        (((unsigned long) (FUNC_2()&0xffff)) << 48);

            VAR_7 += VAR_2;
            VAR_8 += VAR_2;
            if ((VAR_6 & 0xffff) == 0)
                FUNC_1(VAR_6+VAR_4*VAR_5,VAR_3,'R');
        }
    }
}
