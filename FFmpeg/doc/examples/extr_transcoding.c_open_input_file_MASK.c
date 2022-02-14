
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_19__ {int codec_id; } ;
struct TYPE_18__ {unsigned int nb_streams; TYPE_1__** streams; } ;
struct TYPE_17__ {TYPE_2__* dec_ctx; } ;
struct TYPE_16__ {scalar_t__ codec_type; int framerate; } ;
struct TYPE_15__ {TYPE_8__* codecpar; } ;
typedef TYPE_1__ AVStream ;
typedef TYPE_2__ AVCodecContext ;
typedef int AVCodec ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_4__*,int ,char const*,int ) ;
 int FUNC_2 (TYPE_4__*,TYPE_1__*,int *) ;
 int FUNC_3 (int *,int ,char*,...) ;
 TYPE_3__* FUNC_4 (unsigned int,int) ;
 TYPE_2__* FUNC_5 (int *) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*,int *,int *) ;
 int FUNC_8 (TYPE_2__*,TYPE_8__*) ;
 int FUNC_9 (TYPE_4__*,int *) ;
 int FUNC_10 (TYPE_4__**,char const*,int *,int *) ;
 TYPE_4__* VAR_5 ;
 TYPE_3__* VAR_6 ;

__attribute__((used)) static int FUNC_11(const char *VAR_7)
{
    int VAR_8;
    unsigned int VAR_9;

    VAR_5 = ((void*)0);
    if ((VAR_8 = FUNC_10(&VAR_5, VAR_7, ((void*)0), ((void*)0))) < 0) {
        FUNC_3(((void*)0), VAR_3, "Cannot open input file\n");
        return VAR_8;
    }

    if ((VAR_8 = FUNC_9(VAR_5, ((void*)0))) < 0) {
        FUNC_3(((void*)0), VAR_3, "Cannot find stream information\n");
        return VAR_8;
    }

    VAR_6 = FUNC_4(VAR_5->nb_streams, sizeof(*VAR_6));
    if (!VAR_6)
        return FUNC_0(VAR_4);

    for (VAR_9 = 0; VAR_9 < VAR_5->nb_streams; VAR_9++) {
        AVStream *VAR_10 = VAR_5->streams[VAR_9];
        AVCodec *VAR_11 = FUNC_6(VAR_10->codecpar->codec_id);
        AVCodecContext *VAR_12;
        if (!VAR_11) {
            FUNC_3(((void*)0), VAR_3, "Failed to find decoder for stream #%u\n", VAR_9);
            return VAR_0;
        }
        VAR_12 = FUNC_5(VAR_11);
        if (!VAR_12) {
            FUNC_3(((void*)0), VAR_3, "Failed to allocate the decoder context for stream #%u\n", VAR_9);
            return FUNC_0(VAR_4);
        }
        VAR_8 = FUNC_8(VAR_12, VAR_10->codecpar);
        if (VAR_8 < 0) {
            FUNC_3(((void*)0), VAR_3, "Failed to copy decoder parameters to input decoder context "
                   "for stream #%u\n", VAR_9);
            return VAR_8;
        }

        if (VAR_12->codec_type == VAR_2
                || VAR_12->codec_type == VAR_1) {
            if (VAR_12->codec_type == VAR_2)
                VAR_12->framerate = FUNC_2(VAR_5, VAR_10, ((void*)0));

            VAR_8 = FUNC_7(VAR_12, VAR_11, ((void*)0));
            if (VAR_8 < 0) {
                FUNC_3(((void*)0), VAR_3, "Failed to open decoder for stream #%u\n", VAR_9);
                return VAR_8;
            }
        }
        VAR_6[VAR_9].dec_ctx = VAR_12;
    }

    FUNC_1(VAR_5, 0, VAR_7, 0);
    return 0;
}
