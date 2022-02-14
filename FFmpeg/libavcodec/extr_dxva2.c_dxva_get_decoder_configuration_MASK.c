
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_12__ {scalar_t__ codec_id; } ;
struct TYPE_11__ {int ConfigBitstreamRaw; int guidConfigBitstreamEncryption; } ;
struct TYPE_10__ {int ConfigBitstreamRaw; int guidConfigBitstreamEncryption; } ;
struct TYPE_9__ {scalar_t__ pix_fmt; } ;
typedef int GUID ;
typedef TYPE_1__ FFDXVASharedContext ;
typedef TYPE_2__ DXVA2_ConfigPictureDecode ;
typedef TYPE_3__ D3D11_VIDEO_DECODER_CONFIG ;
typedef TYPE_4__ AVCodecContext ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* FUNC_1 (TYPE_4__*) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (TYPE_4__*,int ,char*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_6,
                                          const void *VAR_7,
                                          unsigned VAR_8)
{
    FFDXVASharedContext *VAR_9 = FUNC_1(VAR_6);
    unsigned VAR_10, VAR_11 = 0;
    int VAR_12 = -1;

    for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {
        unsigned VAR_13;
        UINT VAR_14;
        GUID VAR_15;
        if (VAR_14 == 1)
            VAR_13 = 1;
        else if (VAR_6->codec_id == VAR_0 && VAR_14 == 2)
            VAR_13 = 2;
        else
            continue;
        if (FUNC_2(&VAR_15, &VAR_5))
            VAR_13 += 16;
        if (VAR_13 > VAR_11) {
            VAR_11 = VAR_13;
            VAR_12 = VAR_10;
        }
    }

    if (!VAR_11) {
        FUNC_3(VAR_6, VAR_1, "No valid decoder configuration available\n");
        return FUNC_0(VAR_4);
    }

    return VAR_12;
}
