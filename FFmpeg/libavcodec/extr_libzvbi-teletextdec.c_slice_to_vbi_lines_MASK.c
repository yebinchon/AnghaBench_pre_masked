
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int* subtitle_map; int last_pgno; int last_p5; TYPE_1__* sliced; } ;
typedef TYPE_2__ TeletextContext ;
struct TYPE_5__ {int* data; int line; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int ,char*,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(TeletextContext *VAR_4, uint8_t* VAR_5, int VAR_6)
{
    int VAR_7 = 0;
    while (VAR_6 >= 2 && VAR_7 < VAR_2) {
        int VAR_8 = VAR_5[0];
        int VAR_9 = VAR_5[1];
        if (VAR_9 + 2 > VAR_6)
            return VAR_0;
        if (FUNC_1(VAR_8)) {
            if (VAR_9 != 0x2c)
                return VAR_0;
            else {
                int VAR_10 = VAR_5[2] & 0x1f;
                int VAR_11 = VAR_5[2] & 0x20;
                uint8_t *VAR_12 = VAR_4->sliced[VAR_7].data;
                int VAR_13, VAR_14;
                VAR_4->sliced[VAR_7].id = VAR_3;
                VAR_4->sliced[VAR_7].line = (VAR_10 > 0 ? (VAR_10 + (VAR_11 ? 0 : 313)) : 0);
                for (VAR_13 = 0; VAR_13 < 42; VAR_13++)
                    VAR_12[VAR_13] = FUNC_3(VAR_5[4 + VAR_13]);



                VAR_14 = FUNC_4(VAR_12);
                if (VAR_14 >= 0 && VAR_14 >> 3 == 0) {
                    int VAR_15 = FUNC_4(VAR_12 + 2);
                    int VAR_16 = FUNC_4(VAR_12 + 6);
                    int VAR_17 = FUNC_4(VAR_12 + 8);
                    if (VAR_15 >= 0 && VAR_16 >= 0 && VAR_17 >= 0) {
                        int VAR_18 = ((VAR_14 & 7) << 8) + VAR_15;

                        VAR_4->subtitle_map[VAR_18] = (!(VAR_16 & 0x40) && VAR_16 & 0x80 && VAR_17 & 0x01);

                        if (VAR_4->subtitle_map[VAR_18] && VAR_18 == VAR_4->last_pgno) {
                            int VAR_19 = FUNC_5(VAR_4->last_p5);
                            if (VAR_19 >= 0 && VAR_19 & 0x8) {
                                int VAR_20 = FUNC_5(VAR_12[5]);
                                if (VAR_20 >= 0)
                                    VAR_12[5] = FUNC_2(VAR_20 | 0x8);
                            }
                        }
                        VAR_4->last_pgno = VAR_18;
                        VAR_4->last_p5 = VAR_12[5];
                    }
                }
                VAR_7++;
            }
        }
        VAR_6 -= VAR_9 + 2;
        VAR_5 += VAR_9 + 2;
    }
    if (VAR_6)
        FUNC_0(VAR_4, VAR_1, "%d bytes remained after slicing data\n", VAR_6);
    return VAR_7;
}
