
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {int nb_symbols; int* simple_symbols; int simple; int vlc; } ;
typedef TYPE_1__ HuffReader ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,int) ;
 int FUNC_4 (int *,int,int,int*,int,int,int *,int,int,int ) ;

__attribute__((used)) static int FUNC_5(HuffReader *VAR_4, int *VAR_5,
                                       int VAR_6)
{
    int VAR_7 = 0, VAR_8, VAR_9 = 0, VAR_10;
    int VAR_11 = 0;
    uint16_t *VAR_12;


    for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
        if (VAR_5[VAR_8] > 0) {
            VAR_7++;
            VAR_9 = VAR_8;
            if (VAR_7 > 1)
                break;
        }
    }
    if (VAR_7 == 1) {
        VAR_4->nb_symbols = 1;
        VAR_4->simple_symbols[0] = VAR_9;
        VAR_4->simple = 1;
        return 0;
    }

    for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++)
        VAR_11 = FUNC_1(VAR_11, VAR_5[VAR_8]);

    if (VAR_11 == 0 || VAR_11 > VAR_3)
        return FUNC_0(VAR_1);

    VAR_12 = FUNC_3(VAR_6, sizeof(*VAR_12));
    if (!VAR_12)
        return FUNC_0(VAR_2);

    VAR_9 = 0;
    VAR_4->nb_symbols = 0;
    for (VAR_7 = 1; VAR_7 <= VAR_11; VAR_7++) {
        for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
            if (VAR_5[VAR_8] != VAR_7)
                continue;
            VAR_12[VAR_8] = VAR_9++;
            VAR_4->nb_symbols++;
        }
        VAR_9 <<= 1;
    }
    if (!VAR_4->nb_symbols) {
        FUNC_2(VAR_12);
        return VAR_0;
    }

    VAR_10 = FUNC_4(&VAR_4->vlc, 8, VAR_6,
                   VAR_5, sizeof(*VAR_5), sizeof(*VAR_5),
                   VAR_12, sizeof(*VAR_12), sizeof(*VAR_12), 0);
    if (VAR_10 < 0) {
        FUNC_2(VAR_12);
        return VAR_10;
    }
    VAR_4->simple = 0;

    FUNC_2(VAR_12);
    return 0;
}
