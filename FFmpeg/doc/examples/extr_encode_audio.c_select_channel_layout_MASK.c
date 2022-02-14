
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int* channel_layouts; } ;
typedef TYPE_1__ AVCodec ;


 int VAR_0 ;
 int FUNC_0 (int const) ;

__attribute__((used)) static int FUNC_1(const AVCodec *VAR_1)
{
    const uint64_t *VAR_2;
    uint64_t VAR_3 = 0;
    int VAR_4 = 0;

    if (!VAR_1->channel_layouts)
        return VAR_0;

    VAR_2 = VAR_1->channel_layouts;
    while (*VAR_2) {
        int VAR_5 = FUNC_0(*VAR_2);

        if (VAR_5 > VAR_4) {
            VAR_3 = *VAR_2;
            VAR_4 = VAR_5;
        }
        VAR_2++;
    }
    return VAR_3;
}
