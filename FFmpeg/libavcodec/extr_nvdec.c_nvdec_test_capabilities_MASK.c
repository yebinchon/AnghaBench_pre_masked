
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int nMaxMBCount; int nMinWidth; int nMaxWidth; int nMinHeight; int nMaxHeight; scalar_t__ bIsSupported; int nBitDepthMinus8; int eChromaFormat; int eCodecType; int member_0; } ;
struct TYPE_10__ {int ulWidth; int ulHeight; int bitDepthMinus8; int ChromaFormat; int CodecType; } ;
struct TYPE_9__ {TYPE_1__* cvdl; } ;
struct TYPE_8__ {int (* cuvidGetDecoderCaps ) (TYPE_4__*) ;} ;
typedef TYPE_2__ NVDECDecoder ;
typedef TYPE_3__ CUVIDDECODECREATEINFO ;
typedef TYPE_4__ CUVIDDECODECAPS ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (void*,int ,char*,...) ;
 int FUNC_3 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_4(NVDECDecoder *VAR_4,
                                   CUVIDDECODECREATEINFO *VAR_5, void *VAR_6)
{
    int VAR_7;
    CUVIDDECODECAPS VAR_8 = { 0 };

    VAR_8.eCodecType = VAR_5->CodecType;
    VAR_8.eChromaFormat = VAR_5->ChromaFormat;
    VAR_8.nBitDepthMinus8 = VAR_5->bitDepthMinus8;

    if (!VAR_4->cvdl->cuvidGetDecoderCaps) {
        FUNC_2(VAR_6, VAR_2, "Used Nvidia driver is too old to perform a capability check.\n");
        FUNC_2(VAR_6, VAR_2, "The minimum required version is "



            "378.13"

            ". Continuing blind.\n");
        return 0;
    }

    VAR_7 = FUNC_1(VAR_4->cvdl->cuvidGetDecoderCaps(&VAR_8));
    if (VAR_7 < 0)
        return VAR_7;

    FUNC_2(VAR_6, VAR_1, "NVDEC capabilities:\n");
    FUNC_2(VAR_6, VAR_1, "format supported: %s, max_mb_count: %d\n",
           VAR_8.bIsSupported ? "yes" : "no", VAR_8.nMaxMBCount);
    FUNC_2(VAR_6, VAR_1, "min_width: %d, max_width: %d\n",
           VAR_8.nMinWidth, VAR_8.nMaxWidth);
    FUNC_2(VAR_6, VAR_1, "min_height: %d, max_height: %d\n",
           VAR_8.nMinHeight, VAR_8.nMaxHeight);

    if (!VAR_8.bIsSupported) {
        FUNC_2(VAR_6, VAR_0, "Hardware is lacking required capabilities\n");
        return FUNC_0(VAR_3);
    }

    if (VAR_5->ulWidth > VAR_8.nMaxWidth || VAR_5->ulWidth < VAR_8.nMinWidth) {
        FUNC_2(VAR_6, VAR_0, "Video width %d not within range from %d to %d\n",
               (int)VAR_5->ulWidth, VAR_8.nMinWidth, VAR_8.nMaxWidth);
        return FUNC_0(VAR_3);
    }

    if (VAR_5->ulHeight > VAR_8.nMaxHeight || VAR_5->ulHeight < VAR_8.nMinHeight) {
        FUNC_2(VAR_6, VAR_0, "Video height %d not within range from %d to %d\n",
               (int)VAR_5->ulHeight, VAR_8.nMinHeight, VAR_8.nMaxHeight);
        return FUNC_0(VAR_3);
    }

    if ((VAR_5->ulWidth * VAR_5->ulHeight) / 256 > VAR_8.nMaxMBCount) {
        FUNC_2(VAR_6, VAR_0, "Video macroblock count %d exceeds maximum of %d\n",
               (int)(VAR_5->ulWidth * VAR_5->ulHeight) / 256, VAR_8.nMaxMBCount);
        return FUNC_0(VAR_3);
    }

    return 0;
}
