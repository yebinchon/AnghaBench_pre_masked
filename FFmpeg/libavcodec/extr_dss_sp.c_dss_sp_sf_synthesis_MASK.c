
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_4__ {int* vector_buf; int* audio_buf; int* err_buf1; int noise_state; int filter; } ;
typedef TYPE_1__ DssSpContext ;


 int FUNC_0 (int,int,int) ;
 void* FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (int*,int,int) ;
 int FUNC_4 (int*,int*,int*) ;
 int FUNC_5 (int*,int*,int*) ;
 int VAR_1 ;
 int FUNC_6 (int ,int*,int ) ;
 int FUNC_7 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_8(DssSpContext *VAR_2, int32_t VAR_3,
                                int32_t *VAR_4, int VAR_5)
{
    int32_t VAR_6[15];
    int32_t VAR_7[72];
    int VAR_8, VAR_9 = 0, VAR_10 = 0, VAR_11, VAR_12;
    int VAR_13, VAR_14;

    if (VAR_5 > 0) {
        VAR_10 = FUNC_7(VAR_2, VAR_5);

        if (VAR_10 > 0xFFFFF)
            VAR_10 = 0xFFFFF;
    }

    VAR_12 = FUNC_2(VAR_2->vector_buf, VAR_5);

    FUNC_3(VAR_2->vector_buf, VAR_12 - 3, VAR_5);
    FUNC_3(VAR_2->audio_buf, VAR_12, 15);
    FUNC_3(VAR_2->err_buf1, VAR_12, 15);

    VAR_11 = VAR_2->err_buf1[1];

    FUNC_6(VAR_2->filter, VAR_6, VAR_0);
    FUNC_4(VAR_6, VAR_2->audio_buf, VAR_2->vector_buf);

    FUNC_6(VAR_2->filter, VAR_6, VAR_1);
    FUNC_5(VAR_6, VAR_2->err_buf1, VAR_2->vector_buf);


    VAR_3 = VAR_3 >> 1;
    if (VAR_3 >= 0)
        VAR_3 = 0;

    if (VAR_5 > 1) {
        for (VAR_13 = VAR_5 - 1; VAR_13 > 0; VAR_13--) {
            VAR_14 = FUNC_0(VAR_2->vector_buf[VAR_13], VAR_3,
                                 VAR_2->vector_buf[VAR_13 - 1]);
            VAR_2->vector_buf[VAR_13] = FUNC_1(VAR_14);
        }
    }

    VAR_14 = FUNC_0(VAR_2->vector_buf[0], VAR_3, VAR_11);
    VAR_2->vector_buf[0] = FUNC_1(VAR_14);

    FUNC_3(VAR_2->vector_buf, -VAR_12, VAR_5);
    FUNC_3(VAR_2->audio_buf, -VAR_12, 15);
    FUNC_3(VAR_2->err_buf1, -VAR_12, 15);

    if (VAR_5 > 0)
        VAR_9 = FUNC_7(VAR_2, VAR_5);

    if (VAR_9 >= 0x40)
        VAR_14 = (VAR_10 << 11) / VAR_9;
    else
        VAR_14 = 1;

    VAR_8 = 409 * VAR_14 >> 15 << 15;
    VAR_14 = (VAR_8 + 32358 * VAR_2->noise_state) >> 15;
    VAR_7[0] = FUNC_1(VAR_14);

    for (VAR_13 = 1; VAR_13 < VAR_5; VAR_13++) {
        VAR_14 = (VAR_8 + 32358 * VAR_7[VAR_13 - 1]) >> 15;
        VAR_7[VAR_13] = FUNC_1(VAR_14);
    }

    VAR_2->noise_state = VAR_7[VAR_5 - 1];
    for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++) {
        VAR_14 = (VAR_2->vector_buf[VAR_13] * VAR_7[VAR_13]) >> 11;
        VAR_4[VAR_13] = FUNC_1(VAR_14);
    }
}
