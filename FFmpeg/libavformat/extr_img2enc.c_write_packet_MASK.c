
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_8__ ;
typedef struct TYPE_34__ TYPE_7__ ;
typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;


typedef int time_t ;
struct tm {int dummy; } ;
typedef int filename ;
struct TYPE_30__ {char* path; int img_number; char** tmp; char** target; int is_pipe; scalar_t__ muxer; scalar_t__ split_planes; scalar_t__ use_rename; scalar_t__ frame_pts; scalar_t__ use_strftime; scalar_t__ update; } ;
typedef TYPE_3__ VideoMuxData ;
struct TYPE_35__ {int width; int height; int format; } ;
struct TYPE_34__ {scalar_t__ (* io_open ) (TYPE_7__*,int **,char*,int ,int *) ;TYPE_1__** streams; int * pb; int url; TYPE_3__* priv_data; } ;
struct TYPE_33__ {size_t stream_index; int pts; int size; scalar_t__ data; int member_0; } ;
struct TYPE_32__ {int nb_components; TYPE_2__* comp; int log2_chroma_h; int log2_chroma_w; } ;
struct TYPE_31__ {size_t id; int codecpar; } ;
struct TYPE_29__ {int depth; } ;
struct TYPE_28__ {TYPE_8__* codecpar; } ;
typedef TYPE_4__ AVStream ;
typedef TYPE_5__ AVPixFmtDescriptor ;
typedef TYPE_6__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_7__ AVFormatContext ;
typedef TYPE_8__ AVCodecParameters ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (char*,int,char*,int,int ) ;
 int FUNC_4 (TYPE_7__*,TYPE_6__*) ;
 int FUNC_5 (TYPE_7__*,int ,char*,...) ;
 int FUNC_6 (TYPE_6__*,TYPE_6__*) ;
 int FUNC_7 (TYPE_6__*) ;
 TYPE_5__* FUNC_8 (int ) ;
 int FUNC_9 (char*,char*,int) ;
 int FUNC_10 (TYPE_7__*) ;
 int FUNC_11 (int ,TYPE_8__*) ;
 int FUNC_12 (TYPE_7__**,int *,scalar_t__,int ) ;
 int FUNC_13 (TYPE_7__*) ;
 TYPE_4__* FUNC_14 (TYPE_7__*,int *) ;
 int FUNC_15 (TYPE_7__*,int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,scalar_t__,int) ;
 int FUNC_18 (TYPE_7__*,int **) ;
 int FUNC_19 (char*,char*,TYPE_7__*) ;
 struct tm* FUNC_20 (int *,struct tm*) ;
 int FUNC_21 (char*,int,char*,char*) ;
 int FUNC_22 (char*,int,char*,struct tm*) ;
 int FUNC_23 (char*) ;
 scalar_t__ FUNC_24 (TYPE_7__*,int **,char*,int ,int *) ;
 int FUNC_25 (int *) ;

