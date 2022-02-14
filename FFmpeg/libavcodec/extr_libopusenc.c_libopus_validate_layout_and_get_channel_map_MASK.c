
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int channels; } ;
typedef TYPE_1__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,char*,int) ;
 int ** VAR_1 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_3(
        AVCodecContext *VAR_2,
        int VAR_3,
        const uint8_t ** VAR_4)
{
    const uint8_t * VAR_5 = ((void*)0);
    int VAR_6;

    switch (VAR_3) {
    case -1:
        VAR_6 = FUNC_1(VAR_2, 8);
        if (VAR_6 == 0) {
            VAR_6 = FUNC_2(VAR_2, VAR_3);

        }

        break;
    case 0:
        VAR_6 = FUNC_1(VAR_2, 2);
        if (VAR_6 == 0) {
            VAR_6 = FUNC_2(VAR_2, VAR_3);
        }
        break;
    case 1:

        VAR_6 = FUNC_1(VAR_2, 8);
        if (VAR_6 == 0) {
            VAR_6 = FUNC_2(VAR_2, VAR_3);
            VAR_5 = VAR_1[VAR_2->channels - 1];
        }
        break;
    case 255:
        VAR_6 = FUNC_1(VAR_2, 254);
        break;
    default:
        FUNC_0(VAR_2, VAR_0,
               "Unknown channel mapping family %d. Output channel layout may be invalid.\n",
               VAR_3);
        VAR_6 = 0;
    }

    *VAR_4 = VAR_5;
    return VAR_6;
}
