
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_5__ {int size; void** data; } ;
struct TYPE_4__ {TYPE_3__* buf_ref; } ;
typedef TYPE_1__ H264SEIA53Caption ;
typedef int GetBitContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ const VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__**,scalar_t__ const) ;
 void* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static int FUNC_5(H264SEIA53Caption *VAR_2,
                                                     GetBitContext *VAR_3, void *VAR_4,
                                                     int VAR_5)
{
    int VAR_6;
    int VAR_7;
    int VAR_8;

    if (VAR_5 < 3)
        return FUNC_0(VAR_0);

    VAR_7 = FUNC_3(VAR_3, 8);
    if (VAR_7 == 0x3) {
        FUNC_4(VAR_3, 1);

        VAR_6 = FUNC_3(VAR_3, 1);
        if (VAR_6) {
            FUNC_4(VAR_3, 1);
            VAR_8 = FUNC_3(VAR_3, 5);
            FUNC_4(VAR_3, 8);
            VAR_5 -= 2;

            if (VAR_8 && VAR_5 >= VAR_8 * 3) {
                int VAR_9 = VAR_2->buf_ref ? VAR_2->buf_ref->size : 0;
                const uint64_t VAR_10 = (VAR_9 + VAR_8
                                           * FUNC_1(3));
                int VAR_11, VAR_12;

                if (VAR_10 > VAR_1)
                    return FUNC_0(VAR_0);


                VAR_12 = FUNC_2(&VAR_2->buf_ref, VAR_10);
                if (VAR_12 < 0)
                    return VAR_12;


                for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
                    VAR_2->buf_ref->data[VAR_9++] = FUNC_3(VAR_3, 8);
                    VAR_2->buf_ref->data[VAR_9++] = FUNC_3(VAR_3, 8);
                    VAR_2->buf_ref->data[VAR_9++] = FUNC_3(VAR_3, 8);
                }

                FUNC_4(VAR_3, 8);
            }
        }
    } else {
        int VAR_13;
        for (VAR_13 = 0; VAR_13 < VAR_5 - 1; VAR_13++)
            FUNC_4(VAR_3, 8);
    }

    return 0;
}
