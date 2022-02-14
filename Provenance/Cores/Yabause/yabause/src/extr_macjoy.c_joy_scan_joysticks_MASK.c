
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ io_object_t ;
typedef scalar_t__ io_iterator_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (int ,scalar_t__*) ;
 int FUNC_3 (scalar_t__) ;
 int * VAR_1 ;
 int VAR_2 ;

int FUNC_4(void) {
    io_iterator_t VAR_3 = 0;
    io_object_t VAR_4;

    if(VAR_1 != ((void*)0)) {
        return -1;
    }


    FUNC_2(VAR_2, &VAR_3);

    if(VAR_3 != 0) {
        while((VAR_4 = FUNC_0(VAR_3))) {
            FUNC_3(VAR_4);
            FUNC_1(VAR_4);
        }


        FUNC_1(VAR_3);
    }

    return VAR_0;
}
