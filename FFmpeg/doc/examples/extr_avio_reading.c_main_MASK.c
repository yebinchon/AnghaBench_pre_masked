
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
struct buffer_data {size_t size; int * ptr; int member_0; } ;
struct TYPE_11__ {TYPE_1__* pb; } ;
struct TYPE_10__ {int buffer; } ;
typedef TYPE_1__ AVIOContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,int ,char*,int ) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,int **,size_t*,int ,int *) ;
 int FUNC_4 (int *,size_t) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (size_t) ;
 TYPE_2__* FUNC_7 () ;
 int FUNC_8 (TYPE_2__**) ;
 int FUNC_9 (TYPE_2__*,int *) ;
 int FUNC_10 (TYPE_2__**,int *,int *,int *) ;
 TYPE_1__* FUNC_11 (int *,size_t,int ,struct buffer_data*,int *,int *,int *) ;
 int FUNC_12 (TYPE_1__**) ;
 int FUNC_13 (int ,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_14(int VAR_3, char *VAR_4[])
{
    AVFormatContext *VAR_5 = ((void*)0);
    AVIOContext *VAR_6 = ((void*)0);
    uint8_t *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
    size_t VAR_9, VAR_10 = 4096;
    char *VAR_11 = ((void*)0);
    int VAR_12 = 0;
    struct buffer_data VAR_13 = { 0 };

    if (VAR_3 != 2) {
        FUNC_13(VAR_2, "usage: %s input_file\n"
                "API example program to show how to read from a custom buffer "
                "accessed through AVIOContext.\n", VAR_4[0]);
        return 1;
    }
    VAR_11 = VAR_4[1];


    VAR_12 = FUNC_3(VAR_11, &VAR_7, &VAR_9, 0, ((void*)0));
    if (VAR_12 < 0)
        goto end;


    VAR_13.ptr = VAR_7;
    VAR_13.size = VAR_9;

    if (!(VAR_5 = FUNC_7())) {
        VAR_12 = FUNC_0(VAR_0);
        goto end;
    }

    VAR_8 = FUNC_6(VAR_10);
    if (!VAR_8) {
        VAR_12 = FUNC_0(VAR_0);
        goto end;
    }
    VAR_6 = FUNC_11(VAR_8, VAR_10,
                                  0, &VAR_13, &VAR_1, ((void*)0), ((void*)0));
    if (!VAR_6) {
        VAR_12 = FUNC_0(VAR_0);
        goto end;
    }
    VAR_5->pb = VAR_6;

    VAR_12 = FUNC_10(&VAR_5, ((void*)0), ((void*)0), ((void*)0));
    if (VAR_12 < 0) {
        FUNC_13(VAR_2, "Could not open input\n");
        goto end;
    }

    VAR_12 = FUNC_9(VAR_5, ((void*)0));
    if (VAR_12 < 0) {
        FUNC_13(VAR_2, "Could not find stream information\n");
        goto end;
    }

    FUNC_1(VAR_5, 0, VAR_11, 0);

end:
    FUNC_8(&VAR_5);


    if (VAR_6)
        FUNC_5(&VAR_6->buffer);
    FUNC_12(&VAR_6);

    FUNC_4(VAR_7, VAR_9);

    if (VAR_12 < 0) {
        FUNC_13(VAR_2, "Error occurred: %s\n", FUNC_2(VAR_12));
        return 1;
    }

    return 0;
}
