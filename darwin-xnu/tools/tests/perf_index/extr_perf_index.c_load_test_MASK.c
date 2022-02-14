
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* setup ) (int,long long,int,void**) ;int (* execute ) (int,int,long long,int,void**) ;int (* cleanup ) (int,long long) ;char** error_str_ptr; } ;
typedef TYPE_1__ test_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (char*,int) ;
 void* FUNC_1 (void*,char*) ;

int FUNC_2(char* VAR_2, test_t* VAR_3) {
    void* VAR_4;
    void* VAR_5;

    VAR_4 = FUNC_0(VAR_2, VAR_1 | VAR_0);
    if(!VAR_4) {
        return -1;
    }


    VAR_5 = FUNC_1(VAR_4, "setup");
    VAR_3->setup = (int (*)(int, long long, int, void **))VAR_5;

    VAR_5 = FUNC_1(VAR_4, "execute");
    VAR_3->execute = (int (*)(int, int, long long, int, void **))VAR_5;
    if(VAR_5 == ((void*)0))
        return -1;

    VAR_5 = FUNC_1(VAR_4, "cleanup");
    VAR_3->cleanup = (int (*)(int, long long))VAR_5;

    VAR_5 = FUNC_1(VAR_4, "error_str");
    VAR_3->error_str_ptr = (char**)VAR_5;

    return 0;
}
