
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int p; } ;
typedef TYPE_1__ uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef scalar_t__ int32_t ;
typedef TYPE_1__ HufDec ;
typedef int GetByteContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int,int) ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (TYPE_1__*,scalar_t__,scalar_t__,TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,TYPE_1__*,int *,int,scalar_t__,int,int *) ;
 int FUNC_9 (int *,scalar_t__,scalar_t__,TYPE_1__*) ;

__attribute__((used)) static int FUNC_10(GetByteContext *VAR_4,
                          uint16_t *VAR_5, int VAR_6)
{
    int32_t VAR_7, VAR_8, VAR_9;
    uint32_t VAR_10;
    uint64_t *VAR_11;
    HufDec *VAR_12;
    int VAR_13, VAR_14;

    VAR_7 = FUNC_5(VAR_4);
    VAR_8 = FUNC_5(VAR_4);
    VAR_9 = FUNC_5(VAR_4);
    FUNC_6(VAR_4, 4);
    VAR_10 = FUNC_5(VAR_4);
    if (VAR_8 < 0 || VAR_8 >= VAR_3 ||
        VAR_9 < 0 || VAR_9 >= VAR_3 ||
        VAR_7 < 0)
        return VAR_0;

    FUNC_6(VAR_4, 4);

    VAR_11 = FUNC_3(VAR_3, sizeof(*VAR_11));
    VAR_12 = FUNC_3(VAR_2, sizeof(*VAR_12));
    if (!VAR_11 || !VAR_12) {
        VAR_13 = FUNC_0(VAR_1);
        goto fail;
    }

    if ((VAR_13 = FUNC_9(VAR_4, VAR_8, VAR_9, VAR_11)) < 0)
        goto fail;

    if (VAR_10 > 8 * FUNC_4(VAR_4)) {
        VAR_13 = VAR_0;
        goto fail;
    }

    if ((VAR_13 = FUNC_7(VAR_11, VAR_8, VAR_9, VAR_12)) < 0)
        goto fail;
    VAR_13 = FUNC_8(VAR_11, VAR_12, VAR_4, VAR_10, VAR_9, VAR_6, VAR_5);

fail:
    for (VAR_14 = 0; VAR_14 < VAR_2; VAR_14++)
        if (VAR_12)
            FUNC_2(&VAR_12[VAR_14].p);

    FUNC_1(VAR_11);
    FUNC_1(VAR_12);

    return VAR_13;
}
