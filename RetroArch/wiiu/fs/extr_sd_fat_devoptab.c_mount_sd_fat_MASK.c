
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FSCmdBlock ;
typedef int FSClient ;


 int FUNC_0 (void*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (void*,void*,char**) ;
 int FUNC_4 (char*) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (char const*,char*,void*,void*) ;

int FUNC_7(const char *VAR_0)
{
    int VAR_1 = -1;


    void* VAR_2 = FUNC_5(sizeof(FSClient));
    void* VAR_3 = FUNC_5(sizeof(FSCmdBlock));

    if(!VAR_2 || !VAR_3) {

        if(VAR_2)
            FUNC_4(VAR_2);
        if(VAR_3)
            FUNC_4(VAR_3);
        return -2;
    }

    FUNC_1();
    FUNC_2(VAR_3);
    FUNC_0(VAR_2, -1);

    char *VAR_4 = ((void*)0);

    if(FUNC_3(VAR_2, VAR_3, &VAR_4) == 0) {
        VAR_1 = FUNC_6(VAR_0, VAR_4, VAR_2, VAR_3);
        FUNC_4(VAR_4);
    }

    return VAR_1;
}
