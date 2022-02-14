
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef int value ;
struct TYPE_26__ {TYPE_1__* priv; TYPE_3__** outputs; } ;
struct TYPE_25__ {TYPE_4__* dst; } ;
struct TYPE_24__ {int * metadata; int height; int width; } ;
struct TYPE_23__ {int nb_frames; int* history; int history_pos; int badness_threshold; TYPE_2__* last_frame_av; void* last_frame_e; int skip; scalar_t__ bypass; } ;
typedef void* PhotosensitivityFrame ;
typedef TYPE_1__ PhotosensitivityContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;
typedef int AVDictionary ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int **,char*,char*,int ) ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_2__**) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*,int ,char*,int,int,int,int,...) ;
 int FUNC_7 (TYPE_4__*,TYPE_2__*,TYPE_2__*,float) ;
 int FUNC_8 (TYPE_4__*,TYPE_2__*,void**,int ) ;
 int FUNC_9 (TYPE_3__*,TYPE_2__*) ;
 TYPE_2__* FUNC_10 (TYPE_3__*,int ,int ) ;
 int FUNC_11 (void**,void**) ;
 int FUNC_12 (char*,int,char*,float) ;

__attribute__((used)) static int FUNC_13(AVFilterLink *VAR_2, AVFrame *VAR_3)
{
    int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
    PhotosensitivityFrame VAR_10;
    AVFrame *VAR_11, *VAR_12;
    int VAR_13 = 0;
    float VAR_14;
    AVDictionary **VAR_15;

    AVFilterContext *VAR_16 = VAR_2->dst;
    AVFilterLink *VAR_17 = VAR_16->outputs[0];
    PhotosensitivityContext *VAR_18 = VAR_16->priv;


    VAR_5 = 0;
    for (VAR_8 = 1; VAR_8 < VAR_18->nb_frames; VAR_8++)
        VAR_5 += VAR_8 * VAR_18->history[(VAR_18->history_pos + VAR_8) % VAR_18->nb_frames];
    VAR_5 /= VAR_18->nb_frames;

    FUNC_8(VAR_16, VAR_3, &VAR_10, VAR_18->skip);
    VAR_4 = FUNC_11(&VAR_10, &VAR_18->last_frame_e);
    VAR_7 = VAR_5 + VAR_4;
    FUNC_6(VAR_18, VAR_0, "badness: %6d -> %6d / %6d (%3d%% - %s)\n",
        VAR_5, VAR_7, VAR_18->badness_threshold,
        100 * VAR_7 / VAR_18->badness_threshold, VAR_7 < VAR_18->badness_threshold ? "OK" : "EXCEEDED");

    VAR_6 = VAR_7;
    if (VAR_7 < VAR_18->badness_threshold || !VAR_18->last_frame_av || VAR_18->bypass) {
        VAR_14 = 1;
        FUNC_4(&VAR_18->last_frame_av);
        VAR_18->last_frame_av = VAR_11 = VAR_3;
        VAR_18->last_frame_e = VAR_10;
        VAR_18->history[VAR_18->history_pos] = VAR_4;
    } else {
        VAR_14 = (float)(VAR_18->badness_threshold - VAR_5) / (VAR_7 - VAR_5);
        if (VAR_14 <= 0) {

            VAR_18->history[VAR_18->history_pos] = 0;
        } else {
            VAR_9 = FUNC_5(VAR_18->last_frame_av);
            if (VAR_9) {
                FUNC_4(&VAR_3);
                return VAR_9;
            }
            FUNC_7(VAR_16, VAR_18->last_frame_av, VAR_3, VAR_14);

            FUNC_8(VAR_16, VAR_18->last_frame_av, &VAR_10, VAR_18->skip);
            VAR_4 = FUNC_11(&VAR_10, &VAR_18->last_frame_e);
            VAR_6 = VAR_5 + VAR_4;
            FUNC_6(VAR_18, VAR_0, "  fixed: %6d -> %6d / %6d (%3d%%) factor=%5.3f\n",
                VAR_5, VAR_6, VAR_18->badness_threshold,
                100 * VAR_7 / VAR_18->badness_threshold, VAR_14);
            VAR_18->last_frame_e = VAR_10;
            VAR_18->history[VAR_18->history_pos] = VAR_4;
        }
        VAR_11 = VAR_18->last_frame_av;
        VAR_13 = 1;
    }
    VAR_18->history_pos = (VAR_18->history_pos + 1) % VAR_18->nb_frames;

    VAR_12 = FUNC_10(VAR_17, VAR_3->width, VAR_3->height);
    if (!VAR_12) {
        if (VAR_13 == 1)
            FUNC_4(&VAR_3);
        return FUNC_0(VAR_1);
    }
    FUNC_3(VAR_12, VAR_3);
    VAR_15 = &VAR_12->metadata;
    if (VAR_15) {
        char VAR_19[128];

        FUNC_12(VAR_19, sizeof(VAR_19), "%f", (float)VAR_7 / VAR_18->badness_threshold);
        FUNC_1(VAR_15, "lavfi.photosensitivity.badness", VAR_19, 0);

        FUNC_12(VAR_19, sizeof(VAR_19), "%f", (float)VAR_6 / VAR_18->badness_threshold);
        FUNC_1(VAR_15, "lavfi.photosensitivity.fixed-badness", VAR_19, 0);

        FUNC_12(VAR_19, sizeof(VAR_19), "%f", (float)VAR_4 / VAR_18->badness_threshold);
        FUNC_1(VAR_15, "lavfi.photosensitivity.frame-badness", VAR_19, 0);

        FUNC_12(VAR_19, sizeof(VAR_19), "%f", VAR_14);
        FUNC_1(VAR_15, "lavfi.photosensitivity.factor", VAR_19, 0);
    }
    FUNC_2(VAR_12, VAR_11);
    if (VAR_13 == 1)
        FUNC_4(&VAR_3);
    return FUNC_9(VAR_17, VAR_12);
}
