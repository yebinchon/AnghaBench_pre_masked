
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int codec_id; } ;
struct TYPE_11__ {TYPE_1__** streams; } ;
struct TYPE_10__ {TYPE_3__* codecpar; } ;
typedef int AVFrame ;
typedef TYPE_2__ AVFormatContext ;
typedef TYPE_3__ AVCodecParameters ;
typedef int AVCodecContext ;
typedef int AVCodec ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,int ,int,int,int *,int ) ;
 int * FUNC_2 () ;
 int FUNC_3 (int **) ;
 int FUNC_4 (int **) ;
 int FUNC_5 (int *,int ,char*) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (int **) ;
 int FUNC_10 (int *,int *,int *) ;
 int FUNC_11 (int *,TYPE_3__*) ;
 int FUNC_12 (TYPE_2__**) ;
 int FUNC_13 (TYPE_2__*,int *) ;
 int FUNC_14 (TYPE_2__**,char const*,int *,int *) ;
 int FUNC_15 (TYPE_2__*,int,int *,int *,int,int,int) ;
 int * VAR_4 ;
 scalar_t__ VAR_5 ;
 int * VAR_6 ;
 long FUNC_16 (char const*) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int FUNC_17(const char *VAR_8, const char *VAR_9, const char *VAR_10)
{
    AVCodec *VAR_11 = ((void*)0);
    AVCodecContext *VAR_12= ((void*)0);
    AVCodecParameters *VAR_13 = ((void*)0);
    AVFrame *VAR_14 = ((void*)0);
    AVFormatContext *VAR_15 = ((void*)0);
    int VAR_16;
    int VAR_17;
    int VAR_18, VAR_19;
    long int VAR_20, VAR_21;

    VAR_7 = 0;
    VAR_5 = 0;
    VAR_4 = ((void*)0);
    VAR_6 = ((void*)0);

    VAR_17 = FUNC_14(&VAR_15, VAR_8, ((void*)0), ((void*)0));
    if (VAR_17 < 0) {
        FUNC_5(((void*)0), VAR_2, "Can't open file\n");
        return VAR_17;
    }

    VAR_17 = FUNC_13(VAR_15, ((void*)0));
    if (VAR_17 < 0) {
        FUNC_5(((void*)0), VAR_2, "Can't get stream info\n");
        goto end;
    }

    VAR_20 = FUNC_16(VAR_9);
    VAR_21 = FUNC_16(VAR_10);
    if ((VAR_20 < 0) || (VAR_21 < 0)) {
        VAR_17 = -1;
        goto end;
    }


    VAR_16 = FUNC_1(VAR_15, VAR_1, -1, -1, ((void*)0), 0);
    if (VAR_16 < 0) {
      FUNC_5(((void*)0), VAR_2, "Can't find video stream in input file\n");
      VAR_17 = VAR_16;
      goto end;
    }

    VAR_13 = VAR_15->streams[VAR_16]->codecpar;

    VAR_11 = FUNC_8(VAR_13->codec_id);
    if (!VAR_11) {
        FUNC_5(((void*)0), VAR_2, "Can't find decoder\n");
        VAR_17 = VAR_0;
        goto end;
    }

    VAR_12 = FUNC_6(VAR_11);
    if (!VAR_12) {
        FUNC_5(((void*)0), VAR_2, "Can't allocate decoder context\n");
        VAR_17 = FUNC_0(VAR_3);
        goto end;
    }

    VAR_17 = FUNC_11(VAR_12, VAR_13);
    if (VAR_17) {
        FUNC_5(((void*)0), VAR_2, "Can't copy decoder context\n");
        goto end;
    }

    VAR_17 = FUNC_10(VAR_12, VAR_11, ((void*)0));
    if (VAR_17 < 0) {
        FUNC_5(VAR_12, VAR_2, "Can't open decoder\n");
        goto end;
    }

    VAR_14 = FUNC_2();
    if (!VAR_14) {
        FUNC_5(((void*)0), VAR_2, "Can't allocate frame\n");
        VAR_17 = FUNC_0(VAR_3);
        goto end;
    }

    VAR_17 = FUNC_15(VAR_15, VAR_16, VAR_12, VAR_14, 0, 0, 1);
    if (VAR_17 != 0)
        goto end;

    for (VAR_18 = VAR_20; VAR_18 < VAR_21; VAR_18 += 100) {
        for (VAR_19 = VAR_18 + 100; VAR_19 < VAR_21; VAR_19 += 100) {
            VAR_17 = FUNC_15(VAR_15, VAR_16, VAR_12, VAR_14, VAR_18, VAR_19, 0);
            if (VAR_17 != 0)
                break;
        }
    }

end:
    FUNC_4(&VAR_4);
    FUNC_4(&VAR_6);
    FUNC_3(&VAR_14);
    FUNC_7(VAR_12);
    FUNC_12(&VAR_15);
    FUNC_9(&VAR_12);
    return VAR_17;
}
