
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int offset; scalar_t__ type; } ;
typedef TYPE_1__ AVOption ;
typedef int AVDictionary ;
typedef int const AVClass ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int **,int *,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int **) ;
 int FUNC_4 (int **) ;
 int * FUNC_5 (int *,int) ;
 TYPE_1__* FUNC_6 (void const*,TYPE_1__ const*) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (void*,void*,int) ;
 int FUNC_9 (scalar_t__) ;

int FUNC_10(void *VAR_6, const void *VAR_7)
{
    const AVOption *VAR_8 = ((void*)0);
    const AVClass *VAR_9;
    int VAR_10 = 0;

    if (!VAR_7)
        return FUNC_0(VAR_4);

    VAR_9 = *(AVClass **)VAR_7;
    if (!VAR_9 || VAR_9 != *(AVClass **)VAR_6)
        return FUNC_0(VAR_4);

    while ((VAR_8 = FUNC_6(VAR_7, VAR_8))) {
        void *VAR_11 = (uint8_t *)VAR_6 + VAR_8->offset;
        void *VAR_12 = (uint8_t *)VAR_7 + VAR_8->offset;
        uint8_t **VAR_13 = (uint8_t **)VAR_11;
        uint8_t **VAR_14 = (uint8_t **)VAR_12;

        if (VAR_8->type == VAR_3) {
            if (*VAR_13 != *VAR_14)
                FUNC_4(VAR_13);
            *VAR_13 = FUNC_7(*VAR_14);
            if (*VAR_14 && !*VAR_13)
                VAR_10 = FUNC_0(VAR_5);
        } else if (VAR_8->type == VAR_0) {
            int VAR_15 = *(int *)(VAR_14 + 1);
            if (*VAR_13 != *VAR_14)
                FUNC_4(VAR_13);
            *VAR_13 = FUNC_5(*VAR_14, VAR_15);
            if (VAR_15 && !*VAR_13) {
                VAR_10 = FUNC_0(VAR_5);
                VAR_15 = 0;
            }
            *(int *)(VAR_13 + 1) = VAR_15;
        } else if (VAR_8->type == VAR_1) {

        } else if (VAR_8->type == VAR_2) {
            AVDictionary **VAR_16 = (AVDictionary **) VAR_12;
            AVDictionary **VAR_17 = (AVDictionary **) VAR_11;
            if (*VAR_16 != *VAR_17)
                FUNC_3(VAR_17);
            *VAR_17 = ((void*)0);
            FUNC_1(VAR_17, *VAR_16, 0);
            if (FUNC_2(*VAR_16) != FUNC_2(*VAR_17))
                VAR_10 = FUNC_0(VAR_5);
        } else {
            int VAR_18 = FUNC_9(VAR_8->type);
            if (VAR_18 < 0)
                VAR_10 = VAR_18;
            else
                FUNC_8(VAR_11, VAR_12, VAR_18);
        }
    }
    return VAR_10;
}
