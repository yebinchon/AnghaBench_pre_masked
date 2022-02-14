
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int width; int height; int (* decode_func ) (TYPE_1__*,int,int,int) ;} ;
typedef TYPE_1__ HQXContext ;


 int* VAR_0 ;
 int FUNC_0 (TYPE_1__*,int,int,int) ;

__attribute__((used)) static int FUNC_1(HQXContext *VAR_1, int VAR_2)
{
    int VAR_3 = (VAR_1->width + 15) >> 4;
    int VAR_4 = (VAR_1->height + 15) >> 4;
    int VAR_5 = (VAR_3 + 4) / 5;
    int VAR_6 = (VAR_4 + 4) / 5;
    int VAR_7 = VAR_5 * (VAR_3 / VAR_5);
    int VAR_8 = VAR_6 * (VAR_4 / VAR_6);
    int VAR_9 = VAR_3 - VAR_7;
    int VAR_10 = VAR_4 - VAR_8;
    int VAR_11 = VAR_3 * VAR_4;
    int VAR_12 = (VAR_11 + 479) / 480;
    int VAR_13 = VAR_11 / (16 * VAR_12);
    int VAR_14 = VAR_2 * VAR_12;
    int VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
    int VAR_22, VAR_23, VAR_24;

    for (VAR_24 = 0; VAR_24 < VAR_12; VAR_24++, VAR_14++) {
        VAR_22 = VAR_13;
        VAR_23 = -1;
        if (VAR_14 < VAR_11 - VAR_13 * 16 * VAR_12) {
            VAR_23 = VAR_11 / (16 * VAR_12);
            VAR_22++;
        }
        for (VAR_21 = 0; VAR_21 < VAR_22; VAR_21++) {
            if (VAR_21 == VAR_23)
                VAR_15 = VAR_14 + 16 * VAR_12 * VAR_21;
            else
                VAR_15 = VAR_24 + 16 * VAR_12 * VAR_21 +
                           VAR_12 * VAR_0[(VAR_21 + VAR_2) & 0xF];
            VAR_20 = VAR_6 * (VAR_15 / (VAR_6 * VAR_3));
            VAR_16 = VAR_15 % (VAR_6 * VAR_3);
            if (VAR_20 >= VAR_8) {
                VAR_17 = VAR_5 * (VAR_16 / (VAR_10 * VAR_5));
                VAR_19 = VAR_16 % (VAR_10 * VAR_5);
            } else {
                VAR_17 = VAR_5 * (VAR_16 / (VAR_6 * VAR_5));
                VAR_19 = VAR_16 % (VAR_6 * VAR_5);
            }
            if (VAR_17 >= VAR_7) {
                VAR_17 += VAR_19 % VAR_9;
                VAR_18 = VAR_20 + (VAR_19 / VAR_9);
            } else {
                VAR_17 += VAR_19 % VAR_5;
                VAR_18 = VAR_20 + (VAR_19 / VAR_5);
            }
            VAR_1->decode_func(VAR_1, VAR_2, VAR_17 * 16, VAR_18 * 16);
        }
    }

    return 0;
}
