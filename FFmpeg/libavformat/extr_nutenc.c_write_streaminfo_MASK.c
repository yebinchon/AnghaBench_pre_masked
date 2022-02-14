
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
typedef int buf ;
struct TYPE_19__ {int flag; int * str; } ;
struct TYPE_18__ {char* key; int * value; } ;
struct TYPE_17__ {TYPE_5__** streams; } ;
struct TYPE_14__ {int num; int den; } ;
struct TYPE_13__ {int num; int den; } ;
struct TYPE_16__ {int disposition; TYPE_3__ avg_frame_rate; TYPE_2__ r_frame_rate; TYPE_1__* codecpar; int metadata; } ;
struct TYPE_15__ {TYPE_6__* avf; } ;
struct TYPE_12__ {scalar_t__ codec_type; } ;
typedef TYPE_4__ NUTContext ;
typedef TYPE_5__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_6__ AVFormatContext ;
typedef TYPE_7__ AVDictionaryEntry ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,char*,int *) ;
 TYPE_7__* FUNC_1 (int ,char*,TYPE_7__*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int **) ;
 int FUNC_4 (int **) ;
 int FUNC_5 (int *,int *,int) ;
 TYPE_9__* VAR_2 ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int,char*,int,int) ;

__attribute__((used)) static int FUNC_8(NUTContext *VAR_3, AVIOContext *VAR_4, int VAR_5) {
    AVFormatContext *VAR_6= VAR_3->avf;
    AVStream* VAR_7 = VAR_6->streams[VAR_5];
    AVDictionaryEntry *VAR_8 = ((void*)0);
    AVIOContext *VAR_9;
    uint8_t *VAR_10=((void*)0);
    int VAR_11=0, VAR_12, VAR_13;
    int VAR_14 = FUNC_4(&VAR_9);
    if (VAR_14 < 0)
        return VAR_14;

    while ((VAR_8 = FUNC_1(VAR_7->metadata, "", VAR_8, VAR_1)))
        VAR_11 += FUNC_0(VAR_9, VAR_8->key, VAR_8->value);
    for (VAR_13=0; VAR_2[VAR_13].flag; ++VAR_13) {
        if (VAR_7->disposition & VAR_2[VAR_13].flag)
            VAR_11 += FUNC_0(VAR_9, "Disposition", VAR_2[VAR_13].str);
    }
    if (VAR_7->codecpar->codec_type == VAR_0) {
        uint8_t VAR_15[256];
        if (VAR_7->r_frame_rate.num>0 && VAR_7->r_frame_rate.den>0)
            FUNC_7(VAR_15, sizeof(VAR_15), "%d/%d", VAR_7->r_frame_rate.num, VAR_7->r_frame_rate.den);
        else
            FUNC_7(VAR_15, sizeof(VAR_15), "%d/%d", VAR_7->avg_frame_rate.num, VAR_7->avg_frame_rate.den);
        VAR_11 += FUNC_0(VAR_9, "r_frame_rate", VAR_15);
    }
    VAR_12 = FUNC_3(VAR_9, &VAR_10);

    if (VAR_11) {
        FUNC_6(VAR_4, VAR_5 + 1);
        FUNC_6(VAR_4, 0);
        FUNC_6(VAR_4, 0);
        FUNC_6(VAR_4, 0);

        FUNC_6(VAR_4, VAR_11);

        FUNC_5(VAR_4, VAR_10, VAR_12);
    }

    FUNC_2(VAR_10);
    return VAR_11;
}
