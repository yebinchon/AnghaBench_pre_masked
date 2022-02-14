
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {TYPE_2__* priv_data; } ;
struct TYPE_7__ {int type; } ;
struct TYPE_8__ {int tmpgexs; int has_afd; int afd; int has_stereo3d; TYPE_1__ stereo3d; } ;
typedef TYPE_2__ Mpeg1Context ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_3__*,int ,char*,...) ;
 int FUNC_1 (int const*,char*,int) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int const*,int) ;

__attribute__((used)) static void FUNC_3(AVCodecContext *VAR_5,
                                  const uint8_t *VAR_6, int VAR_7)
{
    Mpeg1Context *VAR_8 = VAR_5->priv_data;
    const uint8_t *VAR_9 = VAR_6 + VAR_7;
    Mpeg1Context *VAR_10 = VAR_5->priv_data;
    if (VAR_7 > 29){
        int VAR_11;
        for(VAR_11=0; VAR_11<20; VAR_11++)
            if (!FUNC_1(VAR_6+VAR_11, "\0TMPGEXS\0", 9)){
                VAR_8->tmpgexs= 1;
            }
    }

    if (VAR_9 - VAR_6 >= 5 &&
        VAR_6[0] == 'D' && VAR_6[1] == 'T' && VAR_6[2] == 'G' && VAR_6[3] == '1') {
        int VAR_12 = VAR_6[4];
        VAR_6 += 5;
        if (VAR_12 & 0x80) {

            VAR_6 += 2;
        }
        if (VAR_12 & 0x40) {
            if (VAR_9 - VAR_6 < 1)
                return;
            VAR_10->has_afd = 1;
            VAR_10->afd = VAR_6[0] & 0x0f;
        }
    } else if (VAR_9 - VAR_6 >= 6 &&
               VAR_6[0] == 'J' && VAR_6[1] == 'P' && VAR_6[2] == '3' && VAR_6[3] == 'D' &&
               VAR_6[4] == 0x03) {

        const uint8_t VAR_13 = VAR_6[5] & 0x7F;

        if (VAR_13 == 0x03 ||
            VAR_13 == 0x04 ||
            VAR_13 == 0x08 ||
            VAR_13 == 0x23) {

            VAR_10->has_stereo3d = 1;

            switch (VAR_13) {
            case 0x03:
                VAR_10->stereo3d.type = VAR_2;
                break;
            case 0x04:
                VAR_10->stereo3d.type = VAR_4;
                break;
            case 0x08:
                VAR_10->stereo3d.type = VAR_1;
                break;
            case 0x23:
                VAR_10->stereo3d.type = VAR_3;
                break;
            }
        }
    } else if (FUNC_2(VAR_5, VAR_6, VAR_7)) {
        return;
    }
}
