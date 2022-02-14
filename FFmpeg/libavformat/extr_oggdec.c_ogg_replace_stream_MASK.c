
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
typedef void* uint32_t ;
struct ogg_stream {scalar_t__ private; int header; struct ogg_codec const* codec; int buf; int bufsize; void* serial; } ;
typedef struct ogg_codec const ogg_codec ;
struct ogg {int nstreams; struct ogg_stream* streams; TYPE_2__* state; } ;
typedef int magic ;
typedef int int64_t ;
struct TYPE_15__ {int seekable; } ;
struct TYPE_14__ {TYPE_7__* pb; struct ogg* priv_data; } ;
struct TYPE_13__ {TYPE_1__* streams; } ;
struct TYPE_12__ {scalar_t__ private; } ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (TYPE_3__*,int ,char*) ;
 int FUNC_2 (TYPE_7__*,int *,int) ;
 int FUNC_3 (TYPE_7__*,int ,int ) ;
 int FUNC_4 (TYPE_7__*,int) ;
 int FUNC_5 (TYPE_7__*) ;
 int FUNC_6 (TYPE_3__*,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (struct ogg_stream*,int ,int) ;
 struct ogg_codec const* FUNC_8 (int *,int) ;
 int FUNC_9 (TYPE_3__*,void*) ;

__attribute__((used)) static int FUNC_10(AVFormatContext *VAR_7, uint32_t VAR_8, int VAR_9)
{
    struct ogg *VAR_10 = VAR_7->priv_data;
    struct ogg_stream *VAR_11;
    const struct ogg_codec *VAR_12;
    int VAR_13 = 0;

    if (VAR_7->pb->seekable & VAR_2) {
        uint8_t VAR_14[8];
        int64_t VAR_15 = FUNC_5(VAR_7->pb);
        FUNC_4(VAR_7->pb, VAR_9);
        FUNC_2(VAR_7->pb, VAR_14, sizeof(VAR_14));
        FUNC_3(VAR_7->pb, VAR_15, VAR_4);
        VAR_12 = FUNC_8(VAR_14, sizeof(VAR_14));
        if (!VAR_12) {
            FUNC_1(VAR_7, VAR_3, "Cannot identify new stream\n");
            return VAR_0;
        }
        for (VAR_13 = 0; VAR_13 < VAR_10->nstreams; VAR_13++) {
            if (VAR_10->streams[VAR_13].codec == VAR_12)
                break;
        }
        if (VAR_13 >= VAR_10->nstreams)
            return FUNC_9(VAR_7, VAR_8);
    } else if (VAR_10->nstreams != 1) {
        FUNC_6(VAR_7, "Changing stream parameters in multistream ogg");
        return VAR_1;
    }

    VAR_11 = &VAR_10->streams[VAR_13];

    VAR_11->serial = VAR_8;
    return VAR_13;
}
