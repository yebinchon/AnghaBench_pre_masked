
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned long,unsigned long,char) ;
 int FUNC_3 (char*,void*,void*,unsigned long,unsigned long) ;

void FUNC_4(unsigned long *VAR_0, size_t VAR_1) {
    unsigned long VAR_2 = VAR_1/sizeof(unsigned long)/2;
    unsigned long VAR_3, *VAR_4, *VAR_5;

    FUNC_0((VAR_1 & 4095) == 0);
    VAR_4 = VAR_0;
    VAR_5 = VAR_4+VAR_2;
    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
        if (*VAR_4 != *VAR_5) {
            FUNC_3("\n*** MEMORY ERROR DETECTED: %p != %p (%lu vs %lu)\n",
                (void*)VAR_4, (void*)VAR_5, *VAR_4, *VAR_5);
            FUNC_1(1);
        }
        VAR_4 ++;
        VAR_5 ++;
        if ((VAR_3 & 0xffff) == 0) FUNC_2(VAR_3,VAR_2,'=');
    }
}
