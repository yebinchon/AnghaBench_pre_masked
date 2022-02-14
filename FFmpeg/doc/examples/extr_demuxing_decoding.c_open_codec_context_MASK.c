
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef enum AVMediaType { ____Placeholder_AVMediaType } AVMediaType ;
struct TYPE_8__ {int codec_id; } ;
struct TYPE_7__ {TYPE_1__** streams; } ;
struct TYPE_6__ {TYPE_4__* codecpar; } ;
typedef TYPE_1__ AVStream ;
typedef TYPE_2__ AVFormatContext ;
typedef int AVDictionary ;
typedef int AVCodecContext ;
typedef int AVCodec ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int **,char*,char*,int ) ;
 int FUNC_2 (TYPE_2__*,int,int,int,int *,int ) ;
 char* FUNC_3 (int) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int *,int *,int **) ;
 int FUNC_7 (int *,TYPE_4__*) ;
 int FUNC_8 (int ,char*,char*,...) ;
 scalar_t__ VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_9(int *VAR_5,
                              AVCodecContext **VAR_6, AVFormatContext *VAR_7, enum AVMediaType VAR_8)
{
    int VAR_9, VAR_10;
    AVStream *VAR_11;
    AVCodec *VAR_12 = ((void*)0);
    AVDictionary *VAR_13 = ((void*)0);

    VAR_9 = FUNC_2(VAR_7, VAR_8, -1, -1, ((void*)0), 0);
    if (VAR_9 < 0) {
        FUNC_8(VAR_4, "Could not find %s stream in input file '%s'\n",
                FUNC_3(VAR_8), VAR_3);
        return VAR_9;
    } else {
        VAR_10 = VAR_9;
        VAR_11 = VAR_7->streams[VAR_10];


        VAR_12 = FUNC_5(VAR_11->codecpar->codec_id);
        if (!VAR_12) {
            FUNC_8(VAR_4, "Failed to find %s codec\n",
                    FUNC_3(VAR_8));
            return FUNC_0(VAR_0);
        }


        *VAR_6 = FUNC_4(VAR_12);
        if (!*VAR_6) {
            FUNC_8(VAR_4, "Failed to allocate the %s codec context\n",
                    FUNC_3(VAR_8));
            return FUNC_0(VAR_1);
        }


        if ((VAR_9 = FUNC_7(*VAR_6, VAR_11->codecpar)) < 0) {
            FUNC_8(VAR_4, "Failed to copy %s codec parameters to decoder context\n",
                    FUNC_3(VAR_8));
            return VAR_9;
        }


        FUNC_1(&VAR_13, "refcounted_frames", VAR_2 ? "1" : "0", 0);
        if ((VAR_9 = FUNC_6(*VAR_6, VAR_12, &VAR_13)) < 0) {
            FUNC_8(VAR_4, "Failed to open %s codec\n",
                    FUNC_3(VAR_8));
            return VAR_9;
        }
        *VAR_5 = VAR_10;
    }

    return 0;
}
