
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 () ;
 char* VAR_7 ;
 scalar_t__ FUNC_2 (int *,int,int,int,int,int ) ;
 int FUNC_3 (char*,int,int) ;

int FUNC_4() {
    char *VAR_8;
    int VAR_9 = FUNC_1();
    int VAR_10;

    VAR_7 = (char *)FUNC_2(((void*)0), VAR_3, VAR_5 | VAR_6, VAR_0 | VAR_2, -1, 0);
    FUNC_0(VAR_7 != VAR_1, "mmap failed");


    for(VAR_8 = VAR_7; VAR_8<VAR_7+VAR_3; VAR_8+= VAR_9) {
        *VAR_8 = 1;
    }


    VAR_10 = FUNC_3(VAR_7, VAR_3, VAR_5);
    FUNC_0(VAR_10 == 0, "mprotect failed");

    VAR_10 = FUNC_3(VAR_7, VAR_3, VAR_5 | VAR_6);
    FUNC_0(VAR_10 == 0, "mprotect failed");

    return VAR_4;
}
