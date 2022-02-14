
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int* data; } ;
typedef TYPE_1__ AVPacket ;
typedef int AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;

__attribute__((used)) static int FUNC_1(AVFormatContext *VAR_1, AVPacket *VAR_2)
{
    static const int VAR_3[32] = {
      480, 960, 1920, 2880,
      480, 960, 1920, 2880,
      480, 960, 1920, 2880,
      480, 960,
      480, 960,
      120, 240, 480, 960,
      120, 240, 480, 960,
      120, 240, 480, 960,
      120, 240, 480, 960,
    };
    int VAR_4, VAR_5, VAR_6, VAR_7;

    if (VAR_2->size < 1)
        return 0;

    VAR_4 = VAR_2->data[0];

    VAR_5 = VAR_3[VAR_4 >> 3];
    switch (VAR_4 & 3) {
    case 0:
        VAR_6 = 1;
        break;
    case 1:
        VAR_6 = 2;
        break;
    case 2:
        VAR_6 = 2;
        break;
    case 3:
        if (VAR_2->size < 2)
            return 0;
        VAR_6 = VAR_2->data[1] & 63;
        break;
    }

    VAR_7 = VAR_6 * VAR_5;
    if (VAR_7 > 5760) {
        FUNC_0(VAR_1, VAR_0,
               "Opus packet duration > 120 ms, invalid");
        return 0;
    }

    return VAR_7;
}
