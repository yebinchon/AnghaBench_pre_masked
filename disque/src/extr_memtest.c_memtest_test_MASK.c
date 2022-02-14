
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,size_t,int ) ;
 int FUNC_2 (unsigned long*) ;
 unsigned long* FUNC_3 (size_t) ;
 int FUNC_4 (unsigned long*,size_t) ;
 int FUNC_5 (unsigned long*,size_t,int,int) ;
 int FUNC_6 (unsigned long*,size_t) ;
 int FUNC_7 (unsigned long*,size_t,int ,unsigned long,char) ;
 int FUNC_8 () ;
 int FUNC_9 (char*,int) ;
 int VAR_3 ;
 int FUNC_10 (int ) ;

void FUNC_11(size_t VAR_4, int VAR_5) {
    size_t VAR_6 = VAR_4*1024*1024;
    unsigned long *VAR_7 = FUNC_3(VAR_6);
    int VAR_8 = 0;

    if (VAR_7 == ((void*)0)) {
        FUNC_1(VAR_3,"Unable to allocate %zu megabytes: %d",
            VAR_4, FUNC_10(VAR_2));
        FUNC_0(1);
    }
    while (VAR_8 != VAR_5) {
        VAR_8++;

        FUNC_9("Addressing test",VAR_8);
        FUNC_4(VAR_7,VAR_6);
        FUNC_8();

        FUNC_9("Random fill",VAR_8);
        FUNC_6(VAR_7,VAR_6);
        FUNC_8();
        FUNC_5(VAR_7,VAR_6,VAR_8,4);

        FUNC_9("Solid fill",VAR_8);
        FUNC_7(VAR_7,VAR_6,0,(unsigned long)-1,'S');
        FUNC_8();
        FUNC_5(VAR_7,VAR_6,VAR_8,4);

        FUNC_9("Checkerboard fill",VAR_8);
        FUNC_7(VAR_7,VAR_6,VAR_0,VAR_1,'C');
        FUNC_8();
        FUNC_5(VAR_7,VAR_6,VAR_8,4);
    }
    FUNC_2(VAR_7);
}
