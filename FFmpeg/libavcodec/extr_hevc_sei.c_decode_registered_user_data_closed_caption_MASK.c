
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_3__ {scalar_t__ a53_caption_size; void** a53_caption; } ;
typedef TYPE_1__ HEVCSEIA53Caption ;
typedef int GetBitContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ const VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (void***,scalar_t__ const) ;
 void* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static int FUNC_5(HEVCSEIA53Caption *VAR_2, GetBitContext *VAR_3,
                                                      int VAR_4)
{
    int VAR_5;
    int VAR_6;
    int VAR_7;

    if (VAR_4 < 3)
       return FUNC_0(VAR_0);

    VAR_6 = FUNC_3(VAR_3, 8);
    if (VAR_6 == 0x3) {
        FUNC_4(VAR_3, 1);

        VAR_5 = FUNC_3(VAR_3, 1);
        if (VAR_5) {
            FUNC_4(VAR_3, 1);
            VAR_7 = FUNC_3(VAR_3, 5);
            FUNC_4(VAR_3, 8);
            VAR_4 -= 2;

            if (VAR_7 && VAR_4 >= VAR_7 * 3) {
                const uint64_t VAR_8 = (VAR_2->a53_caption_size + VAR_7
                                           * FUNC_1(3));
                int VAR_9, VAR_10;

                if (VAR_8 > VAR_1)
                    return FUNC_0(VAR_0);


                VAR_10 = FUNC_2(&VAR_2->a53_caption, VAR_8);
                if (VAR_10 < 0)
                    return VAR_10;

                for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
                    VAR_2->a53_caption[VAR_2->a53_caption_size++] = FUNC_3(VAR_3, 8);
                    VAR_2->a53_caption[VAR_2->a53_caption_size++] = FUNC_3(VAR_3, 8);
                    VAR_2->a53_caption[VAR_2->a53_caption_size++] = FUNC_3(VAR_3, 8);
                }
                FUNC_4(VAR_3, 8);
            }
        }
    } else {
        int VAR_11;
        for (VAR_11 = 0; VAR_11 < VAR_4 - 1; VAR_11++)
            FUNC_4(VAR_3, 8);
    }

    return 0;
}
