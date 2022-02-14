
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {int id; } ;
struct TYPE_9__ {scalar_t__ size; int data; } ;
typedef int FILE ;
typedef TYPE_1__ AVPacket ;
typedef int AVFrame ;
typedef int AVCodecParserContext ;
typedef int AVCodecContext ;
typedef TYPE_2__ AVCodec ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 () ;
 int FUNC_1 (int **) ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (TYPE_1__**) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int *,int *,int *,scalar_t__*,int *,size_t,int ,int ,int ) ;
 int * FUNC_7 (TYPE_2__ const*) ;
 TYPE_2__* FUNC_8 (int ) ;
 int FUNC_9 (int **) ;
 scalar_t__ FUNC_10 (int *,TYPE_2__ const*,int *) ;
 int FUNC_11 (int *,int *,TYPE_1__*,char const*) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int * FUNC_15 (char const*,char*) ;
 int FUNC_16 (int ,char*,...) ;
 size_t FUNC_17 (int *,int,int,int *) ;
 int FUNC_18 (int *,int ,int) ;
 int VAR_4 ;

int FUNC_19(int VAR_5, char **VAR_6)
{
    const char *VAR_7, *VAR_8;
    const AVCodec *VAR_9;
    AVCodecParserContext *VAR_10;
    AVCodecContext *VAR_11= ((void*)0);
    FILE *VAR_12;
    AVFrame *VAR_13;
    uint8_t VAR_14[VAR_3 + VAR_1];
    uint8_t *VAR_15;
    size_t VAR_16;
    int VAR_17;
    AVPacket *VAR_18;

    if (VAR_5 <= 2) {
        FUNC_16(VAR_4, "Usage: %s <input file> <output file>\n"
                "And check your input file is encoded by mpeg1video please.\n", VAR_6[0]);
        FUNC_12(0);
    }
    VAR_7 = VAR_6[1];
    VAR_8 = VAR_6[2];

    VAR_18 = FUNC_2();
    if (!VAR_18)
        FUNC_12(1);


    FUNC_18(VAR_14 + VAR_3, 0, VAR_1);


    VAR_9 = FUNC_8(VAR_0);
    if (!VAR_9) {
        FUNC_16(VAR_4, "Codec not found\n");
        FUNC_12(1);
    }

    VAR_10 = FUNC_5(VAR_9->id);
    if (!VAR_10) {
        FUNC_16(VAR_4, "parser not found\n");
        FUNC_12(1);
    }

    VAR_11 = FUNC_7(VAR_9);
    if (!VAR_11) {
        FUNC_16(VAR_4, "Could not allocate video codec context\n");
        FUNC_12(1);
    }






    if (FUNC_10(VAR_11, VAR_9, ((void*)0)) < 0) {
        FUNC_16(VAR_4, "Could not open codec\n");
        FUNC_12(1);
    }

    VAR_12 = FUNC_15(VAR_7, "rb");
    if (!VAR_12) {
        FUNC_16(VAR_4, "Could not open %s\n", VAR_7);
        FUNC_12(1);
    }

    VAR_13 = FUNC_0();
    if (!VAR_13) {
        FUNC_16(VAR_4, "Could not allocate video frame\n");
        FUNC_12(1);
    }

    while (!FUNC_14(VAR_12)) {

        VAR_16 = FUNC_17(VAR_14, 1, VAR_3, VAR_12);
        if (!VAR_16)
            break;


        VAR_15 = VAR_14;
        while (VAR_16 > 0) {
            VAR_17 = FUNC_6(VAR_10, VAR_11, &VAR_18->data, &VAR_18->size,
                                   VAR_15, VAR_16, VAR_2, VAR_2, 0);
            if (VAR_17 < 0) {
                FUNC_16(VAR_4, "Error while parsing\n");
                FUNC_12(1);
            }
            VAR_15 += VAR_17;
            VAR_16 -= VAR_17;

            if (VAR_18->size)
                FUNC_11(VAR_11, VAR_13, VAR_18, VAR_8);
        }
    }


    FUNC_11(VAR_11, VAR_13, ((void*)0), VAR_8);

    FUNC_13(VAR_12);

    FUNC_4(VAR_10);
    FUNC_9(&VAR_11);
    FUNC_1(&VAR_13);
    FUNC_3(&VAR_18);

    return 0;
}
