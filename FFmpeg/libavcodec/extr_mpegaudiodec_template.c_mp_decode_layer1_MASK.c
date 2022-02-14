
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {scalar_t__ mode; int mode_ext; int nb_channels; int*** sb_samples; int gb; } ;
typedef TYPE_1__ MPADecodeContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int,int,int) ;

__attribute__((used)) static int FUNC_2(MPADecodeContext *VAR_3)
{
    int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
    uint8_t VAR_11[VAR_1][VAR_2];
    uint8_t VAR_12[VAR_1][VAR_2];

    if (VAR_3->mode == VAR_0)
        VAR_4 = (VAR_3->mode_ext + 1) * 4;
    else
        VAR_4 = VAR_2;


    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
        for (VAR_8 = 0; VAR_8 < VAR_3->nb_channels; VAR_8++) {
            VAR_11[VAR_8][VAR_5] = FUNC_0(&VAR_3->gb, 4);
        }
    }
    for (VAR_5 = VAR_4; VAR_5 < VAR_2; VAR_5++)
        VAR_11[0][VAR_5] = FUNC_0(&VAR_3->gb, 4);


    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
        for (VAR_8 = 0; VAR_8 < VAR_3->nb_channels; VAR_8++) {
            if (VAR_11[VAR_8][VAR_5])
                VAR_12[VAR_8][VAR_5] = FUNC_0(&VAR_3->gb, 6);
        }
    }
    for (VAR_5 = VAR_4; VAR_5 < VAR_2; VAR_5++) {
        if (VAR_11[0][VAR_5]) {
            VAR_12[0][VAR_5] = FUNC_0(&VAR_3->gb, 6);
            VAR_12[1][VAR_5] = FUNC_0(&VAR_3->gb, 6);
        }
    }


    for (VAR_9 = 0; VAR_9 < 12; VAR_9++) {
        for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
            for (VAR_8 = 0; VAR_8 < VAR_3->nb_channels; VAR_8++) {
                VAR_7 = VAR_11[VAR_8][VAR_5];
                if (VAR_7) {
                    VAR_10 = FUNC_0(&VAR_3->gb, VAR_7 + 1);
                    VAR_6 = FUNC_1(VAR_7, VAR_10, VAR_12[VAR_8][VAR_5]);
                } else {
                    VAR_6 = 0;
                }
                VAR_3->sb_samples[VAR_8][VAR_9][VAR_5] = VAR_6;
            }
        }
        for (VAR_5 = VAR_4; VAR_5 < VAR_2; VAR_5++) {
            VAR_7 = VAR_11[0][VAR_5];
            if (VAR_7) {
                VAR_10 = FUNC_0(&VAR_3->gb, VAR_7 + 1);
                VAR_6 = FUNC_1(VAR_7, VAR_10, VAR_12[0][VAR_5]);
                VAR_3->sb_samples[0][VAR_9][VAR_5] = VAR_6;
                VAR_6 = FUNC_1(VAR_7, VAR_10, VAR_12[1][VAR_5]);
                VAR_3->sb_samples[1][VAR_9][VAR_5] = VAR_6;
            } else {
                VAR_3->sb_samples[0][VAR_9][VAR_5] = 0;
                VAR_3->sb_samples[1][VAR_9][VAR_5] = 0;
            }
        }
    }
    return 12;
}
