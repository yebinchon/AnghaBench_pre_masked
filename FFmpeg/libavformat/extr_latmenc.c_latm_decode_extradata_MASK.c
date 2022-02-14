
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {TYPE_2__* priv_data; } ;
struct TYPE_9__ {int off; scalar_t__ object_type; int channel_conf; } ;
struct TYPE_8__ {scalar_t__ object_type; int chan_config; } ;
typedef TYPE_1__ MPEG4AudioConfig ;
typedef TYPE_2__ LATMContext ;
typedef TYPE_3__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_3__*,int ,char*,...) ;
 int FUNC_1 (TYPE_1__*,int *,int,int,TYPE_3__*) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_5, uint8_t *VAR_6, int VAR_7)
{
    LATMContext *VAR_8 = VAR_5->priv_data;
    MPEG4AudioConfig VAR_9;

    if (VAR_7 > VAR_4) {
        FUNC_0(VAR_5, VAR_3, "Extradata is larger than currently supported.\n");
        return VAR_2;
    }
    VAR_8->off = FUNC_1(&VAR_9, VAR_6, VAR_7, 1, VAR_5);
    if (VAR_8->off < 0)
        return VAR_8->off;

    if (VAR_8->object_type == VAR_0 && (VAR_8->off & 7)) {

        FUNC_0(VAR_5, VAR_3, "BUG: ALS offset is not byte-aligned\n");
        return VAR_2;
    }


    if (VAR_9.object_type > VAR_1 && VAR_9.object_type != VAR_0) {
        FUNC_0(VAR_5, VAR_3, "Muxing MPEG-4 AOT %d in LATM is not supported\n", VAR_9.object_type);
        return VAR_2;
    }
    VAR_8->channel_conf = VAR_9.chan_config;
    VAR_8->object_type = VAR_9.object_type;

    return 0;
}
