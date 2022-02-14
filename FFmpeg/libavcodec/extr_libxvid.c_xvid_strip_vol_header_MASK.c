
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int extradata_size; int extradata; } ;
struct TYPE_5__ {int* data; unsigned int size; } ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int*,int) ;
 int FUNC_3 (int*,int*,unsigned int) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_1, AVPacket *VAR_2,
                                 unsigned int VAR_3,
                                 unsigned int VAR_4)
{
    int VAR_5 = 0, VAR_6;

    for (VAR_6 = 0; VAR_6 < VAR_3 - 3; VAR_6++) {
        if (VAR_2->data[VAR_6] == 0x00 &&
            VAR_2->data[VAR_6 + 1] == 0x00 &&
            VAR_2->data[VAR_6 + 2] == 0x01 &&
            VAR_2->data[VAR_6 + 3] == 0xB6) {
            VAR_5 = VAR_6;
            break;
        }
    }

    if (VAR_5 > 0) {

        if (!VAR_1->extradata) {
            VAR_1->extradata = FUNC_1(VAR_5);
            if (!VAR_1->extradata)
                return FUNC_0(VAR_0);
            FUNC_2(VAR_1->extradata, VAR_2->data, VAR_5);
            VAR_1->extradata_size = VAR_5;
        }


        FUNC_3(VAR_2->data, &VAR_2->data[VAR_5], VAR_4 - VAR_5);
        VAR_2->size = VAR_4 - VAR_5;
    }
    return 0;
}
