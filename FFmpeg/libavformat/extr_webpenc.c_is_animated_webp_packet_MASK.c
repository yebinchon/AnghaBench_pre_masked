
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; char* data; } ;
typedef TYPE_1__ AVPacket ;


 scalar_t__ FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(AVPacket *VAR_0)
{
    if (VAR_0->size) {
        int VAR_1 = 0;
        unsigned VAR_2 = 0;

        if (VAR_0->size < 4)
            return 0;
        if (FUNC_0(VAR_0->data) == FUNC_0("RIFF"))
            VAR_1 = 12;

        if (VAR_0->size < VAR_1 + 4)
            return 0;
        if (FUNC_0(VAR_0->data + VAR_1) == FUNC_0("VP8X")) {
            VAR_2 |= VAR_0->data[VAR_1 + 4 + 4];
        }

        if (VAR_2 & 2)
            return 1;
    }
    return 0;
}
