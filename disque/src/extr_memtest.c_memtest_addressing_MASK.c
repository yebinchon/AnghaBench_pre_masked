
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned long,unsigned long,char) ;
 int FUNC_2 (char*,void*,unsigned long) ;

void FUNC_3(unsigned long *VAR_0, size_t VAR_1) {
    unsigned long VAR_2 = VAR_1/sizeof(unsigned long);
    unsigned long VAR_3, *VAR_4;


    VAR_4 = VAR_0;
    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
        *VAR_4 = (unsigned long)VAR_4;
        VAR_4++;
        if ((VAR_3 & 0xffff) == 0) FUNC_1(VAR_3,VAR_2*2,'A');
    }

    VAR_4 = VAR_0;
    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
        if (*VAR_4 != (unsigned long)VAR_4) {
            FUNC_2("\n*** MEMORY ADDRESSING ERROR: %p contains %lu\n",
                (void*) VAR_4, *VAR_4);
            FUNC_0(1);
        }
        VAR_4++;
        if ((VAR_3 & 0xffff) == 0) FUNC_1(VAR_3+VAR_2,VAR_2*2,'A');
    }
}
