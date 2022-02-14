
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int octx ;
typedef int error ;
struct TYPE_5__ {int * groups; int global_opts; } ;
typedef TYPE_1__ OptionParseContext ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int *,int ,char*,...) ;
 int FUNC_2 (int,int *,int) ;
 int FUNC_3 () ;
 int VAR_3 ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int FUNC_6 (int *,char*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (TYPE_1__*,int,char**,int ,int ,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (TYPE_1__*) ;

int FUNC_11(int VAR_7, char **VAR_8)
{
    OptionParseContext VAR_9;
    uint8_t VAR_10[128];
    int VAR_11;

    FUNC_5(&VAR_9, 0, sizeof(VAR_9));


    VAR_11 = FUNC_8(&VAR_9, VAR_7, VAR_8, VAR_6, VAR_3,
                            FUNC_0(VAR_3));
    if (VAR_11 < 0) {
        FUNC_1(((void*)0), VAR_0, "Error splitting the argument list: ");
        goto fail;
    }


    VAR_11 = FUNC_7(((void*)0), &VAR_9.global_opts);
    if (VAR_11 < 0) {
        FUNC_1(((void*)0), VAR_0, "Error parsing global options: ");
        goto fail;
    }


    FUNC_9();


    VAR_11 = FUNC_6(&VAR_9.groups[VAR_1], "input", VAR_4);
    if (VAR_11 < 0) {
        FUNC_1(((void*)0), VAR_0, "Error opening input files: ");
        goto fail;
    }


    VAR_11 = FUNC_4();
    if (VAR_11 < 0) {
        FUNC_1(((void*)0), VAR_0, "Error initializing complex filters.\n");
        goto fail;
    }


    VAR_11 = FUNC_6(&VAR_9.groups[VAR_2], "output", VAR_5);
    if (VAR_11 < 0) {
        FUNC_1(((void*)0), VAR_0, "Error opening output files: ");
        goto fail;
    }

    FUNC_3();

fail:
    FUNC_10(&VAR_9);
    if (VAR_11 < 0) {
        FUNC_2(VAR_11, VAR_10, sizeof(VAR_10));
        FUNC_1(((void*)0), VAR_0, "%s\n", VAR_10);
    }
    return VAR_11;
}
