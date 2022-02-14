
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int const int64_t ;
struct TYPE_5__ {double*** data; } ;
typedef TYPE_1__ ThreadData ;
struct TYPE_7__ {TYPE_2__* priv; } ;
struct TYPE_6__ {int difford; int* planeheight; int* planewidth; } ;
typedef TYPE_2__ ColorConstancyContext ;
typedef TYPE_3__ AVFilterContext ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (double const,int) ;
 double FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(AVFilterContext* VAR_5, void* VAR_6, int VAR_7, int VAR_8)
{
    ColorConstancyContext *VAR_9 = VAR_5->priv;
    ThreadData *VAR_10 = VAR_6;
    const int VAR_11 = VAR_9->difford;
    int VAR_12;

    for (VAR_12 = 0; VAR_12 < VAR_4; ++VAR_12) {
        const int VAR_13 = VAR_9->planeheight[VAR_12];
        const int VAR_14 = VAR_9->planewidth[VAR_12];
        const int64_t VAR_15 = VAR_14 * (int64_t)VAR_13;
        const int VAR_16 = (VAR_15 * VAR_7 ) / VAR_8;
        const int VAR_17 = (VAR_15 * (VAR_7+1)) / VAR_8;
        const double *VAR_18 = VAR_10->data[VAR_0][VAR_12];
        const double *VAR_19 = VAR_10->data[VAR_2][VAR_12];
        double *VAR_20 = VAR_10->data[VAR_3][VAR_12];
        int VAR_21;

        if (VAR_11 == 1) {
            for (VAR_21 = VAR_16; VAR_21 < VAR_17; ++VAR_21) {
                VAR_20[VAR_21] = FUNC_1( FUNC_0(VAR_18[VAR_21], 2) + FUNC_0(VAR_19[VAR_21], 2));
            }
        } else {
            const double *VAR_22 = VAR_10->data[VAR_1][VAR_12];
            for (VAR_21 = VAR_16; VAR_21 < VAR_17; ++VAR_21) {
                VAR_20[VAR_21] = FUNC_1( FUNC_0(VAR_18[VAR_21], 2) + 4 * FUNC_0(VAR_22[VAR_21], 2) + FUNC_0(VAR_19[VAR_21], 2) );
            }
        }
    }

    return 0;
}
