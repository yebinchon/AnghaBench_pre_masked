
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* my_name; char* test_name; int * test_argv; scalar_t__ test_argc; int length; int num_threads; } ;
typedef TYPE_1__ parsed_args_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int *,int) ;

int FUNC_2(int VAR_0, char** VAR_1, parsed_args_t* VAR_2) {
    if(VAR_0 != 4) {
        return -1;
    }

    VAR_2->my_name = VAR_1[0];
    VAR_2->test_name = VAR_1[1];
    VAR_2->num_threads = FUNC_0(VAR_1[2]);
    VAR_2->length = FUNC_1(VAR_1[3], ((void*)0), 10);
    VAR_2->test_argc = 0;
    VAR_2->test_argv = ((void*)0);
    return 0;
}
