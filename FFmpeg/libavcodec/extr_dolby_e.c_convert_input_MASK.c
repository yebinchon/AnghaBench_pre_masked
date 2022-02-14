
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int input_size; int word_bits; int * buffer; int gb; int avctx; int * input; } ;
typedef int PutBitContext ;
typedef TYPE_1__ DBEContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (int *,int *,int) ;
 int FUNC_9 (int *,int,int) ;

__attribute__((used)) static int FUNC_10(DBEContext *VAR_2, int VAR_3, int VAR_4)
{
    uint8_t *VAR_5 = VAR_2->input;
    uint8_t *VAR_6 = VAR_2->buffer;
    PutBitContext VAR_7;
    int VAR_8;

    FUNC_4(VAR_3 <= 1024u);

    if (VAR_3 > VAR_2->input_size) {
        FUNC_5(VAR_2->avctx, VAR_1, "Packet too short\n");
        return VAR_0;
    }

    switch (VAR_2->word_bits) {
    case 16:
        for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++, VAR_5 += 2, VAR_6 += 2)
            FUNC_2(VAR_6, FUNC_0(VAR_5) ^ VAR_4);
        break;
    case 20:
        FUNC_8(&VAR_7, VAR_2->buffer, sizeof(VAR_2->buffer));
        for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++, VAR_5 += 3)
            FUNC_9(&VAR_7, 20, FUNC_1(VAR_5) >> 4 ^ VAR_4);
        FUNC_6(&VAR_7);
        break;
    case 24:
        for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++, VAR_5 += 3, VAR_6 += 3)
            FUNC_3(VAR_6, FUNC_1(VAR_5) ^ VAR_4);
        break;
    default:
        FUNC_4(0);
    }

    return FUNC_7(&VAR_2->gb, VAR_2->buffer, VAR_3 * VAR_2->word_bits);
}
