
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int avctx; int gb; } ;
typedef TYPE_1__ VqaContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,char*,int,...) ;
 int FUNC_3 (int *,unsigned char*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,char*,int,...) ;
 int FUNC_9 (unsigned char*,unsigned char,int) ;

__attribute__((used)) static int FUNC_10(VqaContext *VAR_2, int VAR_3,
    unsigned char *VAR_4, int VAR_5, int VAR_6) {

    int VAR_7 = 0;
    int VAR_8, VAR_9, VAR_10;
    int VAR_11;
    unsigned char VAR_12;
    int VAR_13;

    if (VAR_3 < 0 || VAR_3 > FUNC_5(&VAR_2->gb)) {
        FUNC_2(VAR_2->avctx, VAR_1, "Chunk size %d is out of range\n",
               VAR_3);
        return VAR_0;
    }

    VAR_10 = FUNC_7(&VAR_2->gb);
    while (FUNC_7(&VAR_2->gb) - VAR_10 < VAR_3) {
        VAR_9 = FUNC_4(&VAR_2->gb);
        FUNC_8(VAR_2->avctx, "opcode %02X: ", VAR_9);


        if (VAR_9 == 0x80)
            break;

        if (VAR_7 >= VAR_5) {
            FUNC_2(VAR_2->avctx, VAR_1, "decode_format80 problem: dest_index (%d) exceeded dest_size (%d)\n",
                VAR_7, VAR_5);
            return VAR_0;
        }

        if (VAR_9 == 0xFF) {

            VAR_8 = FUNC_6(&VAR_2->gb);
            VAR_11 = FUNC_6(&VAR_2->gb);
            FUNC_8(VAR_2->avctx, "(1) copy %X bytes from absolute pos %X\n", VAR_8, VAR_11);
            FUNC_1();
            FUNC_0(VAR_11);
            for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++)
                VAR_4[VAR_7 + VAR_13] = VAR_4[VAR_11 + VAR_13];
            VAR_7 += VAR_8;

        } else if (VAR_9 == 0xFE) {

            VAR_8 = FUNC_6(&VAR_2->gb);
            VAR_12 = FUNC_4(&VAR_2->gb);
            FUNC_8(VAR_2->avctx, "(2) set %X bytes to %02X\n", VAR_8, VAR_12);
            FUNC_1();
            FUNC_9(&VAR_4[VAR_7], VAR_12, VAR_8);
            VAR_7 += VAR_8;

        } else if ((VAR_9 & 0xC0) == 0xC0) {

            VAR_8 = (VAR_9 & 0x3F) + 3;
            VAR_11 = FUNC_6(&VAR_2->gb);
            FUNC_8(VAR_2->avctx, "(3) copy %X bytes from absolute pos %X\n", VAR_8, VAR_11);
            FUNC_1();
            FUNC_0(VAR_11);
            for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++)
                VAR_4[VAR_7 + VAR_13] = VAR_4[VAR_11 + VAR_13];
            VAR_7 += VAR_8;

        } else if (VAR_9 > 0x80) {

            VAR_8 = VAR_9 & 0x3F;
            FUNC_8(VAR_2->avctx, "(4) copy %X bytes from source to dest\n", VAR_8);
            FUNC_1();
            FUNC_3(&VAR_2->gb, &VAR_4[VAR_7], VAR_8);
            VAR_7 += VAR_8;

        } else {

            VAR_8 = ((VAR_9 & 0x70) >> 4) + 3;
            VAR_11 = FUNC_4(&VAR_2->gb) | ((VAR_9 & 0x0F) << 8);
            FUNC_8(VAR_2->avctx, "(5) copy %X bytes from relpos %X\n", VAR_8, VAR_11);
            FUNC_1();
            FUNC_0(VAR_7 - VAR_11);
            for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++)
                VAR_4[VAR_7 + VAR_13] = VAR_4[VAR_7 - VAR_11 + VAR_13];
            VAR_7 += VAR_8;
        }
    }





    if (VAR_6)
        if (VAR_7 < VAR_5) {
            FUNC_2(VAR_2->avctx, VAR_1, "decode_format80 problem: decode finished with dest_index (%d) < dest_size (%d)\n",
                VAR_7, VAR_5);
            FUNC_9(VAR_4 + VAR_7, 0, VAR_5 - VAR_7);
        }

    return 0;
}