__attribute__((used)) static int FUNC_26(AVFormatContext *VAR_6, AVPacket *VAR_7)
{
    VideoMuxData *VAR_8 = VAR_6->priv_data;
    AVIOContext *VAR_9[4];
    char VAR_10[1024];
    AVCodecParameters *VAR_11 = VAR_6->streams[VAR_7->stream_index]->codecpar;
    const AVPixFmtDescriptor *VAR_12 = FUNC_8(VAR_11->format);
    int VAR_13;
    int VAR_14 = 0;

    if (!VAR_8->is_pipe) {
        if (VAR_8->update) {
            FUNC_9(VAR_10, VAR_8->path, sizeof(VAR_10));
        } else if (VAR_8->use_strftime) {
            time_t VAR_15;
            struct tm *VAR_16, VAR_17;
            FUNC_25(&VAR_15);
            VAR_16 = FUNC_20(&VAR_15, &VAR_17);
            if (!FUNC_22(VAR_10, sizeof(VAR_10), VAR_8->path, VAR_16)) {
                FUNC_5(VAR_6, VAR_2, "Could not get frame filename with strftime\n");
                return FUNC_0(VAR_3);
            }
        } else if (VAR_8->frame_pts) {
            if (FUNC_3(VAR_10, sizeof(VAR_10), VAR_8->path, VAR_7->pts, VAR_1) < 0) {
                FUNC_5(VAR_6, VAR_2, "Cannot write filename by pts of the frames.");
                return FUNC_0(VAR_3);
            }
        } else if (FUNC_3(VAR_10, sizeof(VAR_10), VAR_8->path,
                                          VAR_8->img_number,
                                          VAR_1) < 0 &&
                   VAR_8->img_number > 1) {
            FUNC_5(VAR_6, VAR_2,
                   "Could not get frame filename number %d from pattern '%s'. "
                   "Use '-frames:v 1' for a single image, or '-update' option, or use a pattern such as %%03d within the filename.\n",
                   VAR_8->img_number, VAR_8->path);
            return FUNC_0(VAR_3);
        }
        for (VAR_13 = 0; VAR_13 < 4; VAR_13++) {
            FUNC_21(VAR_8->tmp[VAR_13], sizeof(VAR_8->tmp[VAR_13]), "%s.tmp", VAR_10);
            FUNC_9(VAR_8->target[VAR_13], VAR_10, sizeof(VAR_8->target[VAR_13]));
            if (VAR_6->io_open(VAR_6, &VAR_9[VAR_13], VAR_8->use_rename ? VAR_8->tmp[VAR_13] : VAR_10, VAR_0, ((void*)0)) < 0) {
                FUNC_5(VAR_6, VAR_2, "Could not open file : %s\n", VAR_8->use_rename ? VAR_8->tmp[VAR_13] : VAR_10);
                return FUNC_0(VAR_4);
            }

            if (!VAR_8->split_planes || VAR_13+1 >= VAR_12->nb_components)
                break;
            VAR_10[FUNC_23(VAR_10) - 1] = "UVAx"[VAR_13];
        }
        if (VAR_8->use_rename)
            VAR_14 = VAR_13 + 1;
    } else {
        VAR_9[0] = VAR_6->pb;
    }

    if (VAR_8->split_planes) {
        int VAR_18 = VAR_11->width * VAR_11->height;
        int VAR_19 = FUNC_1(VAR_11->width, VAR_12->log2_chroma_w) * FUNC_1(VAR_11->height, VAR_12->log2_chroma_h);
        if (VAR_12->comp[0].depth >= 9) {
            VAR_18 *= 2;
            VAR_19 *= 2;
        }
        FUNC_17(VAR_9[0], VAR_7->data , VAR_18);
        FUNC_17(VAR_9[1], VAR_7->data + VAR_18 , VAR_19);
        FUNC_17(VAR_9[2], VAR_7->data + VAR_18 + VAR_19, VAR_19);
        FUNC_18(VAR_6, &VAR_9[1]);
        FUNC_18(VAR_6, &VAR_9[2]);
        if (VAR_12->nb_components > 3) {
            FUNC_17(VAR_9[3], VAR_7->data + VAR_18 + 2*VAR_19, VAR_18);
            FUNC_18(VAR_6, &VAR_9[3]);
        }
    } else if (VAR_8->muxer) {
        int VAR_20;
        AVStream *VAR_21;
        AVPacket VAR_22 = {0};
        AVFormatContext *VAR_23 = ((void*)0);

        FUNC_2(!VAR_8->split_planes);

        VAR_20 = FUNC_12(&VAR_23, ((void*)0), VAR_8->muxer, VAR_6->url);
        if (VAR_20 < 0)
            return VAR_20;
        VAR_21 = FUNC_14(VAR_23, ((void*)0));
        if (!VAR_21) {
            FUNC_13(VAR_23);
            return FUNC_0(VAR_5);
        }
        VAR_21->id = VAR_7->stream_index;

        VAR_23->pb = VAR_9[0];
        if ((VAR_20 = FUNC_6(&VAR_22, VAR_7)) < 0 ||
            (VAR_20 = FUNC_11(VAR_21->codecpar, VAR_6->streams[0]->codecpar)) < 0 ||
            (VAR_20 = FUNC_15(VAR_23, ((void*)0))) < 0 ||
            (VAR_20 = FUNC_4(VAR_23, &VAR_22)) < 0 ||
            (VAR_20 = FUNC_10(VAR_23)) < 0) {
            FUNC_7(&VAR_22);
            FUNC_13(VAR_23);
            return VAR_20;
        }
        FUNC_7(&VAR_22);
        FUNC_13(VAR_23);
    } else {
        FUNC_17(VAR_9[0], VAR_7->data, VAR_7->size);
    }
    FUNC_16(VAR_9[0]);
    if (!VAR_8->is_pipe) {
        FUNC_18(VAR_6, &VAR_9[0]);
        for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {
            int VAR_24 = FUNC_19(VAR_8->tmp[VAR_13], VAR_8->target[VAR_13], VAR_6);
            if (VAR_24 < 0)
                return VAR_24;
        }
    }

    VAR_8->img_number++;
    return 0;
}
