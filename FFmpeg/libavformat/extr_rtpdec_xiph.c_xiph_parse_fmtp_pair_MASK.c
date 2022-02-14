
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {void* height; void* width; int format; } ;
struct TYPE_5__ {TYPE_2__* codecpar; } ;
typedef int PayloadContext ;
typedef TYPE_1__ AVStream ;
typedef int AVFormatContext ;
typedef TYPE_2__ AVCodecParameters ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 void* FUNC_1 (char const*) ;
 int FUNC_2 (int *,char const*,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,char*,...) ;
 int * FUNC_5 (size_t) ;
 int FUNC_6 (int *,int *,int *,TYPE_2__*,int *) ;
 int FUNC_7 (char const*,char*) ;
 int FUNC_8 (char const*) ;

__attribute__((used)) static int FUNC_9(AVFormatContext *VAR_8,
                                AVStream* VAR_9,
                                PayloadContext *VAR_10,
                                const char *VAR_11, const char *VAR_12)
{
    AVCodecParameters *VAR_13 = VAR_9->codecpar;
    int VAR_14 = 0;

    if (!FUNC_7(VAR_11, "sampling")) {
        if (!FUNC_7(VAR_12, "YCbCr-4:2:0")) {
            VAR_13->format = VAR_3;
        } else if (!FUNC_7(VAR_12, "YCbCr-4:4:2")) {
            VAR_13->format = VAR_4;
        } else if (!FUNC_7(VAR_12, "YCbCr-4:4:4")) {
            VAR_13->format = VAR_5;
        } else {
            FUNC_4(VAR_8, VAR_2,
                   "Unsupported pixel format %s\n", VAR_11);
            return VAR_0;
        }
    } else if (!FUNC_7(VAR_11, "width")) {


        VAR_13->width = FUNC_1(VAR_12);
        return 0;
    } else if (!FUNC_7(VAR_11, "height")) {


        VAR_13->height = FUNC_1(VAR_12);
        return 0;
    } else if (!FUNC_7(VAR_11, "delivery-method")) {

        return VAR_1;
    } else if (!FUNC_7(VAR_11, "configuration-uri")) {



        return VAR_1;
    } else if (!FUNC_7(VAR_11, "configuration")) {


        uint8_t *VAR_15 = ((void*)0);
        int VAR_16;
        size_t VAR_17 = FUNC_8(VAR_12) / 4 * 3 + 4;

        if (VAR_17 <= VAR_7) {
            VAR_15 = FUNC_5(VAR_17);
            if (VAR_15) {
                VAR_16 =
                    FUNC_2(VAR_15, VAR_12, VAR_17);

                VAR_14 = FUNC_6
                    (VAR_8, VAR_15, VAR_15 + VAR_16, VAR_13,
                    VAR_10);
            } else {
                FUNC_4(VAR_8, VAR_2,
                       "Out of memory while decoding SDP configuration.\n");
                VAR_14 = FUNC_0(VAR_6);
            }
        } else {
            FUNC_4(VAR_8, VAR_2, "Packet too large\n");
            VAR_14 = VAR_0;
        }
        FUNC_3(VAR_15);
    }
    return VAR_14;
}
