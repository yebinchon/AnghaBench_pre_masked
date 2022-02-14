
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int* buf; } ;
struct TYPE_6__ {int frame_size; int* crc_inv; int frame_size_min; scalar_t__ eac3; TYPE_2__ pb; } ;
typedef int AVCRC ;
typedef TYPE_1__ AC3EncodeContext ;


 int VAR_0 ;
 int FUNC_0 (int*,int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int const*,int,int*,int) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int*,int ,int) ;
 int FUNC_7 (int,int,int ) ;
 int FUNC_8 (TYPE_2__*) ;
 int* FUNC_9 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_10(AC3EncodeContext *VAR_2)
{
    const AVCRC *VAR_3 = FUNC_4(VAR_0);
    int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
    uint8_t *VAR_10;

    VAR_4 = ((VAR_2->frame_size >> 2) + (VAR_2->frame_size >> 4)) << 1;


    FUNC_1(VAR_2->frame_size * 8 - FUNC_8(&VAR_2->pb) >= 18);
    FUNC_5(&VAR_2->pb);
    VAR_10 = VAR_2->pb.buf;
    VAR_5 = VAR_2->frame_size - (FUNC_9(&VAR_2->pb) - VAR_10) - 2;
    FUNC_1(VAR_5 >= 0);
    if (VAR_5 > 0)
        FUNC_6(FUNC_9(&VAR_2->pb), 0, VAR_5);

    if (VAR_2->eac3) {

        VAR_7 = FUNC_3(VAR_3, 0, VAR_10 + 2, VAR_2->frame_size - 5);
    } else {


    VAR_6 = FUNC_2(FUNC_3(VAR_3, 0, VAR_10 + 4, VAR_4 - 4));
    VAR_9 = VAR_2->crc_inv[VAR_2->frame_size > VAR_2->frame_size_min];
    VAR_6 = FUNC_7(VAR_9, VAR_6, VAR_1);
    FUNC_0(VAR_10 + 2, VAR_6);


    VAR_7 = FUNC_3(VAR_3, 0, VAR_10 + VAR_4,
                          VAR_2->frame_size - VAR_4 - 3);
    }
    VAR_8 = FUNC_3(VAR_3, VAR_7, VAR_10 + VAR_2->frame_size - 3, 1);

    if (VAR_8 == 0x770B) {
        VAR_10[VAR_2->frame_size - 3] ^= 0x1;
        VAR_8 = FUNC_3(VAR_3, VAR_7, VAR_10 + VAR_2->frame_size - 3, 1);
    }
    VAR_8 = FUNC_2(VAR_8);
    FUNC_0(VAR_10 + VAR_2->frame_size - 2, VAR_8);
}
