
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int int64_t ;
struct TYPE_10__ {int * data; } ;
struct TYPE_9__ {TYPE_1__* codecpar; } ;
struct TYPE_8__ {int channels; int bits_per_coded_sample; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVPacket ;
typedef int AVIOContext ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_3__*,int) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (int const**) ;
 int FUNC_3 (int **,int) ;
 int FUNC_4 (int **,int) ;

__attribute__((used)) static int FUNC_5(AVIOContext *VAR_1, AVStream *VAR_2, AVPacket *VAR_3, int64_t VAR_4)
{
    const uint8_t *VAR_5, *VAR_6;
    uint8_t *VAR_7;
    int VAR_8;

    if (VAR_4 > 61444)
        return VAR_0;
    VAR_4 = FUNC_0(VAR_1, VAR_3, VAR_4);
    if (VAR_4 < 0)
        return VAR_4;
    VAR_7 = VAR_3->data;
    VAR_6 = VAR_3->data + VAR_4;
    VAR_5 = VAR_3->data + 4;
    for (; VAR_6 - VAR_5 >= VAR_2->codecpar->channels * 4; ) {
        for (VAR_8 = 0; VAR_8 < VAR_2->codecpar->channels; VAR_8++) {
            uint32_t VAR_9 = FUNC_2(&VAR_5);
            if (VAR_2->codecpar->bits_per_coded_sample == 24)
                FUNC_4(&VAR_7, (VAR_9 >> 4) & 0xffffff);
            else
                FUNC_3(&VAR_7, (VAR_9 >> 12) & 0xffff);
        }
        VAR_5 += 32 - VAR_2->codecpar->channels*4;
    }
    FUNC_1(VAR_3, VAR_7 - VAR_3->data);
    return 0;
}
