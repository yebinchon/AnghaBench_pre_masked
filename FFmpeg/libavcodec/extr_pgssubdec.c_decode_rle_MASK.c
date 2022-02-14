
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int err_recognition; } ;
struct TYPE_7__ {int w; int h; scalar_t__* data; } ;
typedef TYPE_1__ AVSubtitleRect ;
typedef TYPE_2__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,int ,char*,...) ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (int const**) ;
 int FUNC_4 (TYPE_2__*,char*,int,int) ;
 int FUNC_5 (scalar_t__,int,int) ;

__attribute__((used)) static int FUNC_6(AVCodecContext *VAR_4, AVSubtitleRect *VAR_5,
                      const uint8_t *VAR_6, unsigned int VAR_7)
{
    const uint8_t *VAR_8;
    int VAR_9, VAR_10;

    VAR_8 = VAR_6 + VAR_7;

    VAR_5->data[0] = FUNC_2(VAR_5->w, VAR_5->h);

    if (!VAR_5->data[0])
        return FUNC_0(VAR_3);

    VAR_9 = 0;
    VAR_10 = 0;

    while (VAR_6 < VAR_8 && VAR_10 < VAR_5->h) {
        uint8_t VAR_11, VAR_12;
        int VAR_13;

        VAR_12 = FUNC_3(&VAR_6);
        VAR_13 = 1;

        if (VAR_12 == 0x00) {
            VAR_11 = FUNC_3(&VAR_6);
            VAR_13 = VAR_11 & 0x3f;
            if (VAR_11 & 0x40)
                VAR_13 = (VAR_13 << 8) + FUNC_3(&VAR_6);
            VAR_12 = VAR_11 & 0x80 ? FUNC_3(&VAR_6) : 0;
        }

        if (VAR_13 > 0 && VAR_9 + VAR_13 <= VAR_5->w * VAR_5->h) {
            FUNC_5(VAR_5->data[0] + VAR_9, VAR_12, VAR_13);
            VAR_9 += VAR_13;
        } else if (!VAR_13) {




            if (VAR_9 % VAR_5->w > 0) {
                FUNC_1(VAR_4, VAR_2, "Decoded %d pixels, when line should be %d pixels\n",
                       VAR_9 % VAR_5->w, VAR_5->w);
                if (VAR_4->err_recognition & VAR_1) {
                    return VAR_0;
                }
            }
            VAR_10++;
        }
    }

    if (VAR_9 < VAR_5->w * VAR_5->h) {
        FUNC_1(VAR_4, VAR_2, "Insufficient RLE data for subtitle\n");
        return VAR_0;
    }

    FUNC_4(VAR_4, "Pixel Count = %d, Area = %d\n", VAR_9, VAR_5->w * VAR_5->h);

    return 0;
}
