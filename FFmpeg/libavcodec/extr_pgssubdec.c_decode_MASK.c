
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_14__ {int err_recognition; } ;
struct TYPE_13__ {int* data; int size; } ;
struct TYPE_12__ {int pts; } ;
typedef TYPE_1__ AVSubtitle ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int FUNC_0 (TYPE_3__*,int ,char*,...) ;
 int FUNC_1 (int const**) ;
 int FUNC_2 (int const**) ;
 int FUNC_3 (TYPE_3__*,void*,int const*,int) ;
 int FUNC_4 (TYPE_3__*,char*,...) ;
 int FUNC_5 (TYPE_3__*,int const*,int) ;
 int FUNC_6 (TYPE_3__*,int const*,int) ;
 int FUNC_7 (TYPE_3__*,int const*,int,int ) ;

__attribute__((used)) static int FUNC_8(AVCodecContext *VAR_3, void *VAR_4, int *VAR_5,
                  AVPacket *VAR_6)
{
    const uint8_t *VAR_7 = VAR_6->data;
    int VAR_8 = VAR_6->size;

    const uint8_t *VAR_9;
    uint8_t VAR_10;
    int VAR_11;
    int VAR_12, VAR_13;

    FUNC_4(VAR_3, "PGS sub packet:\n");

    for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++) {
        FUNC_4(VAR_3, "%02x ", VAR_7[VAR_12]);
        if (VAR_12 % 16 == 15)
            FUNC_4(VAR_3, "\n");
    }

    if (VAR_12 & 15)
        FUNC_4(VAR_3, "\n");

    *VAR_5 = 0;


    if (VAR_8 < 3)
        return -1;

    VAR_9 = VAR_7 + VAR_8;


    while (VAR_7 < VAR_9) {
        VAR_10 = FUNC_2(&VAR_7);
        VAR_11 = FUNC_1(&VAR_7);

        FUNC_4(VAR_3, "Segment Length %d, Segment Type %x\n", VAR_11, VAR_10);

        if (VAR_10 != 132 && VAR_11 > VAR_9 - VAR_7)
            break;

        VAR_13 = 0;
        switch (VAR_10) {
        case 130:
            VAR_13 = FUNC_6(VAR_3, VAR_7, VAR_11);
            break;
        case 131:
            VAR_13 = FUNC_5(VAR_3, VAR_7, VAR_11);
            break;
        case 129:
            VAR_13 = FUNC_7(VAR_3, VAR_7, VAR_11, ((AVSubtitle*)(VAR_4))->pts);
            break;
        case 128:
            break;
        case 132:
            if (*VAR_5) {
                FUNC_0(VAR_3, VAR_2, "Duplicate display segment\n");
                VAR_13 = VAR_0;
                break;
            }
            VAR_13 = FUNC_3(VAR_3, VAR_4, VAR_7, VAR_11);
            if (VAR_13 >= 0)
                *VAR_5 = VAR_13;
            break;
        default:
            FUNC_0(VAR_3, VAR_2, "Unknown subtitle segment type 0x%x, length %d\n",
                   VAR_10, VAR_11);
            VAR_13 = VAR_0;
            break;
        }
        if (VAR_13 < 0 && (VAR_3->err_recognition & VAR_1))
            return VAR_13;

        VAR_7 += VAR_11;
    }

    return VAR_8;
}
