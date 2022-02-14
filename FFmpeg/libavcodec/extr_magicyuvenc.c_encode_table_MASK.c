
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {int len; } ;
struct TYPE_8__ {int value; int prob; int member_0; } ;
typedef int PutBitContext ;
typedef TYPE_1__ PTable ;
typedef TYPE_2__ HuffEntry ;
typedef int AVCodecContext ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,int,int,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*,int,int) ;
 int FUNC_3 (int *,int,int ) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_0, uint8_t *VAR_1,
                        int VAR_2, int VAR_3,
                        PutBitContext *VAR_4, HuffEntry *VAR_5)
{
    PTable VAR_6[256] = { {0} };
    int VAR_7;

    FUNC_1(VAR_1, VAR_2, VAR_3, VAR_6);

    for (VAR_7 = 0; VAR_7 < 256; VAR_7++) {
        VAR_6[VAR_7].prob++;
        VAR_6[VAR_7].value = 255 - VAR_7;
    }

    FUNC_2(VAR_6, VAR_5, 256, 12);

    FUNC_0(VAR_5);

    for (VAR_7 = 0; VAR_7 < 256; VAR_7++) {
        FUNC_3(VAR_4, 1, 0);
        FUNC_3(VAR_4, 7, VAR_5[VAR_7].len);
    }

    return 0;
}
