
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int type; unsigned int sequence; int length; } ;
typedef TYPE_1__ VivoContext ;
struct TYPE_6__ {int * pb; TYPE_1__* priv_data; } ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ,char*,...) ;
 scalar_t__ FUNC_1 (int *) ;
 unsigned int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_3)
{
    VivoContext *VAR_4 = VAR_3->priv_data;
    AVIOContext *VAR_5 = VAR_3->pb;
    unsigned VAR_6, VAR_7 = 0;

    if (FUNC_1(VAR_5))
        return VAR_0;

    VAR_6 = FUNC_2(VAR_5);
    if (VAR_6 == 0x82) {
        VAR_7 = 1;
        VAR_6 = FUNC_2(VAR_5);
    }

    VAR_4->type = VAR_6 >> 4;
    VAR_4->sequence = VAR_6 & 0xF;

    switch (VAR_4->type) {
    case 0: VAR_7 = 1; break;
    case 1: VAR_4->length = 128; break;
    case 2: VAR_7 = 1; break;
    case 3: VAR_4->length = 40; break;
    case 4: VAR_4->length = 24; break;
    default:
        FUNC_0(VAR_3, VAR_2, "unknown packet type %d\n", VAR_4->type);
        return VAR_1;
    }

    if (VAR_7) {
        VAR_6 = FUNC_2(VAR_5);
        VAR_4->length = VAR_6 & 0x7F;
        if (VAR_6 & 0x80) {
            VAR_6 = FUNC_2(VAR_5);
            VAR_4->length = (VAR_4->length << 7) | (VAR_6 & 0x7F);

            if (VAR_6 & 0x80) {
                FUNC_0(VAR_3, VAR_2, "coded length is more than two bytes\n");
                return VAR_1;
            }
        }
    }

    return 0;
}
