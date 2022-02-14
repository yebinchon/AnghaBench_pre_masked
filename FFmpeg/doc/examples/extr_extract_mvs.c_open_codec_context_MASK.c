
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef enum AVMediaType { ____Placeholder_AVMediaType } AVMediaType ;
struct TYPE_7__ {TYPE_1__** streams; } ;
struct TYPE_6__ {int codecpar; } ;
typedef TYPE_1__ AVStream ;
typedef TYPE_2__ AVFormatContext ;
typedef int AVDictionary ;
typedef int AVCodecContext ;
typedef int AVCodec ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int **,char*,char*,int ) ;
 int FUNC_2 (TYPE_2__*,int,int,int,int **,int ) ;
 char* FUNC_3 (int) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int **) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int ,char*,...) ;
 char* VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 TYPE_1__* VAR_4 ;
 size_t VAR_5 ;

__attribute__((used)) static int FUNC_8(AVFormatContext *VAR_6, enum AVMediaType VAR_7)
{
    int VAR_8;
    AVStream *VAR_9;
    AVCodecContext *VAR_10 = ((void*)0);
    AVCodec *VAR_11 = ((void*)0);
    AVDictionary *VAR_12 = ((void*)0);

    VAR_8 = FUNC_2(VAR_6, VAR_7, -1, -1, &VAR_11, 0);
    if (VAR_8 < 0) {
        FUNC_7(VAR_2, "Could not find %s stream in input file '%s'\n",
                FUNC_3(VAR_7), VAR_1);
        return VAR_8;
    } else {
        int VAR_13 = VAR_8;
        VAR_9 = VAR_6->streams[VAR_13];

        VAR_10 = FUNC_4(VAR_11);
        if (!VAR_10) {
            FUNC_7(VAR_2, "Failed to allocate codec\n");
            return FUNC_0(VAR_0);
        }

        VAR_8 = FUNC_6(VAR_10, VAR_9->codecpar);
        if (VAR_8 < 0) {
            FUNC_7(VAR_2, "Failed to copy codec parameters to codec context\n");
            return VAR_8;
        }


        FUNC_1(&VAR_12, "flags2", "+export_mvs", 0);
        if ((VAR_8 = FUNC_5(VAR_10, VAR_11, &VAR_12)) < 0) {
            FUNC_7(VAR_2, "Failed to open %s codec\n",
                    FUNC_3(VAR_7));
            return VAR_8;
        }

        VAR_5 = VAR_13;
        VAR_4 = VAR_6->streams[VAR_5];
        VAR_3 = VAR_10;
    }

    return 0;
}
