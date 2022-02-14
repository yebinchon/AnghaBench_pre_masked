
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int joydata_t ;


 int VAR_0 ;
 int * FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int VAR_1 ;
 int ** VAR_2 ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(void) {
    int VAR_3;


    if(VAR_0)
        return 0;


    VAR_1 = FUNC_2();
    if(VAR_1 == -1) {
        VAR_1 = 0;
        return -1;
    }

    VAR_2 = (joydata_t **)FUNC_3(sizeof(joydata_t *) * VAR_1);
    if(!VAR_2) {
        VAR_1 = 0;
        return -1;
    }


    for(VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3) {
        VAR_2[VAR_3] = FUNC_0(VAR_3);

        if(VAR_2[VAR_3] == ((void*)0))
            continue;

        if(!FUNC_1(VAR_2[VAR_3])) {
            VAR_2[VAR_3] = ((void*)0);
            continue;
        }
    }

    VAR_0 = 1;

    return 0;
}
