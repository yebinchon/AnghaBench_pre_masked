
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int16_t ;
typedef enum Rate { ____Placeholder_Rate } Rate ;
struct TYPE_7__ {int* audio; } ;
struct TYPE_6__ {int sc_gain; scalar_t__ opt_gain; scalar_t__ index; } ;
typedef TYPE_1__ PPFParam ;
typedef TYPE_2__ G723_1_ChannelContext ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int*,int,int*,int,int ,int) ;
 int FUNC_2 (int,TYPE_1__*,int,int,int,int) ;
 int FUNC_3 (int*,int*,int ) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static void FUNC_5(G723_1_ChannelContext *VAR_2, int VAR_3, int VAR_4,
                           PPFParam *VAR_5, enum Rate VAR_6)
{

    int16_t VAR_7;
    int VAR_8;
    int VAR_9, VAR_10;
    int VAR_11[5] = {0, 0, 0, 0, 0};
    int16_t *VAR_12 = VAR_2->audio + VAR_0 + VAR_3;
    int VAR_13 = FUNC_1(VAR_12, VAR_3, &VAR_11[1], VAR_4,
                                 VAR_1, 1);
    int VAR_14 = FUNC_1(VAR_12, VAR_3, &VAR_11[3], VAR_4,
                                 VAR_1, -1);

    VAR_5->index = 0;
    VAR_5->opt_gain = 0;
    VAR_5->sc_gain = 0x7fff;


    if (!VAR_14 && !VAR_13)
        return;


    VAR_11[0] = FUNC_3(VAR_12, VAR_12, VAR_1);


    if (VAR_13)
        VAR_11[2] = FUNC_3(VAR_12 + VAR_13, VAR_12 + VAR_13,
                                          VAR_1);


    if (VAR_14)
        VAR_11[4] = FUNC_3(VAR_12 - VAR_14, VAR_12 - VAR_14,
                                          VAR_1);


    VAR_9 = 0;
    for (VAR_8 = 0; VAR_8 < 5; VAR_8++)
        VAR_9 = FUNC_0(VAR_11[VAR_8], VAR_9);

    VAR_7 = FUNC_4(VAR_9, 31);
    for (VAR_8 = 0; VAR_8 < 5; VAR_8++)
        VAR_11[VAR_8] = (VAR_11[VAR_8] << VAR_7) >> 16;

    if (VAR_13 && !VAR_14) {
        FUNC_2(VAR_13, VAR_5, VAR_6, VAR_11[0], VAR_11[1],
                       VAR_11[2]);
    } else if (!VAR_13) {
        FUNC_2(-VAR_14, VAR_5, VAR_6, VAR_11[0], VAR_11[3],
                       VAR_11[4]);
    } else {





        VAR_9 = VAR_11[4] * ((VAR_11[1] * VAR_11[1] + (1 << 14)) >> 15);
        VAR_10 = VAR_11[2] * ((VAR_11[3] * VAR_11[3] + (1 << 14)) >> 15);
        if (VAR_9 >= VAR_10) {
            FUNC_2(VAR_13, VAR_5, VAR_6, VAR_11[0], VAR_11[1],
                           VAR_11[2]);
        } else {
            FUNC_2(-VAR_14, VAR_5, VAR_6, VAR_11[0], VAR_11[3],
                           VAR_11[4]);
        }
    }
}
