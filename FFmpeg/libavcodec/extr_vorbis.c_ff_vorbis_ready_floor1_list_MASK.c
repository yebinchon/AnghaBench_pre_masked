
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sort; size_t low; int high; int x; } ;
typedef TYPE_1__ vorbis_floor1_entry ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char*) ;

int FUNC_1(AVCodecContext *VAR_2,
                                vorbis_floor1_entry *VAR_3, int VAR_4)
{
    int VAR_5;
    VAR_3[0].sort = 0;
    VAR_3[1].sort = 1;
    for (VAR_5 = 2; VAR_5 < VAR_4; VAR_5++) {
        int VAR_6;
        VAR_3[VAR_5].low = 0;
        VAR_3[VAR_5].high = 1;
        VAR_3[VAR_5].sort = VAR_5;
        for (VAR_6 = 2; VAR_6 < VAR_5; VAR_6++) {
            int VAR_7 = VAR_3[VAR_6].x;
            if (VAR_7 < VAR_3[VAR_5].x) {
                if (VAR_7 > VAR_3[VAR_3[VAR_5].low].x)
                    VAR_3[VAR_5].low = VAR_6;
            } else {
                if (VAR_7 < VAR_3[VAR_3[VAR_5].high].x)
                    VAR_3[VAR_5].high = VAR_6;
            }
        }
    }
    for (VAR_5 = 0; VAR_5 < VAR_4 - 1; VAR_5++) {
        int VAR_8;
        for (VAR_8 = VAR_5 + 1; VAR_8 < VAR_4; VAR_8++) {
            if (VAR_3[VAR_5].x == VAR_3[VAR_8].x) {
                FUNC_0(VAR_2, VAR_1,
                       "Duplicate value found in floor 1 X coordinates\n");
                return VAR_0;
            }
            if (VAR_3[VAR_3[VAR_5].sort].x > VAR_3[VAR_3[VAR_8].sort].x) {
                int VAR_9 = VAR_3[VAR_5].sort;
                VAR_3[VAR_5].sort = VAR_3[VAR_8].sort;
                VAR_3[VAR_8].sort = VAR_9;
            }
        }
    }
    return 0;
}
