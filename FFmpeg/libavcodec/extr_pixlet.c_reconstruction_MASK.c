
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ptrdiff_t ;
typedef int int64_t ;
typedef int int16_t ;
struct TYPE_5__ {TYPE_1__* priv_data; } ;
struct TYPE_4__ {int ** filter; } ;
typedef TYPE_1__ PixletContext ;
typedef TYPE_2__ AVCodecContext ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *,int *,unsigned int,int ) ;

__attribute__((used)) static void FUNC_1(AVCodecContext *VAR_1, int16_t *VAR_2,
                           unsigned VAR_3, unsigned VAR_4, ptrdiff_t VAR_5,
                           int64_t *VAR_6, int64_t *VAR_7)
{
    PixletContext *VAR_8 = VAR_1->priv_data;
    unsigned VAR_9, VAR_10;
    int16_t *VAR_11, *VAR_12;
    int VAR_13, VAR_14, VAR_15;

    VAR_9 = VAR_3 >> VAR_0;
    VAR_10 = VAR_4 >> VAR_0;
    VAR_12 = VAR_8->filter[0];

    for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++) {
        int64_t VAR_16 = VAR_7[VAR_13];
        int64_t VAR_17 = VAR_6[VAR_13];
        VAR_9 <<= 1;
        VAR_10 <<= 1;

        VAR_11 = VAR_2;
        for (VAR_14 = 0; VAR_14 < VAR_10; VAR_14++) {
            FUNC_0(VAR_11, VAR_8->filter[1], VAR_9, VAR_16);
            VAR_11 += VAR_5;
        }

        for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++) {
            VAR_11 = VAR_2 + VAR_14;
            for (VAR_15 = 0; VAR_15 < VAR_10; VAR_15++) {
                VAR_12[VAR_15] = *VAR_11;
                VAR_11 += VAR_5;
            }

            FUNC_0(VAR_12, VAR_8->filter[1], VAR_10, VAR_17);

            VAR_11 = VAR_2 + VAR_14;
            for (VAR_15 = 0; VAR_15 < VAR_10; VAR_15++) {
                *VAR_11 = VAR_12[VAR_15];
                VAR_11 += VAR_5;
            }
        }
    }
}
