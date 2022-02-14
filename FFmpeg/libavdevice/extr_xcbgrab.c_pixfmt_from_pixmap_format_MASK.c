
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int xcb_setup_t ;
struct TYPE_7__ {int depth; int bits_per_pixel; } ;
typedef TYPE_1__ xcb_format_t ;
struct TYPE_8__ {int bpp; int frame_size; int width; int height; int conn; } ;
typedef TYPE_2__ XCBGrabContext ;
struct TYPE_9__ {TYPE_2__* priv_data; } ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_3__*,char*) ;
 int * FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int const*) ;
 int FUNC_3 (int const*) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_7, int VAR_8,
                                     int *VAR_9)
{
    XCBGrabContext *VAR_10 = VAR_7->priv_data;
    const xcb_setup_t *VAR_11 = FUNC_1(VAR_10->conn);
    const xcb_format_t *VAR_12 = FUNC_2(VAR_11);
    int VAR_13 = FUNC_3(VAR_11);

    *VAR_9 = 0;

    while (VAR_13--) {
        if (VAR_12->depth == VAR_8) {
            switch (VAR_8) {
            case 32:
                if (VAR_12->bits_per_pixel == 32)
                    *VAR_9 = VAR_1;
                break;
            case 24:
                if (VAR_12->bits_per_pixel == 32)
                    *VAR_9 = VAR_2;
                else if (VAR_12->bits_per_pixel == 24)
                    *VAR_9 = VAR_3;
                break;
            case 16:
                if (VAR_12->bits_per_pixel == 16)
                    *VAR_9 = VAR_5;
                break;
            case 15:
                if (VAR_12->bits_per_pixel == 16)
                    *VAR_9 = VAR_4;
                break;
            case 8:
                if (VAR_12->bits_per_pixel == 8)
                    *VAR_9 = VAR_6;
                break;
            }
        }

        if (*VAR_9) {
            VAR_10->bpp = VAR_12->bits_per_pixel;
            VAR_10->frame_size = VAR_10->width * VAR_10->height * VAR_12->bits_per_pixel / 8;
            return 0;
        }

        VAR_12++;
    }
    FUNC_0(VAR_7, "Mapping this pixmap format");

    return VAR_0;
}
