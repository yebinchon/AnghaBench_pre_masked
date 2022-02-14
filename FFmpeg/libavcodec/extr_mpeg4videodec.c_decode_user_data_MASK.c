
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ size_in_bits; } ;
struct TYPE_9__ {int divx_packed; int avctx; } ;
struct TYPE_10__ {int divx_version; int divx_build; int lavc_build; int xvid_build; TYPE_1__ m; } ;
typedef TYPE_1__ MpegEncContext ;
typedef TYPE_2__ Mpeg4DecContext ;
typedef TYPE_3__ GetBitContext ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*,int,int,int) ;
 char FUNC_1 (TYPE_3__*,int) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (char*,char*,int*,...) ;
 scalar_t__ FUNC_5 (char*,char*) ;

__attribute__((used)) static int FUNC_6(Mpeg4DecContext *VAR_1, GetBitContext *VAR_2)
{
    MpegEncContext *VAR_3 = &VAR_1->m;
    char VAR_4[256];
    int VAR_5;
    int VAR_6;
    int VAR_7 = 0, VAR_8 = 0, VAR_9 = 0, VAR_10 = 0;
    char VAR_11;

    for (VAR_5 = 0; VAR_5 < 255 && FUNC_2(VAR_2) < VAR_2->size_in_bits; VAR_5++) {
        if (FUNC_3(VAR_2, 23) == 0)
            break;
        VAR_4[VAR_5] = FUNC_1(VAR_2, 8);
    }
    VAR_4[VAR_5] = 0;


    VAR_6 = FUNC_4(VAR_4, "DivX%dBuild%d%c", &VAR_7, &VAR_8, &VAR_11);
    if (VAR_6 < 2)
        VAR_6 = FUNC_4(VAR_4, "DivX%db%d%c", &VAR_7, &VAR_8, &VAR_11);
    if (VAR_6 >= 2) {
        VAR_1->divx_version = VAR_7;
        VAR_1->divx_build = VAR_8;
        VAR_3->divx_packed = VAR_6 == 3 && VAR_11 == 'p';
    }


    VAR_6 = FUNC_4(VAR_4, "FFmpe%*[^b]b%d", &VAR_8) + 3;
    if (VAR_6 != 4)
        VAR_6 = FUNC_4(VAR_4, "FFmpeg v%d.%d.%d / libavcodec build: %d", &VAR_7, &VAR_9, &VAR_10, &VAR_8);
    if (VAR_6 != 4) {
        VAR_6 = FUNC_4(VAR_4, "Lavc%d.%d.%d", &VAR_7, &VAR_9, &VAR_10) + 1;
        if (VAR_6 > 1) {
            if (VAR_7 > 0xFFU || VAR_9 > 0xFFU || VAR_10 > 0xFFU) {
                FUNC_0(VAR_3->avctx, VAR_0,
                     "Unknown Lavc version string encountered, %d.%d.%d; "
                     "clamping sub-version values to 8-bits.\n",
                     VAR_7, VAR_9, VAR_10);
            }
            VAR_8 = ((VAR_7 & 0xFF) << 16) + ((VAR_9 & 0xFF) << 8) + (VAR_10 & 0xFF);
        }
    }
    if (VAR_6 != 4) {
        if (FUNC_5(VAR_4, "ffmpeg") == 0)
            VAR_1->lavc_build = 4600;
    }
    if (VAR_6 == 4)
        VAR_1->lavc_build = VAR_8;


    VAR_6 = FUNC_4(VAR_4, "XviD%d", &VAR_8);
    if (VAR_6 == 1)
        VAR_1->xvid_build = VAR_8;

    return 0;
}
