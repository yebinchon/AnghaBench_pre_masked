
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int* blocksize; } ;
typedef TYPE_1__ AVVorbisParseContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,char*) ;
 scalar_t__ FUNC_1 (int const*,char*,int) ;

__attribute__((used)) static int FUNC_2(AVVorbisParseContext *VAR_2,
                           const uint8_t *VAR_3, int VAR_4)
{

    if (VAR_4 < 30) {
        FUNC_0(VAR_2, VAR_1, "Id header is too short\n");
        return VAR_0;
    }


    if (VAR_3[0] != 1) {
        FUNC_0(VAR_2, VAR_1, "Wrong packet type in Id header\n");
        return VAR_0;
    }


    if (FUNC_1(&VAR_3[1], "vorbis", 6)) {
        FUNC_0(VAR_2, VAR_1, "Invalid packet signature in Id header\n");
        return VAR_0;
    }

    if (!(VAR_3[29] & 0x1)) {
        FUNC_0(VAR_2, VAR_1, "Invalid framing bit in Id header\n");
        return VAR_0;
    }

    VAR_2->blocksize[0] = 1 << (VAR_3[28] & 0xF);
    VAR_2->blocksize[1] = 1 << (VAR_3[28] >> 4);

    return 0;
}
