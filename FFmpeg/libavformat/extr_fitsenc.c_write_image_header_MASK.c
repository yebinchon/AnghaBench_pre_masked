
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef char uint8_t ;
typedef int buffer ;
struct TYPE_10__ {int format; int width; int height; } ;
struct TYPE_9__ {int pb; TYPE_1__* priv_data; TYPE_2__** streams; } ;
struct TYPE_8__ {TYPE_4__* codecpar; } ;
struct TYPE_7__ {scalar_t__ first_image; } ;
typedef TYPE_1__ FITSContext ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVFormatContext ;
typedef TYPE_4__ AVCodecParameters ;


 int FUNC_0 (int ) ;






 int VAR_0 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,char,int) ;
 int FUNC_4 (TYPE_3__*,char*,int,int*) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_1)
{
    AVStream *VAR_2 = VAR_1->streams[0];
    AVCodecParameters *VAR_3 = VAR_2->codecpar;
    FITSContext *VAR_4 = VAR_1->priv_data;
    uint8_t VAR_5[80];
    int VAR_6, VAR_7, VAR_8 = 1, VAR_9 = 0, VAR_10 = 0, VAR_11 = 0, VAR_12;

    switch (VAR_3->format) {
        case 128:
            VAR_6 = 8;
            VAR_7 = 2;
            break;
        case 129:
            VAR_6 = 16;
            VAR_7 = 2;
            VAR_9 = 32768;
            break;
        case 131:
        case 133:
            VAR_6 = 8;
            VAR_7 = 3;
            VAR_10 = 1;
            if (VAR_3->format == 131) {
                VAR_8 = 3;
            } else {
                VAR_8 = 4;
            }
            break;
        case 130:
        case 132:
            VAR_6 = 16;
            VAR_7 = 3;
            VAR_10 = 1;
            if (VAR_3->format == 130) {
                VAR_8 = 3;
            } else {
                VAR_8 = 4;
            }
            VAR_9 = 32768;
            break;
        default:
            return FUNC_0(VAR_0);
    }

    if (VAR_4->first_image) {
        FUNC_2(VAR_5, "SIMPLE  = ", 10);
        FUNC_3(VAR_5 + 10, ' ', 70);
        VAR_5[29] = 'T';
        FUNC_1(VAR_1->pb, VAR_5, sizeof(VAR_5));
    } else {
        FUNC_2(VAR_5, "XTENSION= 'IMAGE   '", 20);
        FUNC_3(VAR_5 + 20, ' ', 60);
        FUNC_1(VAR_1->pb, VAR_5, sizeof(VAR_5));
    }
    VAR_11++;

    FUNC_4(VAR_1, "BITPIX", VAR_6, &VAR_11);
    FUNC_4(VAR_1, "NAXIS", VAR_7, &VAR_11);
    FUNC_4(VAR_1, "NAXIS1", VAR_3->width, &VAR_11);
    FUNC_4(VAR_1, "NAXIS2", VAR_3->height, &VAR_11);

    if (VAR_10)
        FUNC_4(VAR_1, "NAXIS3", VAR_8, &VAR_11);

    if (!VAR_4->first_image) {
        FUNC_4(VAR_1, "PCOUNT", 0, &VAR_11);
        FUNC_4(VAR_1, "GCOUNT", 1, &VAR_11);
    } else {
        VAR_4->first_image = 0;
    }






    if (VAR_6 == 16)
        FUNC_4(VAR_1, "BZERO", VAR_9, &VAR_11);

    if (VAR_10) {
        FUNC_2(VAR_5, "CTYPE3  = 'RGB     '", 20);
        FUNC_3(VAR_5 + 20, ' ', 60);
        FUNC_1(VAR_1->pb, VAR_5, sizeof(VAR_5));
        VAR_11++;
    }

    FUNC_2(VAR_5, "END", 3);
    FUNC_3(VAR_5 + 3, ' ', 77);
    FUNC_1(VAR_1->pb, VAR_5, sizeof(VAR_5));
    VAR_11++;

    VAR_12 = ((VAR_11 + 35) / 36) * 36 - VAR_11;
    FUNC_3(VAR_5, ' ', 80);
    while (VAR_12 > 0) {
        FUNC_1(VAR_1->pb, VAR_5, sizeof(VAR_5));
        VAR_12--;
    }
    return 0;
}
