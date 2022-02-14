
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int member_1; void* member_2; int * member_0; } ;
typedef TYPE_1__ FileLogContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char**) ;
 int FUNC_2 (TYPE_1__*,int ,char*,...) ;
 char* FUNC_3 (size_t) ;
 char* FUNC_4 (void*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (void*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int,int) ;
 int FUNC_8 (char*,size_t,char*,char const*) ;
 int FUNC_9 (char const*) ;
 void* FUNC_10 (char*,char const*) ;

int FUNC_11(const char *VAR_8, char **VAR_9, int VAR_10, void *VAR_11)
{
    FileLogContext VAR_12 = { VAR_7, VAR_10, VAR_11 };
    int VAR_13 = -1;

    void *VAR_14= FUNC_10(((void*)0), VAR_8);
    if(!VAR_14)
        VAR_14= FUNC_10(".", VAR_8);
    *VAR_9 = FUNC_4(VAR_14);

    FUNC_5(VAR_14);





    if (!*VAR_9) {
        FUNC_2(&VAR_12, VAR_0, "ff_tempfile: Cannot allocate file name\n");
        return FUNC_0(VAR_1);
    }







    VAR_13 = FUNC_7(*VAR_9, VAR_5 | 0 | VAR_3 | 0, 0600);
    if (VAR_13 < 0) {
        int VAR_15 = FUNC_0(VAR_6);
        FUNC_2(&VAR_12, VAR_0, "ff_tempfile: Cannot open temporary file %s\n", *VAR_9);
        FUNC_1(VAR_9);
        return VAR_15;
    }
    return VAR_13;
}
