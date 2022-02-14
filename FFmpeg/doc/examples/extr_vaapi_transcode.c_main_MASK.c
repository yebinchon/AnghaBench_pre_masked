
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int pb; } ;
struct TYPE_11__ {scalar_t__ stream_index; scalar_t__ size; int * data; } ;
typedef TYPE_1__ AVPacket ;
typedef int AVCodec ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (int *,int ,int *,int *,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_2__**,int *,int *,char*) ;
 int FUNC_11 (TYPE_2__**) ;
 int FUNC_12 (int *,char*,int ) ;
 int FUNC_13 (TYPE_1__*,int *) ;
 int VAR_3 ;
 int FUNC_14 (int *) ;
 int VAR_4 ;
 int FUNC_15 (int ,char*,char*) ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;
 TYPE_2__* VAR_7 ;
 int FUNC_16 (char*) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;

int FUNC_17(int VAR_10, char **VAR_11)
{
    int VAR_12 = 0;
    AVPacket VAR_13;
    AVCodec *VAR_14;

    if (VAR_10 != 4) {
        FUNC_15(VAR_8, "Usage: %s <input file> <encode codec> <output file>\n"
                "The output format is guessed according to the file extension.\n"
                "\n", VAR_11[0]);
        return -1;
    }

    VAR_12 = FUNC_3(&VAR_5, VAR_1, ((void*)0), ((void*)0), 0);
    if (VAR_12 < 0) {
        FUNC_15(VAR_8, "Failed to create a VAAPI device. Error code: %s\n", FUNC_2(VAR_12));
        return -1;
    }

    if ((VAR_12 = FUNC_16(VAR_11[1])) < 0)
        goto end;

    if (!(VAR_14 = FUNC_8(VAR_11[2]))) {
        FUNC_15(VAR_8, "Could not find encoder '%s'\n", VAR_11[2]);
        VAR_12 = -1;
        goto end;
    }

    if ((VAR_12 = (FUNC_10(&VAR_7, ((void*)0), ((void*)0), VAR_11[3]))) < 0) {
        FUNC_15(VAR_8, "Failed to deduce output format from file extension. Error code: "
                "%s\n", FUNC_2(VAR_12));
        goto end;
    }

    if (!(VAR_4 = FUNC_7(VAR_14))) {
        VAR_12 = FUNC_0(VAR_2);
        goto end;
    }

    VAR_12 = FUNC_12(&VAR_7->pb, VAR_11[3], VAR_0);
    if (VAR_12 < 0) {
        FUNC_15(VAR_8, "Cannot open output file. "
                "Error code: %s\n", FUNC_2(VAR_12));
        goto end;
    }


    while (VAR_12 >= 0) {
        if ((VAR_12 = FUNC_5(VAR_6, &VAR_13)) < 0)
            break;

        if (VAR_9 == VAR_13.stream_index)
            VAR_12 = FUNC_13(&VAR_13, VAR_14);

        FUNC_4(&VAR_13);
    }


    VAR_13.data = ((void*)0);
    VAR_13.size = 0;
    VAR_12 = FUNC_13(&VAR_13, VAR_14);
    FUNC_4(&VAR_13);


    VAR_12 = FUNC_14(((void*)0));


    FUNC_6(VAR_7);

end:
    FUNC_11(&VAR_6);
    FUNC_11(&VAR_7);
    FUNC_9(&VAR_3);
    FUNC_9(&VAR_4);
    FUNC_1(&VAR_5);
    return VAR_12;
}
