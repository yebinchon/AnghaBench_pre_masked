
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int int8_t ;
struct TYPE_3__ {unsigned int height; unsigned int channel_count; unsigned int line_size; unsigned long uncompressed_size; void** tmp; int gb; int avctx; } ;
typedef TYPE_1__ PSDContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned int) ;

__attribute__((used)) static int FUNC_4(PSDContext * VAR_2){
    unsigned int VAR_3;
    unsigned int VAR_4, VAR_5;
    unsigned long VAR_6 = 0;
    unsigned int VAR_7;
    int8_t VAR_8;
    unsigned int VAR_9;
    uint8_t VAR_10;

    VAR_3 = VAR_2->height * VAR_2->channel_count;


    if (FUNC_2(&VAR_2->gb) < VAR_3 * 2) {
        FUNC_0(VAR_2->avctx, VAR_1, "Not enough data for rle scanline table.\n");
        return VAR_0;
    }
    FUNC_3(&VAR_2->gb, VAR_3 * 2);


    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
        VAR_5 = 0;

        while (VAR_5 < VAR_2->line_size) {
            VAR_8 = FUNC_1(&VAR_2->gb);

            if (VAR_8 <= 0) {
                VAR_9 = VAR_8 * -1;

                if (FUNC_2(&VAR_2->gb) < 1) {
                    FUNC_0(VAR_2->avctx, VAR_1, "Not enough data for rle scanline.\n");
                    return VAR_0;
                }

                if (VAR_6 + VAR_9 >= VAR_2->uncompressed_size) {
                    FUNC_0(VAR_2->avctx, VAR_1, "Invalid rle char.\n");
                    return VAR_0;
                }

                VAR_10 = FUNC_1(&VAR_2->gb);
                for (VAR_7 = 0; VAR_7 <= VAR_9; VAR_7++) {
                    VAR_2->tmp[VAR_6++] = VAR_10;
                }
                VAR_5 += VAR_9 + 1;
            } else {
                if (FUNC_2(&VAR_2->gb) < VAR_8) {
                    FUNC_0(VAR_2->avctx, VAR_1, "Not enough data for rle scanline.\n");
                    return VAR_0;
                }

                if (VAR_6 + VAR_8 >= VAR_2->uncompressed_size) {
                    FUNC_0(VAR_2->avctx, VAR_1, "Invalid rle char.\n");
                    return VAR_0;
                }

                for (VAR_7 = 0; VAR_7 <= VAR_8; VAR_7++) {
                    VAR_10 = FUNC_1(&VAR_2->gb);
                    VAR_2->tmp[VAR_6++] = VAR_10;
                }
                VAR_5 += VAR_8 + 1;
            }
        }
    }

    return 0;
}
