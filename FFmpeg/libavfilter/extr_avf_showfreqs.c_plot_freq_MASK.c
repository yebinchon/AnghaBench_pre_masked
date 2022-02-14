
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int h; int frame_count_in; } ;
struct TYPE_7__ {int w; float minamp; float** avg_data; int ascale; int cmode; int nb_channels; int avg; int mode; } ;
typedef TYPE_1__ ShowFreqsContext ;
typedef int AVFrame ;
typedef TYPE_2__ AVFilterLink ;
 int FUNC_0 (float const,int) ;


 int FUNC_1 (int ) ;
 float const FUNC_2 (double,float const,int) ;
 int FUNC_3 (double) ;
 int FUNC_4 (int *,int const,int,int *) ;
 float FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*,int) ;
 double FUNC_7 (float const) ;
 int FUNC_8 (double) ;

__attribute__((used)) static inline void FUNC_9(ShowFreqsContext *VAR_0, int VAR_1,
                             double VAR_2, int VAR_3, uint8_t VAR_4[4], int *VAR_5,
                             AVFrame *VAR_6, AVFilterLink *VAR_7)
{
    const int VAR_8 = VAR_0->w;
    const float VAR_9 = VAR_0->minamp;
    const float VAR_10 = VAR_0->avg_data[VAR_1][VAR_3];
    const float VAR_11 = FUNC_5(VAR_0, VAR_3);
    const int VAR_12 = FUNC_6(VAR_0, VAR_3);
    int VAR_13 = VAR_7->h;
    int VAR_14, VAR_15, VAR_16;

    switch(VAR_0->ascale) {
    case 133:
        VAR_2 = 1.0 - FUNC_8(VAR_2);
        break;
    case 136:
        VAR_2 = 1.0 - FUNC_3(VAR_2);
        break;
    case 134:
        VAR_2 = FUNC_7(FUNC_2(VAR_2, VAR_9, 1)) / FUNC_7(VAR_9);
        break;
    case 135:
        VAR_2 = 1.0 - VAR_2;
        break;
    }

    switch (VAR_0->cmode) {
    case 131:
        VAR_15 = VAR_2 * VAR_7->h - 1;
        break;
    case 128:
        VAR_13 = (VAR_7->h / VAR_0->nb_channels) * (VAR_1 + 1);
        VAR_15 = (VAR_7->h / VAR_0->nb_channels) * VAR_1 + VAR_2 * (VAR_7->h / VAR_0->nb_channels) - 1;
        break;
    default:
        FUNC_1(0);
    }
    if (VAR_15 < 0)
        return;

    switch (VAR_0->avg) {
    case 0:
        VAR_15 = VAR_0->avg_data[VAR_1][VAR_3] = !VAR_7->frame_count_in ? VAR_15 : FUNC_0(VAR_10, VAR_15);
        break;
    case 1:
        break;
    default:
        VAR_0->avg_data[VAR_1][VAR_3] = VAR_10 + VAR_15 * (VAR_15 - VAR_10) / (FUNC_0(VAR_7->frame_count_in + 1, VAR_0->avg) * VAR_15);
        VAR_15 = VAR_0->avg_data[VAR_1][VAR_3];
        break;
    }

    switch(VAR_0->mode) {
    case 129:
        if (*VAR_5 == -1) {
            *VAR_5 = VAR_15;
        }
        if (VAR_15 <= *VAR_5) {
            for (VAR_14 = VAR_12 + 1; VAR_14 < VAR_12 + VAR_11 && VAR_14 < VAR_8; VAR_14++)
                FUNC_4(VAR_6, VAR_14, VAR_15, VAR_4);
            for (VAR_16 = VAR_15; VAR_16 <= *VAR_5; VAR_16++)
                FUNC_4(VAR_6, VAR_12, VAR_16, VAR_4);
        } else {
            for (VAR_16 = *VAR_5; VAR_16 <= VAR_15; VAR_16++)
                FUNC_4(VAR_6, VAR_12, VAR_16, VAR_4);
            for (VAR_14 = VAR_12 + 1; VAR_14 < VAR_12 + VAR_11 && VAR_14 < VAR_8; VAR_14++)
                FUNC_4(VAR_6, VAR_14, VAR_16 - 1, VAR_4);
        }
        *VAR_5 = VAR_15;
        break;
    case 132:
        for (VAR_14 = VAR_12; VAR_14 < VAR_12 + VAR_11 && VAR_14 < VAR_8; VAR_14++)
            for (VAR_16 = VAR_15; VAR_16 < VAR_13; VAR_16++)
                FUNC_4(VAR_6, VAR_14, VAR_16, VAR_4);
        break;
    case 130:
        for (VAR_14 = VAR_12; VAR_14 < VAR_12 + VAR_11 && VAR_14 < VAR_8; VAR_14++)
            FUNC_4(VAR_6, VAR_14, VAR_15, VAR_4);
        break;
    }
}
