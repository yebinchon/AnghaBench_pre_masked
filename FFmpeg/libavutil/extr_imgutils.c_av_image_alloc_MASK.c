
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_3__ {int flags; } ;
typedef TYPE_1__ AVPixFmtDescriptor ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int) ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int,int ,int *) ;
 int FUNC_4 (int*,int,int) ;
 int FUNC_5 (int **,int,int,int *,int*) ;
 int FUNC_6 (int *,int ,char*) ;
 int * FUNC_7 (int) ;
 TYPE_1__* FUNC_8 (int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int ,int) ;

int FUNC_11(uint8_t *VAR_5[4], int VAR_6[4],
                   int VAR_7, int VAR_8, enum AVPixelFormat VAR_9, int VAR_10)
{
    const AVPixFmtDescriptor *VAR_11 = FUNC_8(VAR_9);
    int VAR_12, VAR_13;
    uint8_t *VAR_14;

    if (!VAR_11)
        return FUNC_0(VAR_2);

    if ((VAR_13 = FUNC_3(VAR_7, VAR_8, 0, ((void*)0))) < 0)
        return VAR_13;
    if ((VAR_13 = FUNC_4(VAR_6, VAR_9, VAR_10>7 ? FUNC_1(VAR_7, 8) : VAR_7)) < 0)
        return VAR_13;

    for (VAR_12 = 0; VAR_12 < 4; VAR_12++)
        VAR_6[VAR_12] = FUNC_1(VAR_6[VAR_12], VAR_10);

    if ((VAR_13 = FUNC_5(VAR_5, VAR_9, VAR_8, ((void*)0), VAR_6)) < 0)
        return VAR_13;
    VAR_14 = FUNC_7(VAR_13 + VAR_10);
    if (!VAR_14)
        return FUNC_0(VAR_3);
    if ((VAR_13 = FUNC_5(VAR_5, VAR_9, VAR_8, VAR_14, VAR_6)) < 0) {
        FUNC_2(VAR_14);
        return VAR_13;
    }
    if (VAR_11->flags & VAR_1 || (VAR_11->flags & VAR_4 && VAR_5[1])) {
        FUNC_9((uint32_t*)VAR_5[1], VAR_9);
        if (VAR_10 < 4) {
            FUNC_6(((void*)0), VAR_0, "Formats with a palette require a minimum alignment of 4\n");
            return FUNC_0(VAR_2);
        }
    }

    if ((VAR_11->flags & VAR_1 ||
         VAR_11->flags & VAR_4) && VAR_5[1] &&
        VAR_5[1] - VAR_5[0] > VAR_6[0] * VAR_8) {

        FUNC_10(VAR_5[0] + VAR_6[0] * VAR_8, 0,
               VAR_5[1] - VAR_5[0] - VAR_6[0] * VAR_8);
    }

    return VAR_13;
}
